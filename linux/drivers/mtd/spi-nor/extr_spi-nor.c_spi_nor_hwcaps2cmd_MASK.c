
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1, const int VAR_2[][2], size_t VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_2[VAR_4][0] == (int)VAR_1)
   return VAR_2[VAR_4][1];

 return -VAR_0;
}
