
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_16__ {int t_handle_lock; int t_tid; int t_updates; int t_outstanding_credits; TYPE_3__* t_journal; } ;
typedef TYPE_2__ transaction_t ;
typedef int tid_t ;
struct TYPE_17__ {int j_trans_commit_map; int j_state_lock; int j_commit_request; int j_wait_updates; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_18__ {int h_buffer_credits; int saved_alloc_context; TYPE_2__* h_transaction; TYPE_1__* h_rsv_handle; } ;
typedef TYPE_4__ handle_t ;
typedef int gfp_t ;
struct TYPE_15__ {int h_buffer_credits; } ;
struct TYPE_14__ {int * journal_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 TYPE_13__* VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int,char*,TYPE_4__*) ;
 TYPE_4__* FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;

int FUNC_18(handle_t *VAR_2, int VAR_3, gfp_t VAR_4)
{
 transaction_t *VAR_5 = VAR_2->h_transaction;
 journal_t *VAR_6;
 tid_t VAR_7;
 int VAR_8, VAR_9;



 if (FUNC_4(VAR_2))
  return 0;
 VAR_6 = VAR_5->t_journal;





 FUNC_0(FUNC_2(&VAR_5->t_updates) > 0);
 FUNC_0(FUNC_7() == VAR_2);

 FUNC_9(&VAR_6->j_state_lock);
 FUNC_12(&VAR_5->t_handle_lock);
 FUNC_3(VAR_2->h_buffer_credits,
     &VAR_5->t_outstanding_credits);
 if (VAR_2->h_rsv_handle) {
  FUNC_15(VAR_6,
         VAR_2->h_rsv_handle->h_buffer_credits);
 }
 if (FUNC_1(&VAR_5->t_updates))
  FUNC_17(&VAR_6->j_wait_updates);
 VAR_7 = VAR_5->t_tid;
 FUNC_13(&VAR_5->t_handle_lock);
 VAR_2->h_transaction = ((void*)0);
 VAR_1->journal_info = ((void*)0);

 FUNC_6(2, "restarting handle %p\n", VAR_2);
 VAR_8 = !FUNC_16(VAR_6->j_commit_request, VAR_7);
 FUNC_10(&VAR_6->j_state_lock);
 if (VAR_8)
  FUNC_5(VAR_6, VAR_7);

 FUNC_11(&VAR_6->j_trans_commit_map, 1, VAR_0);
 VAR_2->h_buffer_credits = VAR_3;





 FUNC_8(VAR_2->saved_alloc_context);
 VAR_9 = FUNC_14(VAR_6, VAR_2, VAR_4);
 return VAR_9;
}
