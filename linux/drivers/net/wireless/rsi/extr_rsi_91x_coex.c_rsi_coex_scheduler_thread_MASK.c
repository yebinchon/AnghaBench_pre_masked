
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rsi_common {scalar_t__ coex_cb; } ;
struct TYPE_2__ {int completion; int event; int thread_done; } ;
struct rsi_coex_ctrl_block {TYPE_1__ coex_tx_thread; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct rsi_coex_ctrl_block*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct rsi_common *VAR_1)
{
 struct rsi_coex_ctrl_block *VAR_2 =
  (struct rsi_coex_ctrl_block *)VAR_1->coex_cb;
 u32 VAR_3 = VAR_0;

 do {
  FUNC_4(&VAR_2->coex_tx_thread.event, VAR_3);
  FUNC_3(&VAR_2->coex_tx_thread.event);

  FUNC_2(VAR_2);
 } while (FUNC_0(&VAR_2->coex_tx_thread.thread_done) == 0);

 FUNC_1(&VAR_2->coex_tx_thread.completion, 0);
}
