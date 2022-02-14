
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;


 struct property* FUNC_0 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*) ;

struct device_node *FUNC_3(struct device_node *VAR_0)
{
 struct device_node *VAR_1;
 int VAR_2;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = FUNC_2(VAR_0);

 for (VAR_2 = 0; VAR_2 < 2 && VAR_1; ++VAR_2) {
  struct property *VAR_3;

  VAR_3 = FUNC_0(VAR_1, "compatible", ((void*)0));

  if (VAR_3)
   return VAR_1;

  VAR_1 = FUNC_1(VAR_1);
 }

 return ((void*)0);
}
