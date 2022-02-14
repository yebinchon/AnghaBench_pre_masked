
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tnum {int mask; int value; } ;


 struct tnum FUNC_0 (int,int) ;

struct tnum FUNC_1(struct tnum VAR_0, struct tnum VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_2 = VAR_0.mask + VAR_1.mask;
 VAR_3 = VAR_0.value + VAR_1.value;
 VAR_4 = VAR_2 + VAR_3;
 VAR_5 = VAR_4 ^ VAR_3;
 VAR_6 = VAR_5 | VAR_0.mask | VAR_1.mask;
 return FUNC_0(VAR_3 & ~VAR_6, VAR_6);
}
