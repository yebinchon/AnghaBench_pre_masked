
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mt76_wcid {int packet_id; int idx; } ;
struct mt76_tx_cb {int pktid; int jiffies; int wcid; } ;
struct TYPE_2__ {int lock; } ;
struct mt76_dev {TYPE_1__ status_list; } ;
struct ieee80211_tx_info {int flags; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*) ;
 int VAR_7 ;
 int FUNC_2 (struct mt76_tx_cb*,int ,int) ;
 struct mt76_tx_cb* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct mt76_dev *VAR_8, struct mt76_wcid *VAR_9,
         struct sk_buff *VAR_10)
{
 struct ieee80211_tx_info *VAR_11 = FUNC_0(VAR_10);
 struct mt76_tx_cb *VAR_12 = FUNC_3(VAR_10);
 int VAR_13;

 if (!VAR_9)
  return VAR_5;

 if (VAR_11->flags & VAR_0)
  return VAR_5;

 if (!(VAR_11->flags & (VAR_2 |
        VAR_1)))
  return VAR_6;

 FUNC_4(&VAR_8->status_list.lock);

 FUNC_2(VAR_12, 0, sizeof(*VAR_12));
 VAR_9->packet_id = (VAR_9->packet_id + 1) & VAR_4;
 if (VAR_9->packet_id == VAR_5 ||
     VAR_9->packet_id == VAR_6)
  VAR_9->packet_id = VAR_3;

 VAR_13 = VAR_9->packet_id;
 VAR_12->wcid = VAR_9->idx;
 VAR_12->pktid = VAR_13;
 VAR_12->jiffies = VAR_7;

 FUNC_1(&VAR_8->status_list, VAR_10);
 FUNC_5(&VAR_8->status_list.lock);

 return VAR_13;
}
