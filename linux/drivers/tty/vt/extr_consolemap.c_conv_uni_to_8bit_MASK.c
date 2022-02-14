
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 size_t VAR_0 ;
 int** VAR_1 ;

int FUNC_0(u32 VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 0x100; VAR_3++)
  if (VAR_1[VAR_0][VAR_3] == VAR_2 ||
     (VAR_1[VAR_0][VAR_3] == (VAR_3 | 0xf000) && VAR_2 == VAR_3))
   return VAR_3;
 return -1;
}
