
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u16 ;



__attribute__((used)) static bool FUNC_0(u16 VAR_0,
         const u16 VAR_1[],
         size_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_0 == VAR_1[VAR_3])
   return 1;

 return 0;
}
