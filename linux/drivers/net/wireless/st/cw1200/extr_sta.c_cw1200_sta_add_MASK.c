
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int uapsd_queues; int addr; int drv_priv; } ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_sta_priv {int link_id; } ;
struct cw1200_link_entry {int rx_queue; int status; } ;
struct cw1200_common {scalar_t__ mode; int ps_state_lock; TYPE_1__* hw; int sta_asleep_mask; struct cw1200_link_entry* link_id_db; } ;
struct TYPE_2__ {int wiphy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cw1200_common*,int ) ;
 int FUNC_3 (TYPE_1__*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;

int FUNC_8(struct ieee80211_hw *VAR_4, struct ieee80211_vif *VAR_5,
     struct ieee80211_sta *VAR_6)
{
 struct cw1200_common *VAR_7 = VAR_4->priv;
 struct cw1200_sta_priv *VAR_8 =
   (struct cw1200_sta_priv *)&VAR_6->drv_priv;
 struct cw1200_link_entry *VAR_9;
 struct sk_buff *VAR_10;

 if (VAR_7->mode != VAR_3)
  return 0;

 VAR_8->link_id = FUNC_2(VAR_7, VAR_6->addr);
 if (FUNC_1(!VAR_8->link_id)) {
  FUNC_7(VAR_7->hw->wiphy,
      "[AP] No more link IDs available.\n");
  return -VAR_1;
 }

 VAR_9 = &VAR_7->link_id_db[VAR_8->link_id - 1];
 FUNC_5(&VAR_7->ps_state_lock);
 if ((VAR_6->uapsd_queues & VAR_2) ==
     VAR_2)
  VAR_7->sta_asleep_mask |= FUNC_0(VAR_8->link_id);
 VAR_9->status = VAR_0;
 while ((VAR_10 = FUNC_4(&VAR_9->rx_queue)))
  FUNC_3(VAR_7->hw, VAR_10);
 FUNC_6(&VAR_7->ps_state_lock);
 return 0;
}
