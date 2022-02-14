
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* sibling; struct device_node* child; } ;


 int FUNC_0 (struct device_node*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

struct device_node *FUNC_5(const struct device_node *VAR_1,
 struct device_node *VAR_2)
{
 struct device_node *VAR_3;
 unsigned long VAR_4;

 if (!VAR_1)
  return ((void*)0);

 FUNC_3(&VAR_0, VAR_4);
 VAR_3 = VAR_2 ? VAR_2->sibling : VAR_1->child;
 for (; VAR_3; VAR_3 = VAR_3->sibling) {
  if (!FUNC_0(VAR_3))
   continue;
  if (FUNC_1(VAR_3))
   break;
 }
 FUNC_2(VAR_2);
 FUNC_4(&VAR_0, VAR_4);
 return VAR_3;
}
