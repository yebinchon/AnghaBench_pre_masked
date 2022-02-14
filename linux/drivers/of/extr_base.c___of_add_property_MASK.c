
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; int name; } ;
struct device_node {struct property* properties; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(struct device_node *VAR_1, struct property *VAR_2)
{
 struct property **VAR_3;

 VAR_2->next = ((void*)0);
 VAR_3 = &VAR_1->properties;
 while (*VAR_3) {
  if (FUNC_0(VAR_2->name, (*VAR_3)->name) == 0)

   return -VAR_0;

  VAR_3 = &(*VAR_3)->next;
 }
 *VAR_3 = VAR_2;

 return 0;
}
