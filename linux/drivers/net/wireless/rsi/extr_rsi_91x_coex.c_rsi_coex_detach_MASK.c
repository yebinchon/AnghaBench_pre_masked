
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_common {scalar_t__ coex_cb; } ;
struct rsi_coex_ctrl_block {int * coex_tx_qs; int coex_tx_thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct rsi_coex_ctrl_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rsi_common *VAR_1)
{
 struct rsi_coex_ctrl_block *VAR_2 =
  (struct rsi_coex_ctrl_block *)VAR_1->coex_cb;
 int VAR_3;

 FUNC_1(&VAR_2->coex_tx_thread);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(&VAR_2->coex_tx_qs[VAR_3]);

 FUNC_0(VAR_2);
}
