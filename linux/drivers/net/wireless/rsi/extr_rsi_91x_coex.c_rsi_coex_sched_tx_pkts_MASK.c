
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rsi_coex_ctrl_block {int priv; int * coex_tx_qs; } ;
typedef enum rsi_coex_queues { ____Placeholder_rsi_coex_queues } rsi_coex_queues ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rsi_coex_ctrl_block*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rsi_coex_ctrl_block *VAR_3)
{
 enum rsi_coex_queues VAR_4 = VAR_2;
 struct sk_buff *VAR_5;

 do {
  VAR_4 = FUNC_0(VAR_3);
  FUNC_1(VAR_0, "queue = %d\n", VAR_4);

  if (VAR_4 == VAR_1) {
   VAR_5 = FUNC_3(&VAR_3->coex_tx_qs[VAR_1]);
   FUNC_2(VAR_3->priv, VAR_5);
  }
 } while (VAR_4 != VAR_2);
}
