
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ const u32 ;



__attribute__((used)) static u8 FUNC_0(u32 VAR_0, const u32 *VAR_1, u8 VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++)
  if (VAR_0 < VAR_1[VAR_3])
   break;

 return VAR_3 - 1;
}
