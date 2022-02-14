
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_3__ {scalar_t__ SupportInterface; } ;
typedef TYPE_1__* PDM_ODM_T ;


 scalar_t__ VAR_0 ;

s32 FUNC_0(PDM_ODM_T VAR_1, s32 VAR_2)
{
 s32 VAR_3 = 0;

 if (VAR_1->SupportInterface == VAR_0) {
  if (VAR_2 >= 51 && VAR_2 <= 100)
   VAR_3 = 100;
  else if (VAR_2 >= 41 && VAR_2 <= 50)
   VAR_3 = 80 + ((VAR_2 - 40)*2);
  else if (VAR_2 >= 31 && VAR_2 <= 40)
   VAR_3 = 66 + (VAR_2 - 30);
  else if (VAR_2 >= 21 && VAR_2 <= 30)
   VAR_3 = 54 + (VAR_2 - 20);
  else if (VAR_2 >= 10 && VAR_2 <= 20)
   VAR_3 = 42 + (((VAR_2 - 10) * 2) / 3);
  else if (VAR_2 >= 5 && VAR_2 <= 9)
   VAR_3 = 22 + (((VAR_2 - 5) * 3) / 2);
  else if (VAR_2 >= 1 && VAR_2 <= 4)
   VAR_3 = 6 + (((VAR_2 - 1) * 3) / 2);
  else
   VAR_3 = VAR_2;
 }

 return VAR_3;
}
