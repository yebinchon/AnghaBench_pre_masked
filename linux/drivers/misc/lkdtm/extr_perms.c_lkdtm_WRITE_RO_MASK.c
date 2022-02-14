
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long*) ;
 int VAR_0 ;

void FUNC_1(void)
{

 unsigned long *VAR_1 = (unsigned long *)&VAR_0;

 FUNC_0("attempting bad rodata write at %px\n", VAR_1);
 *VAR_1 ^= 0xabcd1234;
}
