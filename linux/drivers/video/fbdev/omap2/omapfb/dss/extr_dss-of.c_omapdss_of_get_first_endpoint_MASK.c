
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,int *) ;
 struct device_node* FUNC_2 (struct device_node const*,int *) ;

struct device_node *
FUNC_3(const struct device_node *VAR_0)
{
 struct device_node *VAR_1, *VAR_2;

 VAR_1 = FUNC_2(VAR_0, ((void*)0));

 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1, ((void*)0));

 FUNC_0(VAR_1);

 return VAR_2;
}
