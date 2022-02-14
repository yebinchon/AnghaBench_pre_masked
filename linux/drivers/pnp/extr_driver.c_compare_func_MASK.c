
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 3; VAR_2 < 7; VAR_2++) {
  if (VAR_0[VAR_2] != 'X' &&
      VAR_1[VAR_2] != 'X' && FUNC_0(VAR_0[VAR_2]) != FUNC_0(VAR_1[VAR_2]))
   return 0;
 }
 return 1;
}
