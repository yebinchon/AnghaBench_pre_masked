
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mwifiex_private {int bss_mode; struct mwifiex_adapter* adapter; } ;
struct TYPE_5__ {int status; } ;
struct mwifiex_adapter {int mwifiex_cmd_lock; TYPE_4__* curr_cmd; int ps_mode; TYPE_1__ cmd_wait_q; } ;
struct TYPE_7__ {int ps_bitmap; } ;
struct host_cmd_ds_802_11_ps_mode_enh {TYPE_3__ params; int action; } ;
struct TYPE_6__ {struct host_cmd_ds_802_11_ps_mode_enh psmode_enh; } ;
struct host_cmd_ds_command {int result; TYPE_2__ params; int command; } ;
struct TYPE_8__ {scalar_t__ wait_q_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_3 (struct mwifiex_adapter*,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct mwifiex_private *VAR_6,
         struct host_cmd_ds_command *VAR_7)
{
 struct mwifiex_adapter *VAR_8 = VAR_6->adapter;
 struct host_cmd_ds_802_11_ps_mode_enh *VAR_9;

 FUNC_2(VAR_8, VAR_2,
      "CMD_RESP: cmd %#x error, result=%#x\n",
      VAR_7->command, VAR_7->result);

 if (VAR_8->curr_cmd->wait_q_enabled)
  VAR_8->cmd_wait_q.status = -1;

 switch (FUNC_0(VAR_7->command)) {
 case 132:
  VAR_9 = &VAR_7->params.psmode_enh;
  FUNC_2(VAR_8, VAR_2,
       "PS_MODE_ENH cmd failed: result=0x%x action=0x%X\n",
       VAR_7->result, FUNC_0(VAR_9->action));

  if (FUNC_0(VAR_9->action) == VAR_1 &&
      (FUNC_0(VAR_9->params.ps_bitmap) & VAR_0) &&
      VAR_6->bss_mode == VAR_5)
   VAR_8->ps_mode = VAR_4;

  break;
 case 131:
 case 130:
  FUNC_1(VAR_8);
  break;

 case 129:
  break;

 case 128:
  FUNC_2(VAR_8, VAR_3,
       "SDIO RX single-port aggregation Not support\n");
  break;

 default:
  break;
 }

 FUNC_3(VAR_8, VAR_8->curr_cmd);

 FUNC_4(&VAR_8->mwifiex_cmd_lock);
 VAR_8->curr_cmd = ((void*)0);
 FUNC_5(&VAR_8->mwifiex_cmd_lock);
}
