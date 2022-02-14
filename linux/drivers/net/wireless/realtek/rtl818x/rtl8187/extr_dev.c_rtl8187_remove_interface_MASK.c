
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8187_priv {int conf_mutex; int * vif; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1)
{
 struct rtl8187_priv *VAR_2 = VAR_0->priv;
 FUNC_0(&VAR_2->conf_mutex);
 VAR_2->vif = ((void*)0);
 FUNC_1(&VAR_2->conf_mutex);
}
