
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_1, const void *VAR_2)
{
 u32 VAR_3 = *((u32 *)VAR_1);
 u32 VAR_4 = *((u32 *)VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_0[VAR_5] != 0; VAR_5++) {
  if (VAR_3 == VAR_0[VAR_5])
   return -1;

  if (VAR_4 == VAR_0[VAR_5])
   return 1;
 }
 return 0;
}
