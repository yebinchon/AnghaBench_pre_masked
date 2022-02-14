
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tnum {scalar_t__ mask; scalar_t__ value; } ;
typedef int s64 ;


 struct tnum FUNC_0 (int,int) ;

struct tnum FUNC_1(struct tnum VAR_0, u8 VAR_1)
{





 return FUNC_0((s64)VAR_0.value >> VAR_1, (s64)VAR_0.mask >> VAR_1);
}
