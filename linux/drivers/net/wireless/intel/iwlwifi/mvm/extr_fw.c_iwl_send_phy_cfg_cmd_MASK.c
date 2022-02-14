
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flow_trigger; int event_trigger; } ;
struct iwl_phy_cfg_cmd {int phy_cfg; TYPE_2__ calib_control; } ;
struct TYPE_10__ {int cur_fw_img; } ;
struct iwl_mvm {TYPE_4__* fw; TYPE_1__* cfg; TYPE_5__ fwrt; } ;
typedef int phy_cfg_cmd ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;
struct TYPE_9__ {TYPE_3__* default_calib; } ;
struct TYPE_8__ {int flow_trigger; int event_trigger; } ;
struct TYPE_6__ {int extra_phy_cfg_flags; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ,int,struct iwl_phy_cfg_cmd*) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_1)
{
 struct iwl_phy_cfg_cmd VAR_2;
 enum iwl_ucode_type VAR_3 = VAR_1->fwrt.cur_fw_img;


 VAR_2.phy_cfg = FUNC_1(FUNC_2(VAR_1));


 VAR_2.phy_cfg |= FUNC_1(VAR_1->cfg->extra_phy_cfg_flags);

 VAR_2.calib_control.event_trigger =
  VAR_1->fw->default_calib[VAR_3].event_trigger;
 VAR_2.calib_control.flow_trigger =
  VAR_1->fw->default_calib[VAR_3].flow_trigger;

 FUNC_0(VAR_1, "Sending Phy CFG command: 0x%x\n",
         VAR_2.phy_cfg);

 return FUNC_3(VAR_1, VAR_0, 0,
        sizeof(VAR_2), &VAR_2);
}
