
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int drv_priv; } ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_sta_priv {int link_id; } ;
struct cw1200_link_entry {int timestamp; int status; } ;
struct cw1200_common {scalar_t__ mode; int workqueue; int ps_state_lock; int link_id_work; struct cw1200_link_entry* link_id_db; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (struct cw1200_common*) ;

int FUNC_6(struct ieee80211_hw *VAR_3, struct ieee80211_vif *VAR_4,
        struct ieee80211_sta *VAR_5)
{
 struct cw1200_common *VAR_6 = VAR_3->priv;
 struct cw1200_sta_priv *VAR_7 =
   (struct cw1200_sta_priv *)&VAR_5->drv_priv;
 struct cw1200_link_entry *VAR_8;

 if (VAR_6->mode != VAR_1 || !VAR_7->link_id)
  return 0;

 VAR_8 = &VAR_6->link_id_db[VAR_7->link_id - 1];
 FUNC_2(&VAR_6->ps_state_lock);
 VAR_8->status = VAR_0;
 VAR_8->timestamp = VAR_2;
 FUNC_4(VAR_6);
 if (FUNC_1(VAR_6->workqueue, &VAR_6->link_id_work) <= 0)
  FUNC_5(VAR_6);
 FUNC_3(&VAR_6->ps_state_lock);
 FUNC_0(VAR_6->workqueue);
 return 0;
}
