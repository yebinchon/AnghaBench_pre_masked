
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mt76_wcid {int dummy; } ;
struct mt76_dev {TYPE_2__* queue_ops; } ;
struct TYPE_3__ {int flags; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct TYPE_4__ {int (* tx_queue_skb ) (struct mt76_dev*,int ,struct sk_buff*,struct mt76_wcid*,struct ieee80211_sta*) ;} ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct mt76_dev*,int ,struct sk_buff*,struct mt76_wcid*,struct ieee80211_sta*) ;

__attribute__((used)) static void
FUNC_3(struct mt76_dev *VAR_4, struct ieee80211_sta *VAR_5,
    struct sk_buff *VAR_6, bool VAR_7)
{
 struct mt76_wcid *VAR_8 = (struct mt76_wcid *)VAR_5->drv_priv;
 struct ieee80211_tx_info *VAR_9 = FUNC_0(VAR_6);

 VAR_9->control.flags |= VAR_1;
 if (VAR_7)
  VAR_9->flags |= VAR_2 |
          VAR_0;

 FUNC_1(VAR_6, !VAR_7);
 VAR_4->queue_ops->tx_queue_skb(VAR_4, VAR_3, VAR_6, VAR_8, VAR_5);
}
