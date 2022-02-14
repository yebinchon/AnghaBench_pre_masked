
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_0, int VAR_1)
{
 if (VAR_1 > 0)
  return FUNC_0(VAR_0, "enabled\n");
 else if (VAR_1 == 0)
  return FUNC_0(VAR_0, "disabled\n");
 else
  return FUNC_0(VAR_0, "unknown\n");
}
