
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct dentry {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int ,struct dentry*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct iwl_mvm*) ;
 int VAR_1 ;

void FUNC_3(struct ieee80211_hw *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct ieee80211_sta *VAR_4,
        struct dentry *VAR_5)
{
 struct iwl_mvm *VAR_6 = FUNC_0(VAR_2);

 if (FUNC_2(VAR_6)) {
  FUNC_1(VAR_1, VAR_5, 0400);
 }
 FUNC_1(VAR_0, VAR_5, 0600);
}
