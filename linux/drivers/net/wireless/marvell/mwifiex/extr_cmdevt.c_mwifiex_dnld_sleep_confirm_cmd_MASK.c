
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct mwifiex_private {int bss_type; int bss_num; } ;
struct mwifiex_opt_sleep_confirm {int resp_ctrl; int size; int seq_num; int action; int command; } ;
struct TYPE_6__ {int period; } ;
struct TYPE_5__ {int num_cmd_sleep_cfm_host_to_card_failure; } ;
struct TYPE_4__ {int (* host_to_card ) (struct mwifiex_adapter*,int ,struct sk_buff*,int *) ;} ;
struct mwifiex_adapter {scalar_t__ iface_type; int pm_wakeup_card_req; TYPE_3__ sleep_period; int work_flags; int ps_state; TYPE_2__ dbg; int intf_hdr_len; struct sk_buff* sleep_cfm; TYPE_1__ if_ops; int seq_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_7 (struct mwifiex_adapter*,int ,char*,struct mwifiex_opt_sleep_confirm*,int ) ;
 struct mwifiex_private* FUNC_8 (struct mwifiex_adapter*,int ) ;
 int FUNC_9 (struct mwifiex_private*,int) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 int FUNC_14 (struct mwifiex_adapter*,int ,struct sk_buff*,int *) ;
 int FUNC_15 (struct mwifiex_adapter*,int ,struct sk_buff*,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static int FUNC_17(struct mwifiex_adapter *VAR_14)
{
 int VAR_15;
 struct mwifiex_private *VAR_16;
 struct mwifiex_opt_sleep_confirm *VAR_17 =
    (struct mwifiex_opt_sleep_confirm *)
      VAR_14->sleep_cfm->data;
 struct sk_buff *VAR_18;

 VAR_16 = FUNC_8(VAR_14, VAR_5);

 VAR_14->seq_num++;
 VAR_17->seq_num =
  FUNC_1((FUNC_0
     (VAR_14->seq_num, VAR_16->bss_num,
      VAR_16->bss_type)));

 FUNC_6(VAR_14, VAR_0,
      "cmd: DNLD_CMD: %#x, act %#x, len %d, seqno %#x\n",
  FUNC_4(VAR_17->command),
  FUNC_4(VAR_17->action),
  FUNC_4(VAR_17->size),
  FUNC_4(VAR_17->seq_num));
 FUNC_7(VAR_14, VAR_1, "SLEEP_CFM buffer: ", VAR_17,
    FUNC_4(VAR_17->size));

 if (VAR_14->iface_type == VAR_9) {
  VAR_18 =
   FUNC_2(sizeof(struct mwifiex_opt_sleep_confirm)
          + VAR_8);
  if (!VAR_18) {
   FUNC_6(VAR_14, VAR_4,
        "SLEEP_CFM: dev_alloc_skb failed\n");
   return -VAR_3;
  }

  FUNC_13(VAR_18, sizeof(struct mwifiex_opt_sleep_confirm)
   + VAR_8);
  FUNC_10(VAR_11, VAR_18->data);
  FUNC_5(VAR_18->data + VAR_8,
         VAR_14->sleep_cfm->data,
         sizeof(struct mwifiex_opt_sleep_confirm));
  VAR_15 = VAR_14->if_ops.host_to_card(VAR_14,
         VAR_10,
         VAR_18, ((void*)0));
  if (VAR_15 != -VAR_2)
   FUNC_3(VAR_18);
 } else {
  FUNC_12(VAR_14->sleep_cfm, VAR_14->intf_hdr_len);
  VAR_15 = VAR_14->if_ops.host_to_card(VAR_14, VAR_7,
         VAR_14->sleep_cfm, ((void*)0));
  FUNC_11(VAR_14->sleep_cfm, VAR_14->intf_hdr_len);
 }

 if (VAR_15 == -1) {
  FUNC_6(VAR_14, VAR_4, "SLEEP_CFM: failed\n");
  VAR_14->dbg.num_cmd_sleep_cfm_host_to_card_failure++;
  return -1;
 }

 if (!FUNC_4(VAR_17->resp_ctrl))

  VAR_14->ps_state = VAR_12;
 else
  VAR_14->ps_state = VAR_13;

 if (!FUNC_4(VAR_17->resp_ctrl) &&
     (FUNC_16(VAR_6, &VAR_14->work_flags) &&
      !VAR_14->sleep_period.period)) {
  VAR_14->pm_wakeup_card_req = 1;
  FUNC_9(FUNC_8
    (VAR_14, VAR_5), 1);
 }

 return VAR_15;
}
