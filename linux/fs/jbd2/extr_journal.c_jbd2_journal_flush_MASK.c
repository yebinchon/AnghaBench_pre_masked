
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int t_tid; } ;
typedef TYPE_1__ transaction_t ;
typedef int tid_t ;
struct TYPE_11__ {scalar_t__ j_head; scalar_t__ j_tail; scalar_t__ j_tail_sequence; scalar_t__ j_transaction_sequence; int j_state_lock; int * j_checkpoint_transactions; TYPE_1__* j_committing_transaction; TYPE_1__* j_running_transaction; int j_checkpoint_mutex; int j_list_lock; } ;
typedef TYPE_2__ journal_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(journal_t *VAR_3)
{
 int VAR_4 = 0;
 transaction_t *VAR_5 = ((void*)0);

 FUNC_11(&VAR_3->j_state_lock);


 if (VAR_3->j_running_transaction) {
  VAR_5 = VAR_3->j_running_transaction;
  FUNC_1(VAR_3, VAR_5->t_tid);
 } else if (VAR_3->j_committing_transaction)
  VAR_5 = VAR_3->j_committing_transaction;


 if (VAR_5) {
  tid_t VAR_6 = VAR_5->t_tid;

  FUNC_12(&VAR_3->j_state_lock);
  FUNC_5(VAR_3, VAR_6);
 } else {
  FUNC_12(&VAR_3->j_state_lock);
 }


 FUNC_9(&VAR_3->j_list_lock);
 while (!VAR_4 && VAR_3->j_checkpoint_transactions != ((void*)0)) {
  FUNC_10(&VAR_3->j_list_lock);
  FUNC_7(&VAR_3->j_checkpoint_mutex);
  VAR_4 = FUNC_4(VAR_3);
  FUNC_8(&VAR_3->j_checkpoint_mutex);
  FUNC_9(&VAR_3->j_list_lock);
 }
 FUNC_10(&VAR_3->j_list_lock);

 if (FUNC_2(VAR_3))
  return -VAR_0;

 FUNC_7(&VAR_3->j_checkpoint_mutex);
 if (!VAR_4) {
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4 < 0) {
   FUNC_8(&VAR_3->j_checkpoint_mutex);
   goto out;
  }
  VAR_4 = 0;
 }






 FUNC_6(VAR_3, VAR_2 | VAR_1);
 FUNC_8(&VAR_3->j_checkpoint_mutex);
 FUNC_11(&VAR_3->j_state_lock);
 FUNC_0(!VAR_3->j_running_transaction);
 FUNC_0(!VAR_3->j_committing_transaction);
 FUNC_0(!VAR_3->j_checkpoint_transactions);
 FUNC_0(VAR_3->j_head == VAR_3->j_tail);
 FUNC_0(VAR_3->j_tail_sequence == VAR_3->j_transaction_sequence);
 FUNC_12(&VAR_3->j_state_lock);
out:
 return VAR_4;
}
