
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* next; } ;
struct device_node {struct property* deadprops; struct property* properties; } ;


 int VAR_0 ;

int FUNC_0(struct device_node *VAR_1, struct property *VAR_2)
{
 struct property **VAR_3;

 for (VAR_3 = &VAR_1->properties; *VAR_3; VAR_3 = &(*VAR_3)->next) {
  if (*VAR_3 == VAR_2)
   break;
 }
 if (*VAR_3 == ((void*)0))
  return -VAR_0;


 *VAR_3 = VAR_2->next;
 VAR_2->next = VAR_1->deadprops;
 VAR_1->deadprops = VAR_2;

 return 0;
}
