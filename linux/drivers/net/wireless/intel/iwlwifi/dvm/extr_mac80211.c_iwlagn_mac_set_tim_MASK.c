
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int beacon_update; int workqueue; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_0,
         struct ieee80211_sta *VAR_1, bool VAR_2)
{
 struct iwl_priv *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3->workqueue, &VAR_3->beacon_update);

 return 0;
}
