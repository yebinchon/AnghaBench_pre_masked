
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_txq {int n_window; int stuck_timer; TYPE_1__* entries; } ;
struct iwl_trans_pcie {int cmd_queue; int queue_used; struct iwl_txq** txq; } ;
struct iwl_trans {int dummy; } ;
struct TYPE_2__ {int free_buf; int cmd; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_txq*) ;
 int FUNC_5 (struct iwl_trans*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct iwl_trans *VAR_0, int VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_0(VAR_0);
 struct iwl_txq *VAR_3 = VAR_2->txq[VAR_1];
 int VAR_4;

 if (FUNC_1(!VAR_3))
  return;

 FUNC_5(VAR_0, VAR_1);


 if (VAR_1 == VAR_2->cmd_queue)
  for (VAR_4 = 0; VAR_4 < VAR_3->n_window; VAR_4++) {
   FUNC_6(VAR_3->entries[VAR_4].cmd);
   FUNC_6(VAR_3->entries[VAR_4].free_buf);
  }
 FUNC_3(&VAR_3->stuck_timer);

 FUNC_4(VAR_0, VAR_3);

 VAR_2->txq[VAR_1] = ((void*)0);

 FUNC_2(VAR_1, VAR_2->queue_used);
}
