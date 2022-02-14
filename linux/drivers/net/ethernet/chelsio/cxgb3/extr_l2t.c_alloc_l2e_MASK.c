
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2t_entry {scalar_t__ state; struct l2t_entry* next; struct l2t_entry* first; int ifindex; int addr; int refcnt; } ;
struct l2t_data {size_t nentries; struct l2t_entry* l2tab; int nfree; struct l2t_entry* rover; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,struct l2t_data*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static struct l2t_entry *FUNC_3(struct l2t_data *VAR_1)
{
 struct l2t_entry *VAR_2, *VAR_3, **VAR_4;

 if (!FUNC_2(&VAR_1->nfree))
  return ((void*)0);


 for (VAR_3 = VAR_1->rover, VAR_2 = &VAR_1->l2tab[VAR_1->nentries]; VAR_3 != VAR_2; ++VAR_3)
  if (FUNC_2(&VAR_3->refcnt) == 0)
   goto found;

 for (VAR_3 = &VAR_1->l2tab[1]; FUNC_2(&VAR_3->refcnt); ++VAR_3) ;
found:
 VAR_1->rover = VAR_3 + 1;
 FUNC_1(&VAR_1->nfree);





 if (VAR_3->state != VAR_0) {
  int VAR_5 = FUNC_0(VAR_3->addr, VAR_3->ifindex, VAR_1);

  for (VAR_4 = &VAR_1->l2tab[VAR_5].first; *VAR_4; VAR_4 = &(*VAR_4)->next)
   if (*VAR_4 == VAR_3) {
    *VAR_4 = VAR_3->next;
    break;
   }
  VAR_3->state = VAR_0;
 }
 return VAR_3;
}
