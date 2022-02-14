
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, size_t VAR_2)
{
 if (VAR_2 != 0) {
  if (VAR_1[0] == '1')
   return 1;
  if (VAR_1[0] == '0')
   return 0;
  if (VAR_2 >= 4 && FUNC_0(VAR_1, "true", 4) == 0)
   return 1;
  if (VAR_2 >= 5 && FUNC_0(VAR_1, "false", 5) == 0)
   return 0;
  if (VAR_2 >= 3 && FUNC_0(VAR_1, "yes", 3) == 0)
   return 1;
  if (VAR_2 >= 2 && FUNC_0(VAR_1, "no", 2) == 0)
   return 0;
  if (VAR_2 >= 2 && FUNC_0(VAR_1, "on", 2) == 0)
   return 1;
  if (VAR_2 >= 3 && FUNC_0(VAR_1, "off", 3) == 0)
   return 0;
 }
 return -VAR_0;
}
