
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,int *,char const*) ;
 int FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_0)
{
 struct device_node *VAR_1;
 bool VAR_2 = 0;

 VAR_1 = FUNC_0(((void*)0), ((void*)0), VAR_0);
 if (!VAR_1)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1, "gpio-ranges", ((void*)0));

 FUNC_2(VAR_1);

 return VAR_2;
}
