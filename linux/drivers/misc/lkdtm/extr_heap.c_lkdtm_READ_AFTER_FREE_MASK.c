
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*,...) ;

void FUNC_4(void)
{
 int *VAR_1, *VAR_2, VAR_3;
 size_t VAR_4 = 1024;





 size_t VAR_5 = (VAR_4 / sizeof(*VAR_1)) / 2;

 VAR_1 = FUNC_2(VAR_4, VAR_0);
 if (!VAR_1) {
  FUNC_3("Unable to allocate base memory.\n");
  return;
 }

 VAR_2 = FUNC_2(VAR_4, VAR_0);
 if (!VAR_2) {
  FUNC_3("Unable to allocate val memory.\n");
  FUNC_1(VAR_1);
  return;
 }

 *VAR_2 = 0x12345678;
 VAR_1[VAR_5] = *VAR_2;
 FUNC_3("Value in memory before free: %x\n", VAR_1[VAR_5]);

 FUNC_1(VAR_1);

 FUNC_3("Attempting bad read from freed memory\n");
 VAR_3 = VAR_1[VAR_5];
 if (VAR_3 != *VAR_2) {

  FUNC_3("Memory correctly poisoned (%x)\n", VAR_3);
  FUNC_0();
 }
 FUNC_3("Memory was not poisoned\n");

 FUNC_1(VAR_2);
}
