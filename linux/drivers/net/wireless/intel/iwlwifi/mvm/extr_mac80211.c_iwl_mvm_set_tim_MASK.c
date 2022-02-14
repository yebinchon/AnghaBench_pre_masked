
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {int vif; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct iwl_mvm*,int ) ;
 struct iwl_mvm_sta* FUNC_3 (struct ieee80211_sta*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_1,
      struct ieee80211_sta *VAR_2,
      bool VAR_3)
{
 struct iwl_mvm *VAR_4 = FUNC_1(VAR_1);
 struct iwl_mvm_sta *VAR_5 = FUNC_3(VAR_2);

 if (!VAR_5 || !VAR_5->vif) {
  FUNC_0(VAR_4, "Station is not associated to a vif\n");
  return -VAR_0;
 }

 return FUNC_2(VAR_4, VAR_5->vif);
}
