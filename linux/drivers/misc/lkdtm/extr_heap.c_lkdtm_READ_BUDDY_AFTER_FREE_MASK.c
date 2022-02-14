
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,...) ;

void FUNC_6(void)
{
 unsigned long VAR_1 = FUNC_1(VAR_0);
 int VAR_2, *VAR_3;
 int *VAR_4;

 if (!VAR_1) {
  FUNC_5("Unable to allocate free page\n");
  return;
 }

 VAR_3 = FUNC_4(1024, VAR_0);
 if (!VAR_3) {
  FUNC_5("Unable to allocate val memory.\n");
  FUNC_2(VAR_1);
  return;
 }

 VAR_4 = (int *)VAR_1;

 *VAR_3 = 0x12345678;
 VAR_4[0] = *VAR_3;
 FUNC_5("Value in memory before free: %x\n", VAR_4[0]);
 FUNC_2(VAR_1);
 FUNC_5("Attempting to read from freed memory\n");
 VAR_2 = VAR_4[0];
 if (VAR_2 != *VAR_3) {

  FUNC_5("Memory correctly poisoned (%x)\n", VAR_2);
  FUNC_0();
 }
 FUNC_5("Buddy page was not poisoned\n");

 FUNC_3(VAR_3);
}
