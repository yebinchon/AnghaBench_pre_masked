
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(const char *VAR_0, size_t VAR_1)
{
 if (VAR_1 == 1 && VAR_0[0] == '.')
  return 1;
 else if (VAR_1 == 2 && VAR_0[0] == '.' && VAR_0[1] == '.')
  return 1;

 return 0;
}
