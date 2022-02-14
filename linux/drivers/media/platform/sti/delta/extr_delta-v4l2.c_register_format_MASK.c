
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;



__attribute__((used)) static void FUNC_0(u32 VAR_0, u32 VAR_1[], u32 *VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < *VAR_2; VAR_3++) {
  if (VAR_0 == VAR_1[VAR_3])
   return;
 }

 VAR_1[(*VAR_2)++] = VAR_0;
}
