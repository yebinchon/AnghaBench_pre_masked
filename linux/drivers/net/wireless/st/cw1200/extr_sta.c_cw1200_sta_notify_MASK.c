
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int drv_priv; } ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_sta_priv {int link_id; } ;
struct cw1200_common {int ps_state_lock; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;


 int FUNC_0 (struct ieee80211_hw*,struct ieee80211_vif*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1,
         enum sta_notify_cmd VAR_2,
         struct ieee80211_sta *VAR_3)
{
 struct cw1200_common *VAR_4 = VAR_0->priv;
 struct cw1200_sta_priv *VAR_5 =
  (struct cw1200_sta_priv *)&VAR_3->drv_priv;

 FUNC_1(&VAR_4->ps_state_lock);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5->link_id);
 FUNC_2(&VAR_4->ps_state_lock);
}
