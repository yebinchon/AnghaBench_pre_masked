
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* sibling; struct device_node* child; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 int VAR_0 ;
 struct device_node* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct device_node*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

struct device_node *FUNC_7(struct device_node *VAR_1)
{
 struct device_node *VAR_2 = ((void*)0);
 unsigned long VAR_3;
 struct device_node *VAR_4;

 if (!VAR_1)
  VAR_4 = FUNC_1("/cpus");

 FUNC_5(&VAR_0, VAR_3);
 if (VAR_1)
  VAR_2 = VAR_1->sibling;
 else if (VAR_4) {
  VAR_2 = VAR_4->child;
  FUNC_4(VAR_4);
 }
 for (; VAR_2; VAR_2 = VAR_2->sibling) {
  if (!(FUNC_3(VAR_2, "cpu") ||
        FUNC_0(VAR_2, "cpu")))
   continue;
  if (FUNC_2(VAR_2))
   break;
 }
 FUNC_4(VAR_1);
 FUNC_6(&VAR_0, VAR_3);
 return VAR_2;
}
