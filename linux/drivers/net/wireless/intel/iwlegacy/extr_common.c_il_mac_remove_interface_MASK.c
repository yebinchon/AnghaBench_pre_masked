
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int mutex; int bssid; int iw_mode; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int addr; int type; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct il_priv*,struct ieee80211_vif*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct il_priv *VAR_3 = VAR_1->priv;

 FUNC_4(&VAR_3->mutex);
 FUNC_0("enter: type %d, addr %pM\n", VAR_2->type, VAR_2->addr);

 FUNC_1(VAR_3->vif != VAR_2);
 VAR_3->vif = ((void*)0);
 VAR_3->iw_mode = VAR_0;
 FUNC_3(VAR_3, VAR_2);
 FUNC_2(VAR_3->bssid);

 FUNC_0("leave\n");
 FUNC_5(&VAR_3->mutex);
}
