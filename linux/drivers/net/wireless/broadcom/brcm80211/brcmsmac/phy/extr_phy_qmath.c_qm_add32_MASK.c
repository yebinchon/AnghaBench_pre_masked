
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;



s32 FUNC_0(s32 VAR_0, s32 VAR_1)
{
 s32 VAR_2;
 VAR_2 = VAR_0 + VAR_1;
 if (VAR_0 < 0 && VAR_1 < 0 && VAR_2 > 0)
  VAR_2 = 0x80000000;
 else if (VAR_0 > 0 && VAR_1 > 0 && VAR_2 < 0)
  VAR_2 = 0x7fffffff;

 return VAR_2;
}
