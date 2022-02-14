
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tnum {int value; int mask; } ;



bool FUNC_0(struct tnum VAR_0, u64 VAR_1)
{
 if (!VAR_1)
  return 1;
 return !((VAR_0.value | VAR_0.mask) & (VAR_1 - 1));
}
