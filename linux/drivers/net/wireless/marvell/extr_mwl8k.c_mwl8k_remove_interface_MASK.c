
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_vif {int dummy; } ;
struct mwl8k_priv {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; int addr; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 struct mwl8k_vif* FUNC_0 (struct ieee80211_vif*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*,int ) ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*,int ) ;
 int FUNC_3 (struct mwl8k_priv*,struct mwl8k_vif*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_1,
       struct ieee80211_vif *VAR_2)
{
 struct mwl8k_priv *VAR_3 = VAR_1->priv;
 struct mwl8k_vif *VAR_4 = FUNC_0(VAR_2);

 if (VAR_2->type == VAR_0)
  FUNC_2(VAR_1, VAR_2, VAR_2->addr);

 FUNC_1(VAR_1, VAR_2, VAR_2->addr);

 FUNC_3(VAR_3, VAR_4);
}
