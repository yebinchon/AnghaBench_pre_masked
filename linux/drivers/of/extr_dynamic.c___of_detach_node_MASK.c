
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int phandle; struct device_node* sibling; struct device_node* child; struct device_node* parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (struct device_node*,int ) ;

void FUNC_4(struct device_node *VAR_1)
{
 struct device_node *VAR_2;

 if (FUNC_0(FUNC_2(VAR_1, VAR_0)))
  return;

 VAR_2 = VAR_1->parent;
 if (FUNC_0(!VAR_2))
  return;

 if (VAR_2->child == VAR_1)
  VAR_2->child = VAR_1->sibling;
 else {
  struct device_node *VAR_3;
  for (VAR_3 = VAR_1->parent->child;
       VAR_3->sibling != VAR_1;
       VAR_3 = VAR_3->sibling)
   ;
  VAR_3->sibling = VAR_1->sibling;
 }

 FUNC_3(VAR_1, VAR_0);


 FUNC_1(VAR_1->phandle);
}
