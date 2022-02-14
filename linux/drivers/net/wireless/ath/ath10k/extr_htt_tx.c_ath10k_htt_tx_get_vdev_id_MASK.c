
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ath10k_vif {int vdev_id; } ;
struct ath10k_skb_cb {TYPE_2__* vif; } ;
struct TYPE_3__ {int vdev_id; } ;
struct ath10k {int monitor_vdev_id; scalar_t__ monitor_started; TYPE_1__ scan; } ;
struct TYPE_4__ {scalar_t__ drv_priv; } ;


 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;

__attribute__((used)) static u8 FUNC_2(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 struct ieee80211_tx_info *VAR_3 = FUNC_1(VAR_2);
 struct ath10k_skb_cb *VAR_4 = FUNC_0(VAR_2);
 struct ath10k_vif *VAR_5;

 if (VAR_3->flags & VAR_0) {
  return VAR_1->scan.vdev_id;
 } else if (VAR_4->vif) {
  VAR_5 = (void *)VAR_4->vif->drv_priv;
  return VAR_5->vdev_id;
 } else if (VAR_1->monitor_started) {
  return VAR_1->monitor_vdev_id;
 } else {
  return 0;
 }
}
