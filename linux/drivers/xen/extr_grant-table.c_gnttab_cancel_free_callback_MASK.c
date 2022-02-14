
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnttab_free_callback {struct gnttab_free_callback* next; } ;


 struct gnttab_free_callback* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct gnttab_free_callback *VAR_2)
{
 struct gnttab_free_callback **VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_1, VAR_4);
 for (VAR_3 = &VAR_0; *VAR_3; VAR_3 = &(*VAR_3)->next) {
  if (*VAR_3 == VAR_2) {
   *VAR_3 = VAR_2->next;
   break;
  }
 }
 FUNC_1(&VAR_1, VAR_4);
}
