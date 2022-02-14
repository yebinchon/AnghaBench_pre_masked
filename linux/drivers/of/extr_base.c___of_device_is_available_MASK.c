
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 char* FUNC_0 (struct device_node const*,char*,int*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool FUNC_2(const struct device_node *VAR_0)
{
 const char *VAR_1;
 int VAR_2;

 if (!VAR_0)
  return 0;

 VAR_1 = FUNC_0(VAR_0, "status", &VAR_2);
 if (VAR_1 == ((void*)0))
  return 1;

 if (VAR_2 > 0) {
  if (!FUNC_1(VAR_1, "okay") || !FUNC_1(VAR_1, "ok"))
   return 1;
 }

 return 0;
}
