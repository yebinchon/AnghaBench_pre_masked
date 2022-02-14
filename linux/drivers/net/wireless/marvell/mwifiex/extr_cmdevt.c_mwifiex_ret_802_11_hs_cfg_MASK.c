
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {scalar_t__ iface_type; scalar_t__ hs_activated; int work_flags; } ;
struct TYPE_5__ {int gap; int gpio; int conditions; } ;
struct TYPE_6__ {TYPE_2__ hs_config; } ;
struct host_cmd_ds_802_11_hs_cfg_enh {scalar_t__ action; TYPE_3__ params; } ;
struct TYPE_4__ {struct host_cmd_ds_802_11_hs_cfg_enh opt_hs_cfg; } ;
struct host_cmd_ds_command {int result; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*,int ,scalar_t__,int ,int ) ;
 int FUNC_4 (struct mwifiex_private*,int) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(struct mwifiex_private *VAR_5,
         struct host_cmd_ds_command *VAR_6)
{
 struct mwifiex_adapter *VAR_7 = VAR_5->adapter;
 struct host_cmd_ds_802_11_hs_cfg_enh *VAR_8 =
  &VAR_6->params.opt_hs_cfg;
 uint32_t VAR_9 = FUNC_2(VAR_8->params.hs_config.conditions);

 if (VAR_8->action == FUNC_1(VAR_1) &&
     VAR_7->iface_type != VAR_4) {
  FUNC_4(VAR_5, 1);
  return 0;
 } else {
  FUNC_3(VAR_7, VAR_0,
       "cmd: CMD_RESP: HS_CFG cmd reply\t"
       " result=%#x, conditions=0x%x gpio=0x%x gap=0x%x\n",
       VAR_6->result, VAR_9,
       VAR_8->params.hs_config.gpio,
       VAR_8->params.hs_config.gap);
 }
 if (VAR_9 != VAR_2) {
  FUNC_5(VAR_3, &VAR_7->work_flags);
  if (VAR_7->iface_type == VAR_4)
   FUNC_4(VAR_5, 1);
 } else {
  FUNC_0(VAR_3, &VAR_7->work_flags);
  if (VAR_7->hs_activated)
   FUNC_4(VAR_5, 0);
 }

 return 0;
}
