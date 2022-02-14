
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnum {int mask; int value; } ;



bool FUNC_0(struct tnum VAR_0, struct tnum VAR_1)
{
 if (VAR_1.mask & ~VAR_0.mask)
  return 0;
 VAR_1.value &= ~VAR_0.mask;
 return VAR_0.value == VAR_1.value;
}
