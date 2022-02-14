
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {scalar_t__ ibss_manager; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct iwl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_1)
{
 struct iwl_priv *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->ibss_manager == VAR_0;
}
