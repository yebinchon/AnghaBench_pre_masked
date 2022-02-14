
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u8 ;



__attribute__((used)) static u8 FUNC_0(u8 VAR_0, const u8 VAR_1[][2], size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_1[VAR_3][0] == VAR_0)
   return VAR_1[VAR_3][1];


 return VAR_0;
}
