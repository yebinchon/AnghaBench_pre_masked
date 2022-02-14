
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0)
{
 while (*VAR_0 != '\0') {
  if (!FUNC_0(*VAR_0) && !FUNC_1(*VAR_0) && *VAR_0 != '_')
   return 0;
  VAR_0++;
 }
 return 1;
}
