
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2t_entry {int lock; int * neigh; int refcnt; } ;
struct l2t_data {int nfree; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct l2t_data *VAR_0, struct l2t_entry *VAR_1)
{
 FUNC_3(&VAR_1->lock);
 if (FUNC_1(&VAR_1->refcnt) == 0) {
  if (VAR_1->neigh) {
   FUNC_2(VAR_1->neigh);
   VAR_1->neigh = ((void*)0);
  }
 }
 FUNC_4(&VAR_1->lock);
 FUNC_0(&VAR_0->nfree);
}
