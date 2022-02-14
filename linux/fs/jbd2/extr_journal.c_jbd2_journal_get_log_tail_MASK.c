
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long t_log_start; int t_tid; } ;
typedef TYPE_1__ transaction_t ;
typedef int tid_t ;
struct TYPE_5__ {unsigned long j_head; int j_state_lock; int j_list_lock; int j_tail_sequence; int j_transaction_sequence; TYPE_1__* j_running_transaction; TYPE_1__* j_committing_transaction; TYPE_1__* j_checkpoint_transactions; } ;
typedef TYPE_2__ journal_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(journal_t *VAR_0, tid_t *VAR_1,
         unsigned long *VAR_2)
{
 transaction_t *VAR_3;
 int VAR_4;

 FUNC_0(&VAR_0->j_state_lock);
 FUNC_2(&VAR_0->j_list_lock);
 VAR_3 = VAR_0->j_checkpoint_transactions;
 if (VAR_3) {
  *VAR_1 = VAR_3->t_tid;
  *VAR_2 = VAR_3->t_log_start;
 } else if ((VAR_3 = VAR_0->j_committing_transaction) != ((void*)0)) {
  *VAR_1 = VAR_3->t_tid;
  *VAR_2 = VAR_3->t_log_start;
 } else if ((VAR_3 = VAR_0->j_running_transaction) != ((void*)0)) {
  *VAR_1 = VAR_3->t_tid;
  *VAR_2 = VAR_0->j_head;
 } else {
  *VAR_1 = VAR_0->j_transaction_sequence;
  *VAR_2 = VAR_0->j_head;
 }
 VAR_4 = FUNC_4(*VAR_1, VAR_0->j_tail_sequence);
 FUNC_3(&VAR_0->j_list_lock);
 FUNC_1(&VAR_0->j_state_lock);

 return VAR_4;
}
