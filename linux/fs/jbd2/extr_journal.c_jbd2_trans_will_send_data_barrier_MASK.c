
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ t_tid; scalar_t__ t_state; int t_need_data_flush; } ;
typedef TYPE_1__ transaction_t ;
typedef scalar_t__ tid_t ;
struct TYPE_5__ {int j_flags; scalar_t__ j_fs_dev; scalar_t__ j_dev; int j_state_lock; TYPE_1__* j_committing_transaction; int j_commit_sequence; } ;
typedef TYPE_2__ journal_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

int FUNC_3(journal_t *VAR_3, tid_t VAR_4)
{
 int VAR_5 = 0;
 transaction_t *VAR_6;

 if (!(VAR_3->j_flags & VAR_0))
  return 0;
 FUNC_0(&VAR_3->j_state_lock);

 if (FUNC_2(VAR_3->j_commit_sequence, VAR_4))
  goto out;
 VAR_6 = VAR_3->j_committing_transaction;
 if (!VAR_6 || VAR_6->t_tid != VAR_4) {
  VAR_5 = 1;
  goto out;
 }




 if (VAR_3->j_fs_dev != VAR_3->j_dev) {
  if (!VAR_6->t_need_data_flush ||
      VAR_6->t_state >= VAR_1)
   goto out;
 } else {
  if (VAR_6->t_state >= VAR_2)
   goto out;
 }
 VAR_5 = 1;
out:
 FUNC_1(&VAR_3->j_state_lock);
 return VAR_5;
}
