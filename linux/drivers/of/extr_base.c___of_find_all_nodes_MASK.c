
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* sibling; struct device_node* parent; struct device_node* child; } ;


 struct device_node* VAR_0 ;

struct device_node *FUNC_0(struct device_node *VAR_1)
{
 struct device_node *VAR_2;
 if (!VAR_1) {
  VAR_2 = VAR_0;
 } else if (VAR_1->child) {
  VAR_2 = VAR_1->child;
 } else {

  VAR_2 = VAR_1;
  while (VAR_2->parent && !VAR_2->sibling)
   VAR_2 = VAR_2->parent;
  VAR_2 = VAR_2->sibling;
 }
 return VAR_2;
}
