
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, int VAR_1)
{
 const u8 *VAR_2 = VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2[VAR_3] != 0xff)
   return 0;

 return 1;
}
