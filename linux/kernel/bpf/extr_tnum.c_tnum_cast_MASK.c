
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tnum {unsigned long long value; unsigned long long mask; } ;



struct tnum FUNC_0(struct tnum VAR_0, u8 VAR_1)
{
 VAR_0.value &= (1ULL << (VAR_1 * 8)) - 1;
 VAR_0.mask &= (1ULL << (VAR_1 * 8)) - 1;
 return VAR_0;
}
