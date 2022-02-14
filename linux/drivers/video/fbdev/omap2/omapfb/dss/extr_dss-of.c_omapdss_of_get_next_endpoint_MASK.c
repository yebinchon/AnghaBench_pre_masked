
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node const*,struct device_node*) ;
 int FUNC_1 (struct device_node*,char*) ;

struct device_node *
FUNC_2(const struct device_node *VAR_0,
        struct device_node *VAR_1)
{
 struct device_node *VAR_2 = ((void*)0);

 if (!VAR_0)
  return ((void*)0);

 do {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (!VAR_2)
   return ((void*)0);
  VAR_1 = VAR_2;
 } while (!FUNC_1(VAR_2, "endpoint"));

 return VAR_2;
}
