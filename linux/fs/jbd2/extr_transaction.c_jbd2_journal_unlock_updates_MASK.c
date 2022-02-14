
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ j_barrier_count; int j_wait_transaction_locked; int j_state_lock; int j_barrier; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5 (journal_t *VAR_0)
{
 FUNC_0(VAR_0->j_barrier_count != 0);

 FUNC_1(&VAR_0->j_barrier);
 FUNC_3(&VAR_0->j_state_lock);
 --VAR_0->j_barrier_count;
 FUNC_4(&VAR_0->j_state_lock);
 FUNC_2(&VAR_0->j_wait_transaction_locked);
}
