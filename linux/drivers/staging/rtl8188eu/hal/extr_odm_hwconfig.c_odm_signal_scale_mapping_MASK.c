
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct odm_dm_struct {int dummy; } ;
typedef int s32 ;



__attribute__((used)) static s32 FUNC_0(struct odm_dm_struct *VAR_0, s32 VAR_1)
{
 s32 VAR_2 = 0;

 if (VAR_1 >= 51 && VAR_1 <= 100)
  VAR_2 = 100;
 else if (VAR_1 >= 41 && VAR_1 <= 50)
  VAR_2 = 80 + ((VAR_1 - 40) * 2);
 else if (VAR_1 >= 31 && VAR_1 <= 40)
  VAR_2 = 66 + (VAR_1 - 30);
 else if (VAR_1 >= 21 && VAR_1 <= 30)
  VAR_2 = 54 + (VAR_1 - 20);
 else if (VAR_1 >= 10 && VAR_1 <= 20)
  VAR_2 = 42 + (((VAR_1 - 10) * 2) / 3);
 else if (VAR_1 >= 5 && VAR_1 <= 9)
  VAR_2 = 22 + (((VAR_1 - 5) * 3) / 2);
 else if (VAR_1 >= 1 && VAR_1 <= 4)
  VAR_2 = 6 + (((VAR_1 - 1) * 3) / 2);
 else
  VAR_2 = VAR_1;

 return VAR_2;
}
