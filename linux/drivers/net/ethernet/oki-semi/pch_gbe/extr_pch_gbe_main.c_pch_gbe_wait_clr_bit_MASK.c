
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, u32 VAR_1)
{
 u32 VAR_2;


 VAR_2 = 1000;
 while ((FUNC_1(VAR_0) & VAR_1) && --VAR_2)
  FUNC_0();
 if (!VAR_2)
  FUNC_2("Error: busy bit is not cleared\n");
}
