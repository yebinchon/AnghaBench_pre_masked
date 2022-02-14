
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(u32 VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 FUNC_1("bits:");
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_1 & (1 << VAR_3))
   FUNC_1(" %s", VAR_0[VAR_3]);
  if (VAR_2 & (1 << VAR_3))
   FUNC_1("*");
 }
}
