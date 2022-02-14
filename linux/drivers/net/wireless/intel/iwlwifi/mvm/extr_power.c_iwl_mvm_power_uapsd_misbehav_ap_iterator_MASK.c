
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct iwl_mvm_vif {scalar_t__ ap_sta_id; int uapsd_misbehaving_bssid; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;


 int VAR_0 ;
 struct iwl_mvm_vif* FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, u8 *VAR_2,
           struct ieee80211_vif *VAR_3)
{
 u8 *VAR_4 = VAR_1;
 struct iwl_mvm_vif *VAR_5 = FUNC_0(VAR_3);




 if (VAR_5->ap_sta_id == *VAR_4)
  FUNC_1(VAR_5->uapsd_misbehaving_bssid, VAR_3->bss_conf.bssid,
         VAR_0);
}
