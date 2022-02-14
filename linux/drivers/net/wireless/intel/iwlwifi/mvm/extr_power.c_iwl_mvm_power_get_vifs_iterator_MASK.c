
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_power_vifs {int ap_active; int monitor_active; int p2p_active; int bss_active; struct ieee80211_vif* bss_vif; struct ieee80211_vif* p2p_vif; struct ieee80211_vif* monitor_vif; struct ieee80211_vif* ap_vif; } ;
struct iwl_mvm_vif {TYPE_1__* phy_ctxt; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; } ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, u8 *VAR_2,
         struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = FUNC_2(VAR_3);
 struct iwl_power_vifs *VAR_5 = VAR_1;
 bool VAR_6 = VAR_4->phy_ctxt && VAR_4->phy_ctxt->id < VAR_0;

 switch (FUNC_1(VAR_3)) {
 case 130:
  break;

 case 129:
 case 133:

  FUNC_0(VAR_5->ap_vif);
  VAR_5->ap_vif = VAR_3;
  if (VAR_6)
   VAR_5->ap_active = 1;
  break;

 case 132:

  FUNC_0(VAR_5->monitor_vif);
  VAR_5->monitor_vif = VAR_3;
  if (VAR_6)
   VAR_5->monitor_active = 1;
  break;

 case 131:

  FUNC_0(VAR_5->p2p_vif);
  VAR_5->p2p_vif = VAR_3;
  if (VAR_6)
   VAR_5->p2p_active = 1;
  break;

 case 128:
  VAR_5->bss_vif = VAR_3;
  if (VAR_6)
   VAR_5->bss_active = 1;
  break;

 default:
  break;
 }
}
