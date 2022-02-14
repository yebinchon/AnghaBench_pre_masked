
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cur_fw_img; } ;
struct iwl_mvm {TYPE_1__ fwrt; } ;
struct iwl_mac_power_cmd {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
typedef int cmd ;
struct TYPE_4__ {int mac_pwr_cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_mac_power_cmd*,int) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mac_power_cmd*) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_mac_power_cmd*) ;
 TYPE_2__* FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (int *,struct iwl_mac_power_cmd*,int) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_2,
      struct ieee80211_vif *VAR_3)
{
 struct iwl_mac_power_cmd VAR_4 = {};

 FUNC_0(VAR_2, VAR_3, &VAR_4,
    VAR_2->fwrt.cur_fw_img != VAR_0);
 FUNC_1(VAR_2, &VAR_4);




 return FUNC_2(VAR_2, VAR_1, 0,
        sizeof(VAR_4), &VAR_4);
}
