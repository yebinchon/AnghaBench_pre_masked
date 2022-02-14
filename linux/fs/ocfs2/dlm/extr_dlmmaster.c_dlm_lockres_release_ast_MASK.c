
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int state; int wq; int spinlock; scalar_t__ migration_pending; int asts_reserved; } ;
struct dlm_ctxt {int migration_wq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dlm_ctxt *VAR_1,
        struct dlm_lock_resource *VAR_2)
{
 if (!FUNC_1(&VAR_2->asts_reserved, &VAR_2->spinlock))
  return;

 if (!VAR_2->migration_pending) {
  FUNC_2(&VAR_2->spinlock);
  return;
 }

 FUNC_0(VAR_2->state & VAR_0);
 VAR_2->migration_pending = 0;
 VAR_2->state |= VAR_0;
 FUNC_2(&VAR_2->spinlock);
 FUNC_3(&VAR_2->wq);
 FUNC_3(&VAR_1->migration_wq);
}
