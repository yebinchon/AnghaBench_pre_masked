
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;



s32 FUNC_0(s32 VAR_0)
{
 s32 VAR_1;

 if (VAR_0 >= 51 && VAR_0 <= 100)
  VAR_1 = 100;
 else if (VAR_0 >= 41 && VAR_0 <= 50)
  VAR_1 = 80 + ((VAR_0 - 40) * 2);
 else if (VAR_0 >= 31 && VAR_0 <= 40)
  VAR_1 = 66 + (VAR_0 - 30);
 else if (VAR_0 >= 21 && VAR_0 <= 30)
  VAR_1 = 54 + (VAR_0 - 20);
 else if (VAR_0 >= 10 && VAR_0 <= 20)
  VAR_1 = 42 + (((VAR_0 - 10) * 2) / 3);
 else if (VAR_0 >= 5 && VAR_0 <= 9)
  VAR_1 = 22 + (((VAR_0 - 5) * 3) / 2);
 else if (VAR_0 >= 1 && VAR_0 <= 4)
  VAR_1 = 6 + (((VAR_0 - 1) * 3) / 2);
 else
  VAR_1 = VAR_0;
 return VAR_1;
}
