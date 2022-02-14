
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_handle_lock; int t_updates; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_6__ {int j_barrier; int j_state_lock; int j_wait_updates; TYPE_1__* j_running_transaction; int j_reserved_credits; int j_wait_reserved; int j_barrier_count; } ;
typedef TYPE_2__ journal_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(journal_t *VAR_2)
{
 FUNC_0(VAR_1);

 FUNC_3(VAR_2);

 FUNC_10(&VAR_2->j_state_lock);
 ++VAR_2->j_barrier_count;


 if (FUNC_1(&VAR_2->j_reserved_credits)) {
  FUNC_11(&VAR_2->j_state_lock);
  FUNC_9(VAR_2->j_wait_reserved,
      FUNC_1(&VAR_2->j_reserved_credits) == 0);
  FUNC_10(&VAR_2->j_state_lock);
 }


 while (1) {
  transaction_t *VAR_3 = VAR_2->j_running_transaction;

  if (!VAR_3)
   break;

  FUNC_7(&VAR_3->t_handle_lock);
  FUNC_5(&VAR_2->j_wait_updates, &VAR_1,
    VAR_0);
  if (!FUNC_1(&VAR_3->t_updates)) {
   FUNC_8(&VAR_3->t_handle_lock);
   FUNC_2(&VAR_2->j_wait_updates, &VAR_1);
   break;
  }
  FUNC_8(&VAR_3->t_handle_lock);
  FUNC_11(&VAR_2->j_state_lock);
  FUNC_6();
  FUNC_2(&VAR_2->j_wait_updates, &VAR_1);
  FUNC_10(&VAR_2->j_state_lock);
 }
 FUNC_11(&VAR_2->j_state_lock);







 FUNC_4(&VAR_2->j_barrier);
}
