
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct wl12xx_vif {scalar_t__* tx_queue_count; int * links_map; } ;
struct wl1271 {int wl_lock; int tx_work; int hw; int flags; int * tx_queue_count; TYPE_2__* links; } ;
struct sk_buff {int len; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_3__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_4__ {int * tx_queue; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (size_t,int *) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int) ;
 size_t FUNC_10 (struct wl1271*,struct wl12xx_vif*,struct sk_buff*,int ) ;
 struct wl12xx_vif* FUNC_11 (struct ieee80211_vif*) ;
 int FUNC_12 (struct wl1271*,struct wl12xx_vif*,int,int ) ;
 scalar_t__ FUNC_13 (struct wl1271*,struct wl12xx_vif*,int) ;
 int FUNC_14 (struct wl1271*,struct wl12xx_vif*,int,int ) ;

__attribute__((used)) static void FUNC_15(struct ieee80211_hw *VAR_6,
    struct ieee80211_tx_control *VAR_7,
    struct sk_buff *VAR_8)
{
 struct wl1271 *VAR_9 = VAR_6->priv;
 struct ieee80211_tx_info *VAR_10 = FUNC_0(VAR_8);
 struct ieee80211_vif *VAR_11 = VAR_10->control.vif;
 struct wl12xx_vif *VAR_12 = ((void*)0);
 unsigned long VAR_13;
 int VAR_14, VAR_15;
 u8 VAR_16;

 if (!VAR_11) {
  FUNC_8(VAR_0, "DROP skb with no vif");
  FUNC_1(VAR_6, VAR_8);
  return;
 }

 VAR_12 = FUNC_11(VAR_11);
 VAR_15 = FUNC_3(VAR_8);
 VAR_14 = FUNC_9(VAR_15);

 VAR_16 = FUNC_10(VAR_9, VAR_12, VAR_8, VAR_7->sta);

 FUNC_5(&VAR_9->wl_lock, VAR_13);






 if (VAR_16 == VAR_4 ||
     (!FUNC_7(VAR_16, VAR_12->links_map)) ||
      (FUNC_13(VAR_9, VAR_12, VAR_14) &&
       !FUNC_12(VAR_9, VAR_12, VAR_14,
   VAR_5))) {
  FUNC_8(VAR_0, "DROP skb hlid %d q %d", VAR_16, VAR_14);
  FUNC_1(VAR_6, VAR_8);
  goto out;
 }

 FUNC_8(VAR_0, "queue skb hlid %d q %d len %d",
       VAR_16, VAR_14, VAR_8->len);
 FUNC_4(&VAR_9->links[VAR_16].tx_queue[VAR_14], VAR_8);

 VAR_9->tx_queue_count[VAR_14]++;
 VAR_12->tx_queue_count[VAR_14]++;





 if (VAR_12->tx_queue_count[VAR_14] >= VAR_3 &&
     !FUNC_12(VAR_9, VAR_12, VAR_14,
     VAR_5)) {
  FUNC_8(VAR_0, "op_tx: stopping queues for q %d", VAR_14);
  FUNC_14(VAR_9, VAR_12, VAR_14,
      VAR_5);
 }






 if (!FUNC_7(VAR_1, &VAR_9->flags) &&
     !FUNC_7(VAR_2, &VAR_9->flags))
  FUNC_2(VAR_9->hw, &VAR_9->tx_work);

out:
 FUNC_6(&VAR_9->wl_lock, VAR_13);
}
