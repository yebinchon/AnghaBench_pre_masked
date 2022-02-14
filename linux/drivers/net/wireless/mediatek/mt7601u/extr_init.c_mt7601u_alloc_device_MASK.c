
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_dev {int stat_wq; int tx_skb_done; int avg_ampdu_len; int con_mon_lock; int mac_lock; int lock; int rx_lock; int tx_lock; int mutex; int hw_atomic_mutex; int reg_atomic_mutex; int vendor_req_mutex; struct ieee80211_hw* hw; struct device* dev; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int) ;
 struct ieee80211_hw* FUNC_2 (int,int *) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct mt7601u_dev *FUNC_7(struct device *VAR_2)
{
 struct ieee80211_hw *VAR_3;
 struct mt7601u_dev *VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_4), &VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = VAR_3->priv;
 VAR_4->dev = VAR_2;
 VAR_4->hw = VAR_3;
 FUNC_4(&VAR_4->vendor_req_mutex);
 FUNC_4(&VAR_4->reg_atomic_mutex);
 FUNC_4(&VAR_4->hw_atomic_mutex);
 FUNC_4(&VAR_4->mutex);
 FUNC_6(&VAR_4->tx_lock);
 FUNC_6(&VAR_4->rx_lock);
 FUNC_6(&VAR_4->lock);
 FUNC_6(&VAR_4->mac_lock);
 FUNC_6(&VAR_4->con_mon_lock);
 FUNC_1(&VAR_4->avg_ampdu_len, 1);
 FUNC_5(&VAR_4->tx_skb_done);

 VAR_4->stat_wq = FUNC_0("mt7601u", VAR_0, 0);
 if (!VAR_4->stat_wq) {
  FUNC_3(VAR_3);
  return ((void*)0);
 }

 return VAR_4;
}
