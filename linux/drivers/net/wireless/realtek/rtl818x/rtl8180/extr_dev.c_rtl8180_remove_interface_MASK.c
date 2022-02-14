
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8180_priv {int * vif; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;



__attribute__((used)) static void FUNC_0(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1)
{
 struct rtl8180_priv *VAR_2 = VAR_0->priv;
 VAR_2->vif = ((void*)0);
}
