
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2t_entry {scalar_t__ state; size_t hash; struct l2t_entry* next; struct l2t_entry* first; int refcnt; } ;
struct l2t_data {size_t l2t_size; struct l2t_entry* l2tab; int nfree; struct l2t_entry* rover; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static struct l2t_entry *FUNC_2(struct l2t_data *VAR_2)
{
 struct l2t_entry *VAR_3, *VAR_4, **VAR_5;

 if (!FUNC_1(&VAR_2->nfree))
  return ((void*)0);


 for (VAR_4 = VAR_2->rover, VAR_3 = &VAR_2->l2tab[VAR_2->l2t_size]; VAR_4 != VAR_3; ++VAR_4)
  if (FUNC_1(&VAR_4->refcnt) == 0)
   goto found;

 for (VAR_4 = VAR_2->l2tab; FUNC_1(&VAR_4->refcnt); ++VAR_4)
  ;
found:
 VAR_2->rover = VAR_4 + 1;
 FUNC_0(&VAR_2->nfree);





 if (VAR_4->state < VAR_0)
  for (VAR_5 = &VAR_2->l2tab[VAR_4->hash].first; *VAR_5; VAR_5 = &(*VAR_5)->next)
   if (*VAR_5 == VAR_4) {
    *VAR_5 = VAR_4->next;
    VAR_4->next = ((void*)0);
    break;
   }

 VAR_4->state = VAR_1;
 return VAR_4;
}
