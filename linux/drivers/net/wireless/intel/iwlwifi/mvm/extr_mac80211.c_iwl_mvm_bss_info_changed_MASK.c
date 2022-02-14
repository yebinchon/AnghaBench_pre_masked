
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_bss_conf {int idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_2 ;




 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_4 (struct iwl_mvm*,int ,int) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_3,
         struct ieee80211_vif *VAR_4,
         struct ieee80211_bss_conf *VAR_5,
         u32 VAR_6)
{
 struct iwl_mvm *VAR_7 = FUNC_0(VAR_3);

 FUNC_6(&VAR_7->mutex);

 if (VAR_6 & VAR_0 && !VAR_5->idle)
  FUNC_4(VAR_7, VAR_2, 1);

 switch (VAR_4->type) {
 case 128:
  FUNC_3(VAR_7, VAR_4, VAR_5, VAR_6);
  break;
 case 130:
 case 131:
  FUNC_2(VAR_7, VAR_4, VAR_5, VAR_6);
  break;
 case 129:
  if (VAR_6 & VAR_1)
   FUNC_5(VAR_7, VAR_4);
  break;
 default:

  FUNC_1(1);
 }

 FUNC_7(&VAR_7->mutex);
}
