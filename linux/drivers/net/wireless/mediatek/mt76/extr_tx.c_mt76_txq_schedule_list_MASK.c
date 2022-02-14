
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mt76_wcid {int flags; } ;
struct mt76_txq {int send_bar; int retry_q; int agg_ssn; scalar_t__ aggr; struct mt76_wcid* wcid; } ;
struct mt76_sw_queue {int swq_queued; struct mt76_queue* q; } ;
struct mt76_queue {int lock; } ;
struct mt76_dev {int hw; int state; struct mt76_sw_queue* q_tx; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_txq {int tid; struct ieee80211_vif* vif; struct ieee80211_sta* sta; scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; } ;
typedef enum mt76_txq_id { ____Placeholder_mt76_txq_id } mt76_txq_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_txq* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct ieee80211_txq*,int) ;
 int FUNC_2 (struct ieee80211_vif*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct mt76_dev*,struct mt76_sw_queue*,struct mt76_txq*,int*) ;
 struct ieee80211_txq* FUNC_4 (struct mt76_txq*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int
FUNC_9(struct mt76_dev *VAR_3, enum mt76_txq_id VAR_4)
{
 struct mt76_sw_queue *VAR_5 = &VAR_3->q_tx[VAR_4];
 struct mt76_queue *VAR_6 = VAR_5->q;
 struct ieee80211_txq *VAR_7;
 struct mt76_txq *VAR_8;
 struct mt76_wcid *VAR_9;
 int VAR_10 = 0;

 FUNC_6(&VAR_6->lock);
 while (1) {
  bool VAR_11 = 0;

  if (VAR_5->swq_queued >= 4)
   break;

  if (FUNC_8(VAR_1, &VAR_3->state)) {
   VAR_10 = -VAR_0;
   break;
  }

  VAR_7 = FUNC_0(VAR_3->hw, VAR_4);
  if (!VAR_7)
   break;

  VAR_8 = (struct mt76_txq *)VAR_7->drv_priv;
  VAR_9 = VAR_8->wcid;
  if (VAR_9 && FUNC_8(VAR_2, &VAR_9->flags))
   continue;

  if (VAR_8->send_bar && VAR_8->aggr) {
   struct ieee80211_txq *VAR_12 = FUNC_4(VAR_8);
   struct ieee80211_sta *VAR_13 = VAR_12->sta;
   struct ieee80211_vif *VAR_14 = VAR_12->vif;
   u16 VAR_15 = VAR_8->agg_ssn;
   u8 VAR_16 = VAR_12->tid;

   VAR_8->send_bar = 0;
   FUNC_7(&VAR_6->lock);
   FUNC_2(VAR_14, VAR_13->addr, VAR_16, VAR_15);
   FUNC_6(&VAR_6->lock);
  }

  VAR_10 += FUNC_3(VAR_3, VAR_5, VAR_8, &VAR_11);
  if (FUNC_5(&VAR_8->retry_q))
   VAR_11 = 1;
  FUNC_1(VAR_3->hw, VAR_7, !VAR_11);
 }
 FUNC_7(&VAR_6->lock);

 return VAR_10;
}
