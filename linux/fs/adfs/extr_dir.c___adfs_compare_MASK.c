
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_0, u32 VAR_1,
     const char *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 if (VAR_1 != VAR_3)
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (FUNC_0(VAR_0[VAR_4]) != FUNC_0(VAR_2[VAR_4]))
   return 1;

 return 0;
}
