
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int u8 ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct TYPE_14__ {int last_cmd_index; int * last_cmd_act; scalar_t__* last_cmd_id; int num_cmd_host_to_card_failure; } ;
struct TYPE_13__ {int status; } ;
struct TYPE_12__ {int (* host_to_card ) (struct mwifiex_adapter*,int ,TYPE_5__*,int *) ;} ;
struct mwifiex_adapter {scalar_t__ hw_status; scalar_t__ iface_type; int cmd_sent; int cmd_timer; TYPE_4__ dbg; int mwifiex_cmd_lock; struct cmd_ctrl_node* curr_cmd; TYPE_3__ cmd_wait_q; int intf_hdr_len; TYPE_2__ if_ops; int seq_num; int main_work; int workqueue; } ;
struct host_cmd_ds_command {scalar_t__ size; scalar_t__ command; scalar_t__ seq_num; } ;
struct cmd_ctrl_node {scalar_t__ wait_q_enabled; TYPE_5__* cmd_skb; TYPE_1__* priv; scalar_t__ cmd_no; } ;
struct TYPE_15__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_11__ {int bss_type; int bss_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_7 (struct mwifiex_adapter*,int ,char*,struct host_cmd_ds_command*,scalar_t__) ;
 int FUNC_8 (struct mwifiex_adapter*,struct cmd_ctrl_node*) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (TYPE_5__*,int ) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (TYPE_5__*,scalar_t__) ;
 int FUNC_14 (TYPE_5__*,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct mwifiex_adapter*,int ,TYPE_5__*,int *) ;
 int FUNC_18 (struct mwifiex_adapter*,int ,TYPE_5__*,int *) ;

__attribute__((used)) static int FUNC_19(struct mwifiex_private *VAR_18,
      struct cmd_ctrl_node *VAR_19)
{

 struct mwifiex_adapter *VAR_20 = VAR_18->adapter;
 int VAR_21;
 struct host_cmd_ds_command *VAR_22;
 uint16_t VAR_23;
 uint16_t VAR_24;

 if (!VAR_20 || !VAR_19)
  return -1;

 VAR_22 = (struct host_cmd_ds_command *) (VAR_19->cmd_skb->data);


 if (VAR_22 == ((void*)0) || VAR_22->size == 0) {
  FUNC_6(VAR_20, VAR_4,
       "DNLD_CMD: host_cmd is null\t"
       "or cmd size is 0, not sending\n");
  if (VAR_19->wait_q_enabled)
   VAR_20->cmd_wait_q.status = -1;
  FUNC_8(VAR_20, VAR_19);
  return -1;
 }

 VAR_23 = FUNC_3(VAR_22->command);
 VAR_19->cmd_no = VAR_23;
 VAR_24 = FUNC_3(VAR_22->size);

 if (VAR_20->hw_status == VAR_9 &&
     VAR_23 != VAR_6 &&
     VAR_23 != VAR_5) {
  FUNC_6(VAR_20, VAR_4,
       "DNLD_CMD: FW in reset state, ignore cmd %#x\n",
   VAR_23);
  FUNC_8(VAR_20, VAR_19);
  FUNC_10(VAR_20->workqueue, &VAR_20->main_work);
  return -1;
 }


 VAR_20->seq_num++;
 VAR_22->seq_num = FUNC_1(FUNC_0
     (VAR_20->seq_num,
      VAR_19->priv->bss_num,
      VAR_19->priv->bss_type));

 FUNC_15(&VAR_20->mwifiex_cmd_lock);
 VAR_20->curr_cmd = VAR_19;
 FUNC_16(&VAR_20->mwifiex_cmd_lock);


 if (VAR_19->cmd_skb->len > VAR_24)




  FUNC_14(VAR_19->cmd_skb, VAR_24);
 else if (VAR_19->cmd_skb->len < VAR_24)





  FUNC_13(VAR_19->cmd_skb, VAR_24 - VAR_19->cmd_skb->len);

 FUNC_6(VAR_20, VAR_0,
      "cmd: DNLD_CMD: %#x, act %#x, len %d, seqno %#x\n",
      VAR_23,
      FUNC_2((u8 *)VAR_22 + VAR_16),
      VAR_24, FUNC_3(VAR_22->seq_num));
 FUNC_7(VAR_20, VAR_1, "cmd buffer:", VAR_22, VAR_24);

 if (VAR_20->iface_type == VAR_13) {
  FUNC_12(VAR_19->cmd_skb, VAR_12);
  FUNC_9(VAR_15,
       VAR_19->cmd_skb->data);
  VAR_20->cmd_sent = 1;
  VAR_21 = VAR_20->if_ops.host_to_card(VAR_20,
         VAR_14,
         VAR_19->cmd_skb, ((void*)0));
  FUNC_11(VAR_19->cmd_skb, VAR_12);
  if (VAR_21 == -VAR_3)
   VAR_19->cmd_skb = ((void*)0);
 } else {
  FUNC_12(VAR_19->cmd_skb, VAR_20->intf_hdr_len);
  VAR_21 = VAR_20->if_ops.host_to_card(VAR_20, VAR_11,
         VAR_19->cmd_skb, ((void*)0));
  FUNC_11(VAR_19->cmd_skb, VAR_20->intf_hdr_len);
 }

 if (VAR_21 == -1) {
  FUNC_6(VAR_20, VAR_4,
       "DNLD_CMD: host to card failed\n");
  if (VAR_20->iface_type == VAR_13)
   VAR_20->cmd_sent = 0;
  if (VAR_19->wait_q_enabled)
   VAR_20->cmd_wait_q.status = -1;
  FUNC_8(VAR_20, VAR_20->curr_cmd);

  FUNC_15(&VAR_20->mwifiex_cmd_lock);
  VAR_20->curr_cmd = ((void*)0);
  FUNC_16(&VAR_20->mwifiex_cmd_lock);

  VAR_20->dbg.num_cmd_host_to_card_failure++;
  return -1;
 }


 VAR_20->dbg.last_cmd_index =
   (VAR_20->dbg.last_cmd_index + 1) % VAR_2;
 VAR_20->dbg.last_cmd_id[VAR_20->dbg.last_cmd_index] = VAR_23;
 VAR_20->dbg.last_cmd_act[VAR_20->dbg.last_cmd_index] =
   FUNC_2((u8 *)VAR_22 + VAR_16);




 if (VAR_23 != VAR_7)
  FUNC_4(&VAR_20->cmd_timer,
     VAR_17 + FUNC_5(VAR_10));


 VAR_23 &= VAR_8;

 return 0;
}
