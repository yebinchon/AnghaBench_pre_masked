
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {int uapsd_misbehaving_bssid; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_2->bss_conf.bssid, VAR_3->uapsd_misbehaving_bssid,
     VAR_0))
  FUNC_0(VAR_3->uapsd_misbehaving_bssid);
}
