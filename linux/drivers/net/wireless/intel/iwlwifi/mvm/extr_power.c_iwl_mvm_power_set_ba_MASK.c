
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ba_enabled; int bf_enabled; } ;
struct iwl_mvm_vif {int pm_enabled; TYPE_2__ bf_data; } ;
struct TYPE_6__ {scalar_t__ cur_fw_img; } ;
struct iwl_mvm {scalar_t__ ps_disabled; TYPE_3__ fwrt; } ;
struct iwl_beacon_filter_cmd {int ba_escape_timer; int bf_enable_beacon_filter; int member_0; } ;
struct TYPE_4__ {int ps; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_beacon_filter_cmd*,int ) ;
 int FUNC_1 (int) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 scalar_t__ FUNC_3 (struct iwl_mvm_vif*) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_3,
    struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_2(VAR_4);
 struct iwl_beacon_filter_cmd VAR_6 = {
  VAR_1,
  .bf_enable_beacon_filter = FUNC_1(1),
 };

 if (!VAR_5->bf_data.bf_enabled)
  return 0;

 if (VAR_3->fwrt.cur_fw_img == VAR_2)
  VAR_6.ba_escape_timer = FUNC_1(VAR_0);

 VAR_5->bf_data.ba_enabled = !(!VAR_5->pm_enabled ||
           VAR_3->ps_disabled ||
           !VAR_4->bss_conf.ps ||
           FUNC_3(VAR_5));

 return FUNC_0(VAR_3, VAR_4, &VAR_6, 0);
}
