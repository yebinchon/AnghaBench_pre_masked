
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tid_t ;
struct TYPE_9__ {scalar_t__ j_commit_request; int j_state_lock; TYPE_1__* j_committing_transaction; TYPE_2__* j_running_transaction; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_8__ {scalar_t__ t_tid; } ;
struct TYPE_7__ {scalar_t__ t_tid; } ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(journal_t *VAR_0, tid_t VAR_1)
{
 int VAR_2 = 1;

 FUNC_2(&VAR_0->j_state_lock);
 if (VAR_0->j_running_transaction &&
     VAR_0->j_running_transaction->t_tid == VAR_1) {
  if (VAR_0->j_commit_request != VAR_1) {

   FUNC_3(&VAR_0->j_state_lock);
   FUNC_0(VAR_0, VAR_1);
   goto wait_commit;
  }
 } else if (!(VAR_0->j_committing_transaction &&
       VAR_0->j_committing_transaction->t_tid == VAR_1))
  VAR_2 = 0;
 FUNC_3(&VAR_0->j_state_lock);
 if (!VAR_2)
  return 0;
wait_commit:
 return FUNC_1(VAR_0, VAR_1);
}
