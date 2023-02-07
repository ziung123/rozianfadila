#include <iostream>
#include <array>
using namespace std;

int main(){
    array<string, 5> names = {"RozianFadila", "Haikal", "Rizki", "Mia", "Nia"};

    printf("Ada %d data di dalam array: \n", names.size());

    for(int i = 0; i < names.size(); i++){
        cout << i << ". " << names[i] << endl;
    }

    return 0;
}