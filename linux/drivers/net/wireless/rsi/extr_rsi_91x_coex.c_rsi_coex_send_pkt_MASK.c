
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct skb_info {int flags; } ;
struct sk_buff {scalar_t__ priority; } ;
struct rsi_common {int priv; scalar_t__ iface_down; scalar_t__ coex_cb; } ;
struct TYPE_3__ {int event; } ;
struct rsi_coex_ctrl_block {TYPE_1__ coex_tx_thread; int * coex_tx_qs; } ;
typedef enum rsi_coex_queues { ____Placeholder_rsi_coex_queues } rsi_coex_queues ;
struct TYPE_4__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct sk_buff*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rsi_common*,struct sk_buff*) ;
 int FUNC_5 (struct rsi_common*,struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;

int FUNC_8(void *VAR_7, struct sk_buff *VAR_8, u8 VAR_9)
{
 struct rsi_common *VAR_10 = (struct rsi_common *)VAR_7;
 struct rsi_coex_ctrl_block *VAR_11 =
  (struct rsi_coex_ctrl_block *)VAR_10->coex_cb;
 struct skb_info *VAR_12 = ((void*)0);
 enum rsi_coex_queues VAR_13;
 int VAR_14;

 VAR_13 = FUNC_3(VAR_9);
 if (VAR_13 == VAR_5) {
  FUNC_1(VAR_1, "Invalid coex queue\n");
  return -VAR_0;
 }
 if (VAR_13 != VAR_4 &&
     VAR_13 != VAR_6) {
  FUNC_7(&VAR_11->coex_tx_qs[VAR_13], VAR_8);
  FUNC_6(&VAR_11->coex_tx_thread.event);
  return 0;
 }
 if (VAR_10->iface_down) {
  VAR_12 =
   (struct skb_info *)&FUNC_0(VAR_8)->driver_data;

  if (!(VAR_12->flags & VAR_2)) {
   FUNC_2(VAR_10->priv, VAR_8, -VAR_0);
   return 0;
  }
 }


 if (VAR_8->priority == VAR_3)
  VAR_14 = FUNC_5(VAR_10, VAR_8);
 else
  VAR_14 = FUNC_4(VAR_10, VAR_8);

 return VAR_14;
}
