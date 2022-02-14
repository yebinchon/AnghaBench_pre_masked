
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {struct nls_table* next; struct module* owner; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nls_table* VAR_2 ;

int FUNC_2(struct nls_table *VAR_3, struct module *VAR_4)
{
 struct nls_table ** VAR_5 = &VAR_2;

 if (VAR_3->next)
  return -VAR_0;

 VAR_3->owner = VAR_4;
 FUNC_0(&VAR_1);
 while (*VAR_5) {
  if (VAR_3 == *VAR_5) {
   FUNC_1(&VAR_1);
   return -VAR_0;
  }
  VAR_5 = &(*VAR_5)->next;
 }
 VAR_3->next = VAR_2;
 VAR_2 = VAR_3;
 FUNC_1(&VAR_1);
 return 0;
}
