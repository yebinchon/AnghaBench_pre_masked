
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (void*,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

void FUNC_5(void)
{
 unsigned long VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2) {
  FUNC_3("Unable to allocate free page\n");
  return;
 }

 FUNC_3("Writing to the buddy page before free\n");
 FUNC_2((void *)VAR_2, 0x3, VAR_1);
 FUNC_1(VAR_2);
 FUNC_4();
 FUNC_3("Attempting bad write to the buddy page after free\n");
 FUNC_2((void *)VAR_2, 0x78, VAR_1);

 VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_2);
 FUNC_4();
}
