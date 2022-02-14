
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* sibling; struct device_node* child; } ;


 scalar_t__ FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;

__attribute__((used)) static struct device_node *FUNC_2(const struct device_node *VAR_0,
      struct device_node *VAR_1)
{
 struct device_node *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 VAR_2 = VAR_1 ? VAR_1->sibling : VAR_0->child;
 for (; VAR_2; VAR_2 = VAR_2->sibling)
  if (FUNC_0(VAR_2))
   break;
 FUNC_1(VAR_1);
 return VAR_2;
}
