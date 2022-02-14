
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {scalar_t__ hw_status; int main_work; int workqueue; int dev; scalar_t__ mfg_mode; int work_flags; } ;
struct host_cmd_ds_command {scalar_t__ result; int command; } ;
struct cmd_ctrl_node {scalar_t__ wait_q_enabled; int cmd_flag; TYPE_1__* cmd_skb; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;




 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*,...) ;
 struct cmd_ctrl_node* FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (struct mwifiex_private*,struct cmd_ctrl_node*,scalar_t__,void*,int) ;
 int FUNC_6 (struct mwifiex_adapter*,struct cmd_ctrl_node*) ;
 int FUNC_7 (struct mwifiex_adapter*,struct cmd_ctrl_node*) ;
 int FUNC_8 (struct mwifiex_private*,struct cmd_ctrl_node*) ;
 int FUNC_9 (struct mwifiex_private*,scalar_t__,scalar_t__,int ,void*,struct host_cmd_ds_command*) ;
 int FUNC_10 (struct mwifiex_private*,scalar_t__,scalar_t__,int ,void*,struct host_cmd_ds_command*) ;
 int FUNC_11 (struct mwifiex_adapter*,struct cmd_ctrl_node*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (TYPE_1__*,int) ;
 scalar_t__ FUNC_15 (int ,int *) ;

int FUNC_16(struct mwifiex_private *VAR_11, u16 VAR_12,
       u16 VAR_13, u32 VAR_14, void *VAR_15, bool VAR_16)
{
 int VAR_17;
 struct mwifiex_adapter *VAR_18 = VAR_11->adapter;
 struct cmd_ctrl_node *VAR_19;
 struct host_cmd_ds_command *VAR_20;

 if (!VAR_18) {
  FUNC_12("PREP_CMD: adapter is NULL\n");
  return -1;
 }

 if (FUNC_15(VAR_9, &VAR_18->work_flags)) {
  FUNC_3(VAR_18, VAR_1,
       "PREP_CMD: device in suspended state\n");
  return -1;
 }

 if (FUNC_15(VAR_8, &VAR_18->work_flags) &&
     VAR_12 != VAR_2) {
  FUNC_3(VAR_18, VAR_1,
       "PREP_CMD: host entering sleep state\n");
  return -1;
 }

 if (FUNC_15(VAR_10, &VAR_18->work_flags)) {
  FUNC_3(VAR_18, VAR_1,
       "PREP_CMD: card is removed\n");
  return -1;
 }

 if (FUNC_15(VAR_7, &VAR_18->work_flags)) {
  FUNC_3(VAR_18, VAR_1,
       "PREP_CMD: FW is in bad state\n");
  return -1;
 }

 if (VAR_18->hw_status == VAR_6) {
  if (VAR_12 != VAR_5) {
   FUNC_3(VAR_18, VAR_1,
        "PREP_CMD: FW in reset state\n");
   return -1;
  }
 }



 if (VAR_18->mfg_mode && VAR_12) {
  FUNC_1(VAR_18->dev, "Ignoring commands in manufacturing mode\n");
  return -1;
 }



 VAR_19 = FUNC_4(VAR_18);

 if (!VAR_19) {
  FUNC_3(VAR_18, VAR_1,
       "PREP_CMD: no free cmd node\n");
  return -1;
 }


 FUNC_5(VAR_11, VAR_19, VAR_12, VAR_15, VAR_16);

 if (!VAR_19->cmd_skb) {
  FUNC_3(VAR_18, VAR_1,
       "PREP_CMD: no free cmd buf\n");
  return -1;
 }

 FUNC_14(VAR_19->cmd_skb, sizeof(struct host_cmd_ds_command));

 VAR_20 = (struct host_cmd_ds_command *) (VAR_19->cmd_skb->data);
 VAR_20->command = FUNC_0(VAR_12);
 VAR_20->result = 0;


 if (VAR_12) {
  switch (VAR_12) {
  case 128:
  case 131:
  case 130:
  case 129:
  case 132:
  case 133:
   VAR_17 = FUNC_10(VAR_11, VAR_12, VAR_13,
            VAR_14, VAR_15,
            VAR_20);
   break;
  default:
   VAR_17 = FUNC_9(VAR_11, VAR_12, VAR_13,
            VAR_14, VAR_15,
            VAR_20);
   break;
  }
 } else {
  VAR_17 = FUNC_2(VAR_11, VAR_20, VAR_15);
  VAR_19->cmd_flag |= VAR_0;
 }


 if (VAR_17) {
  FUNC_3(VAR_18, VAR_1,
       "PREP_CMD: cmd %#x preparation failed\n",
   VAR_12);
  FUNC_6(VAR_18, VAR_19);
  return -1;
 }


 if (VAR_12 == VAR_3 ||
     VAR_12 == VAR_4) {
  FUNC_8(VAR_11, VAR_19);
 } else {
  FUNC_7(VAR_18, VAR_19);
  FUNC_13(VAR_18->workqueue, &VAR_18->main_work);
  if (VAR_19->wait_q_enabled)
   VAR_17 = FUNC_11(VAR_18, VAR_19);
 }

 return VAR_17;
}
