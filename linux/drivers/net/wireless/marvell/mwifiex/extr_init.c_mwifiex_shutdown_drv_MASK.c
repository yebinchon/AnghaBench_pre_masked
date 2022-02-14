
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mwifiex_rxinfo {size_t bss_num; } ;
struct TYPE_2__ {int rx_dropped; } ;
struct mwifiex_private {TYPE_1__ stats; } ;
struct mwifiex_adapter {scalar_t__ hw_status; size_t priv_num; int rx_proc_lock; struct mwifiex_private** priv; int rx_pending; int rx_data_q; int tx_data_q; int tx_queued; int * curr_cmd; int cmd_timer; } ;
typedef size_t s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mwifiex_rxinfo* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct mwifiex_private*) ;
 int FUNC_6 (struct mwifiex_adapter*) ;
 int FUNC_7 (struct mwifiex_private*) ;
 int FUNC_8 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_9 (struct mwifiex_private*) ;
 int FUNC_10 (struct mwifiex_adapter*,int *) ;
 int FUNC_11 (struct mwifiex_adapter*,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void
FUNC_15(struct mwifiex_adapter *VAR_3)
{
 struct mwifiex_private *VAR_4;
 s32 VAR_5;
 struct sk_buff *VAR_6;


 if (VAR_3->hw_status == VAR_1)
  return;


 if (VAR_3->curr_cmd) {
  FUNC_8(VAR_3, VAR_2,
       "curr_cmd is still in processing\n");
  FUNC_3(&VAR_3->cmd_timer);
  FUNC_10(VAR_3, VAR_3->curr_cmd);
  VAR_3->curr_cmd = ((void*)0);
 }


 FUNC_8(VAR_3, VAR_0,
      "info: shutdown mwifiex...\n");


 for (VAR_5 = 0; VAR_5 < VAR_3->priv_num; VAR_5++) {
  if (VAR_3->priv[VAR_5]) {
   VAR_4 = VAR_3->priv[VAR_5];

   FUNC_7(VAR_4);
   FUNC_5(VAR_4);
   FUNC_9(VAR_4);
  }
 }

 FUNC_2(&VAR_3->tx_queued, 0);
 while ((VAR_6 = FUNC_12(&VAR_3->tx_data_q)))
  FUNC_11(VAR_3, VAR_6, 0, 0);

 FUNC_13(&VAR_3->rx_proc_lock);

 while ((VAR_6 = FUNC_12(&VAR_3->rx_data_q))) {
  struct mwifiex_rxinfo *VAR_7 = FUNC_0(VAR_6);

  FUNC_1(&VAR_3->rx_pending);
  VAR_4 = VAR_3->priv[VAR_7->bss_num];
  if (VAR_4)
   VAR_4->stats.rx_dropped++;

  FUNC_4(VAR_6);
 }

 FUNC_14(&VAR_3->rx_proc_lock);

 FUNC_6(VAR_3);

 VAR_3->hw_status = VAR_1;
}
