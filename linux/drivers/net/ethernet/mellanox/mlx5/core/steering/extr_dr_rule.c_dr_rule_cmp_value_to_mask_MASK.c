
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(u8 *VAR_0, u8 *VAR_1,
          u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_1[VAR_4] & ~VAR_0[VAR_4]) {
   FUNC_0("Rule parameters contains a value not specified by mask\n");
   return 0;
  }
 }
 return 1;
}
