
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int full_name; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct device_node *VAR_0,
  const struct device_node *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_0->full_name);
 const char *VAR_3 = FUNC_0(VAR_1->full_name);

 return FUNC_1(VAR_2, VAR_3);
}
