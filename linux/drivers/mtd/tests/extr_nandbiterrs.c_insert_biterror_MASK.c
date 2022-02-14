
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int writesize; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned int,int) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_4(unsigned VAR_3)
{
 int VAR_4;

 while (VAR_3 < VAR_1->writesize) {
  for (VAR_4 = 7; VAR_4 >= 0; VAR_4--) {
   if (FUNC_1(VAR_2[VAR_3], VAR_4)) {
    FUNC_0(VAR_2[VAR_3], VAR_4);
    FUNC_3("Inserted biterror @ %u/%u\n", VAR_3, VAR_4);
    return 0;
   }
  }
  VAR_3++;
 }
 FUNC_2("biterror: Failed to find a '1' bit\n");
 return -VAR_0;
}
