
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int full_name; } ;


 char* FUNC_0 (int ) ;
 char const* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

bool FUNC_4(const struct device_node *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 size_t VAR_3;

 if (!VAR_0)
  return 0;

 VAR_2 = FUNC_0(VAR_0->full_name);
 VAR_3 = FUNC_1(VAR_2, '@') - VAR_2;

 return (FUNC_2(VAR_1) == VAR_3) && (FUNC_3(VAR_2, VAR_1, VAR_3) == 0);
}
