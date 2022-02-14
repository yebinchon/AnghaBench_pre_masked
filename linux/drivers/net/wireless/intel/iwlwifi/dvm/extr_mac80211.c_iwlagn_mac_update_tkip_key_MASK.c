
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_priv {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_priv*,struct ieee80211_vif*,struct ieee80211_key_conf*,struct ieee80211_sta*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
           struct ieee80211_vif *VAR_1,
           struct ieee80211_key_conf *VAR_2,
           struct ieee80211_sta *VAR_3,
           u32 VAR_4, u16 *VAR_5)
{
 struct iwl_priv *VAR_6 = FUNC_0(VAR_0);

 FUNC_1(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
