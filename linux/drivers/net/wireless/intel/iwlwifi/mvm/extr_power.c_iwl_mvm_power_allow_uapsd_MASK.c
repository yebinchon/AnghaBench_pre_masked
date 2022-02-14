
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm_vif {int uapsd_misbehaving_bssid; } ;
struct iwl_mvm {int hw; } ;
struct TYPE_3__ {int oppps_ctwindow; } ;
struct TYPE_4__ {TYPE_1__ p2p_noa_attr; int bssid; } ;
struct ieee80211_vif {scalar_t__ p2p; TYPE_2__ bss_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int VAR_3 ;
 int FUNC_2 (struct iwl_mvm*) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct iwl_mvm *VAR_4,
           struct ieee80211_vif *VAR_5)
{
 struct iwl_mvm_vif *VAR_6 = FUNC_3(VAR_5);

 if (!FUNC_4(VAR_6->uapsd_misbehaving_bssid, VAR_5->bss_conf.bssid,
      VAR_0))
  return 0;





 if (VAR_5->p2p &&
     (VAR_5->bss_conf.p2p_noa_attr.oppps_ctwindow &
     VAR_2))
  return 0;





 if (FUNC_2(VAR_4) >= 2)
  return 0;

 if (VAR_5->p2p) {

  bool VAR_7 = 1;

  if (!FUNC_1(VAR_4))
   return 0;

  FUNC_0(VAR_4->hw,
     VAR_1,
     VAR_3,
     &VAR_7);

  if (!VAR_7)
   return 0;
 }

 return 1;
}
