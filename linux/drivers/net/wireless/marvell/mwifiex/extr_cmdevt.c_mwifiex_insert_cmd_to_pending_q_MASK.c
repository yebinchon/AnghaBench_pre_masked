
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mwifiex_adapter {scalar_t__ ps_state; int cmd_pending; int cmd_pending_q_lock; int cmd_pending_q; } ;
struct host_cmd_ds_802_11_ps_mode_enh {int action; } ;
struct TYPE_4__ {struct host_cmd_ds_802_11_ps_mode_enh psmode_enh; } ;
struct host_cmd_ds_command {TYPE_2__ params; int command; } ;
struct cmd_ctrl_node {int list; TYPE_1__* cmd_skb; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct mwifiex_adapter *VAR_6,
    struct cmd_ctrl_node *VAR_7)
{
 struct host_cmd_ds_command *VAR_8 = ((void*)0);
 u16 VAR_9;
 bool VAR_10 = 1;

 VAR_8 = (struct host_cmd_ds_command *) (VAR_7->cmd_skb->data);
 if (!VAR_8) {
  FUNC_5(VAR_6, VAR_3, "QUEUE_CMD: host_cmd is NULL\n");
  return;
 }

 VAR_9 = FUNC_2(VAR_8->command);


 if (VAR_9 == VAR_4) {
  struct host_cmd_ds_802_11_ps_mode_enh *VAR_11 =
      &VAR_8->params.psmode_enh;
  if ((FUNC_2(VAR_11->action) == VAR_2) ||
      (FUNC_2(VAR_11->action) == VAR_1)) {
   if (VAR_6->ps_state != VAR_5)
    VAR_10 = 0;
  }
 }

 FUNC_6(&VAR_6->cmd_pending_q_lock);
 if (VAR_10)
  FUNC_4(&VAR_7->list, &VAR_6->cmd_pending_q);
 else
  FUNC_3(&VAR_7->list, &VAR_6->cmd_pending_q);
 FUNC_7(&VAR_6->cmd_pending_q_lock);

 FUNC_0(&VAR_6->cmd_pending);
 FUNC_5(VAR_6, VAR_0,
      "cmd: QUEUE_CMD: cmd=%#x, cmd_pending=%d\n",
  VAR_9, FUNC_1(&VAR_6->cmd_pending));
}
