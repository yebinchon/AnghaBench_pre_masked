
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tnum {int value; int mask; } ;



__attribute__((used)) static u64 FUNC_0(struct tnum VAR_0)
{
 return (VAR_0.value | VAR_0.mask) & ~0xffffffffULL;
}
