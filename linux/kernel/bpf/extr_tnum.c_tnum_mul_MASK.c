
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tnum {int value; int mask; } ;


 struct tnum FUNC_0 (int,int ) ;
 struct tnum FUNC_1 (struct tnum,int,int) ;

struct tnum FUNC_2(struct tnum VAR_0, struct tnum VAR_1)
{
 struct tnum VAR_2;
 u64 VAR_3;

 VAR_3 = VAR_0.value * VAR_1.value;
 VAR_2 = FUNC_1(FUNC_0(VAR_3, 0), VAR_0.mask, VAR_1.mask | VAR_1.value);
 return FUNC_1(VAR_2, VAR_1.mask, VAR_0.value);
}
