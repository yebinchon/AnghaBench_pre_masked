
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct l2t_entry {scalar_t__ state; scalar_t__ vlan; scalar_t__ lport; size_t hash; struct l2t_entry* next; struct l2t_entry* first; int dmac; int refcnt; } ;
struct l2t_data {size_t l2t_size; struct l2t_entry* l2tab; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static struct l2t_entry *FUNC_2(struct l2t_data *VAR_2, u16 VAR_3,
        u8 VAR_4, u8 *VAR_5)
{
 struct l2t_entry *VAR_6, *VAR_7, **VAR_8;
 struct l2t_entry *VAR_9 = ((void*)0);

 for (VAR_7 = &VAR_2->l2tab[0], VAR_6 = &VAR_2->l2tab[VAR_2->l2t_size]; VAR_7 != VAR_6; ++VAR_7) {
  if (FUNC_0(&VAR_7->refcnt) == 0) {
   if (!VAR_9)
    VAR_9 = VAR_7;
  } else {
   if (VAR_7->state == VAR_0) {
    if (FUNC_1(VAR_7->dmac, VAR_5) &&
        (VAR_7->vlan == VAR_3) && (VAR_7->lport == VAR_4))
     goto exists;
   }
  }
 }

 if (VAR_9) {
  VAR_7 = VAR_9;
  goto found;
 }

 return ((void*)0);

found:



 if (VAR_7->state < VAR_0)
  for (VAR_8 = &VAR_2->l2tab[VAR_7->hash].first; *VAR_8; VAR_8 = &(*VAR_8)->next)
   if (*VAR_8 == VAR_7) {
    *VAR_8 = VAR_7->next;
    VAR_7->next = ((void*)0);
    break;
   }
 VAR_7->state = VAR_1;

exists:
 return VAR_7;
}
