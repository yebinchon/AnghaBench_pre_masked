
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*) ;

struct device_node *FUNC_3(struct device_node *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0)
  return ((void*)0);





 FUNC_1(VAR_0);


 for (VAR_1 = 3; VAR_1 && VAR_0; VAR_1--) {
  VAR_0 = FUNC_0(VAR_0);
  if (VAR_1 == 2 && !FUNC_2(VAR_0, "ports"))
   break;
 }
 return VAR_0;
}
