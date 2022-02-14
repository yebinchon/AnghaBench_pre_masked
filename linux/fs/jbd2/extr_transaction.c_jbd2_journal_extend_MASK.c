
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ t_state; int t_handle_lock; int t_tid; int t_outstanding_credits; TYPE_3__* t_journal; } ;
typedef TYPE_2__ transaction_t ;
struct TYPE_11__ {int j_max_transaction_buffers; int j_state_lock; TYPE_1__* j_fs_dev; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_12__ {int h_buffer_credits; int h_requested_credits; int h_line_no; int h_type; TYPE_2__* h_transaction; } ;
typedef TYPE_4__ handle_t ;
struct TYPE_9__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int,char*,TYPE_4__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ,int ,int,int) ;

int FUNC_10(handle_t *VAR_3, int VAR_4)
{
 transaction_t *VAR_5 = VAR_3->h_transaction;
 journal_t *VAR_6;
 int VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_3))
  return -VAR_0;
 VAR_6 = VAR_5->t_journal;

 VAR_7 = 1;

 FUNC_5(&VAR_6->j_state_lock);


 if (VAR_5->t_state != VAR_2) {
  FUNC_4(3, "denied handle %p %d blocks: "
     "transaction not running\n", VAR_3, VAR_4);
  goto error_out;
 }

 FUNC_7(&VAR_5->t_handle_lock);
 VAR_8 = FUNC_0(VAR_4,
       &VAR_5->t_outstanding_credits);

 if (VAR_8 > VAR_6->j_max_transaction_buffers) {
  FUNC_4(3, "denied handle %p %d blocks: "
     "transaction too large\n", VAR_3, VAR_4);
  FUNC_1(VAR_4, &VAR_5->t_outstanding_credits);
  goto unlock;
 }

 if (VAR_8 + (VAR_8 >> VAR_1) >
     FUNC_3(VAR_6)) {
  FUNC_4(3, "denied handle %p %d blocks: "
     "insufficient log space\n", VAR_3, VAR_4);
  FUNC_1(VAR_4, &VAR_5->t_outstanding_credits);
  goto unlock;
 }

 FUNC_9(VAR_6->j_fs_dev->bd_dev,
     VAR_5->t_tid,
     VAR_3->h_type, VAR_3->h_line_no,
     VAR_3->h_buffer_credits,
     VAR_4);

 VAR_3->h_buffer_credits += VAR_4;
 VAR_3->h_requested_credits += VAR_4;
 VAR_7 = 0;

 FUNC_4(3, "extended handle %p by %d\n", VAR_3, VAR_4);
unlock:
 FUNC_8(&VAR_5->t_handle_lock);
error_out:
 FUNC_6(&VAR_6->j_state_lock);
 return VAR_7;
}
