
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_common {int link_id_map; int sta_asleep_mask; int pspoll_mask; int multicast_stop_work; int workqueue; int tx_multicast; int multicast_start_work; int buffered_multicasts; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;


 int FUNC_0 (int) ;


 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cw1200_common*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0,
    struct ieee80211_vif *VAR_1,
    enum sta_notify_cmd VAR_2,
    int VAR_3)
{
 struct cw1200_common *VAR_4 = VAR_0->priv;
 u32 VAR_5, VAR_6;


 if (VAR_3)
  VAR_5 = FUNC_0(VAR_3);
 else if (FUNC_1(VAR_2 != 129))
  VAR_5 = 0;
 else
  VAR_5 = VAR_4->link_id_map;
 VAR_6 = VAR_4->sta_asleep_mask & VAR_5;

 switch (VAR_2) {
 case 128:
  if (!VAR_6) {
   if (VAR_4->buffered_multicasts &&
       !VAR_4->sta_asleep_mask)
    FUNC_3(VAR_4->workqueue,
        &VAR_4->multicast_start_work);
   VAR_4->sta_asleep_mask |= VAR_5;
  }
  break;
 case 129:
  if (VAR_6) {
   VAR_4->sta_asleep_mask &= ~VAR_5;
   VAR_4->pspoll_mask &= ~VAR_5;
   if (VAR_4->tx_multicast && VAR_3 &&
       !VAR_4->sta_asleep_mask)
    FUNC_3(VAR_4->workqueue,
        &VAR_4->multicast_stop_work);
   FUNC_2(VAR_4);
  }
  break;
 }
}
