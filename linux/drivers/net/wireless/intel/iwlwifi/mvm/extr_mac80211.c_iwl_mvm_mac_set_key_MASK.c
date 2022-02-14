
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0,
          enum set_key_cmd VAR_1,
          struct ieee80211_vif *VAR_2,
          struct ieee80211_sta *VAR_3,
          struct ieee80211_key_conf *VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_0(VAR_0);
 int VAR_6;

 FUNC_2(&VAR_5->mutex);
 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_3(&VAR_5->mutex);

 return VAR_6;
}
