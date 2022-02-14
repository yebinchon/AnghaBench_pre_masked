
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long*) ;
 unsigned long VAR_0 ;

void FUNC_1(void)
{
 unsigned long *VAR_1 = &VAR_0;






 if ((*VAR_1 & 0xAA) != 0xAA) {
  FUNC_0("%p was NOT written during init!?\n", VAR_1);
  return;
 }

 FUNC_0("attempting bad ro_after_init write at %px\n", VAR_1);
 *VAR_1 ^= 0xabcd1234;
}
