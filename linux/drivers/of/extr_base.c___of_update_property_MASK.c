
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; int name; } ;
struct device_node {struct property* deadprops; struct property* properties; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(struct device_node *VAR_0, struct property *VAR_1,
  struct property **VAR_2)
{
 struct property **VAR_3, *VAR_4;

 for (VAR_3 = &VAR_0->properties; *VAR_3; VAR_3 = &(*VAR_3)->next) {
  if (FUNC_0((*VAR_3)->name, VAR_1->name) == 0)
   break;
 }
 *VAR_2 = VAR_4 = *VAR_3;

 if (VAR_4) {

  VAR_1->next = VAR_4->next;
  *VAR_3 = VAR_1;
  VAR_4->next = VAR_0->deadprops;
  VAR_0->deadprops = VAR_4;
 } else {

  VAR_1->next = ((void*)0);
  *VAR_3 = VAR_1;
 }

 return 0;
}
