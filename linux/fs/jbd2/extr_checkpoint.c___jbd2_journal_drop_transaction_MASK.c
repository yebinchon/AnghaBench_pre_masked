
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ t_state; int t_tid; int t_updates; int * t_checkpoint_io_list; int * t_checkpoint_list; int * t_shadow_list; int * t_forget; int * t_buffers; struct TYPE_9__* t_cpnext; TYPE_1__* t_cpprev; } ;
typedef TYPE_2__ transaction_t ;
struct TYPE_10__ {TYPE_2__* j_running_transaction; TYPE_2__* j_committing_transaction; TYPE_2__* j_checkpoint_transactions; int j_list_lock; } ;
typedef TYPE_3__ journal_t ;
struct TYPE_8__ {TYPE_2__* t_cpnext; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;

void FUNC_5(journal_t *VAR_1, transaction_t *VAR_2)
{
 FUNC_1(&VAR_1->j_list_lock);
 if (VAR_2->t_cpnext) {
  VAR_2->t_cpnext->t_cpprev = VAR_2->t_cpprev;
  VAR_2->t_cpprev->t_cpnext = VAR_2->t_cpnext;
  if (VAR_1->j_checkpoint_transactions == VAR_2)
   VAR_1->j_checkpoint_transactions =
    VAR_2->t_cpnext;
  if (VAR_1->j_checkpoint_transactions == VAR_2)
   VAR_1->j_checkpoint_transactions = ((void*)0);
 }

 FUNC_0(VAR_2->t_state == VAR_0);
 FUNC_0(VAR_2->t_buffers == ((void*)0));
 FUNC_0(VAR_2->t_forget == ((void*)0));
 FUNC_0(VAR_2->t_shadow_list == ((void*)0));
 FUNC_0(VAR_2->t_checkpoint_list == ((void*)0));
 FUNC_0(VAR_2->t_checkpoint_io_list == ((void*)0));
 FUNC_0(FUNC_2(&VAR_2->t_updates) == 0);
 FUNC_0(VAR_1->j_committing_transaction != VAR_2);
 FUNC_0(VAR_1->j_running_transaction != VAR_2);

 FUNC_4(VAR_1, VAR_2);

 FUNC_3(1, "Dropping transaction %d, all done\n", VAR_2->t_tid);
}
