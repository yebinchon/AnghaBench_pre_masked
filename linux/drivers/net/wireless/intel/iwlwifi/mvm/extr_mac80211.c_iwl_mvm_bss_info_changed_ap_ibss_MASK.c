
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_vif {int ap_ibss_active; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int addr; } ;
struct ieee80211_bss_conf {int txpower; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*,int ) ;
 int FUNC_2 (struct iwl_mvm*,char*,...) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,int,int *) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 struct iwl_mvm_vif* FUNC_7 (struct ieee80211_vif*) ;

__attribute__((used)) static void
FUNC_8(struct iwl_mvm *VAR_7,
     struct ieee80211_vif *VAR_8,
     struct ieee80211_bss_conf *VAR_9,
     u32 VAR_10)
{
 struct iwl_mvm_vif *VAR_11 = FUNC_7(VAR_8);


 if (!VAR_11->ap_ibss_active)
  return;

 if (VAR_10 & (VAR_2 | VAR_4 |
         VAR_0 | VAR_5) &&
     FUNC_5(VAR_7, VAR_8, 0, ((void*)0)))
  FUNC_1(VAR_7, "failed to update MAC %pM\n", VAR_8->addr);


 if (VAR_10 & VAR_1 &&
     FUNC_4(VAR_7, VAR_8))
  FUNC_2(VAR_7, "Failed updating beacon data\n");

 if (VAR_10 & VAR_6) {
  FUNC_0(VAR_7, "Changing TX Power to %d\n",
    VAR_9->txpower);
  FUNC_6(VAR_7, VAR_8, VAR_9->txpower);
 }

 if (VAR_10 & VAR_3) {
  int VAR_12 = FUNC_3(VAR_7, VAR_8);

  if (VAR_12)
   FUNC_2(VAR_7, "Failed to enable FTM responder (%d)\n",
     VAR_12);
 }

}
