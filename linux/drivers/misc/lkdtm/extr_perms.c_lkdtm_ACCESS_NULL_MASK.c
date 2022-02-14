
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long*) ;

void FUNC_1(void)
{
 unsigned long VAR_0;
 unsigned long *VAR_1 = (unsigned long *)((void*)0);

 FUNC_0("attempting bad read at %px\n", VAR_1);
 VAR_0 = *VAR_1;
 VAR_0 += 0xc0dec0de;

 FUNC_0("attempting bad write at %px\n", VAR_1);
 *VAR_1 = VAR_0;
}
