
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct mt76_txq {int aggr; int send_bar; int agg_ssn; } ;
struct TYPE_3__ {int idx; } ;
struct mt7603_sta {TYPE_1__ wcid; } ;
struct mt7603_dev {int mt76; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_txq {scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; struct ieee80211_txq** txq; } ;
struct ieee80211_hw {struct mt7603_dev* priv; } ;
struct ieee80211_ampdu_params {int action; size_t tid; size_t ssn; int buf_size; struct ieee80211_sta* sta; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int VAR_0 ;







 int FUNC_0 (size_t) ;
 int FUNC_1 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_2 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_3 (struct mt7603_dev*,int ,size_t) ;
 int FUNC_4 (struct mt7603_dev*,int ,size_t,int) ;
 int FUNC_5 (int *,TYPE_1__*,size_t,size_t,int) ;
 int FUNC_6 (int *,TYPE_1__*,size_t) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2,
      struct ieee80211_ampdu_params *VAR_3)
{
 enum ieee80211_ampdu_mlme_action VAR_4 = VAR_3->action;
 struct mt7603_dev *VAR_5 = VAR_1->priv;
 struct ieee80211_sta *VAR_6 = VAR_3->sta;
 struct ieee80211_txq *VAR_7 = VAR_6->txq[VAR_3->tid];
 struct mt7603_sta *VAR_8 = (struct mt7603_sta *)VAR_6->drv_priv;
 u16 VAR_9 = VAR_3->tid;
 u16 VAR_10 = VAR_3->ssn;
 u8 VAR_11 = VAR_3->buf_size;
 struct mt76_txq *VAR_12;

 if (!VAR_7)
  return -VAR_0;

 VAR_12 = (struct mt76_txq *)VAR_7->drv_priv;

 switch (VAR_4) {
 case 134:
  FUNC_5(&VAR_5->mt76, &VAR_8->wcid, VAR_9, VAR_10,
       VAR_3->buf_size);
  FUNC_3(VAR_5, VAR_6->addr, VAR_9);
  break;
 case 133:
  FUNC_6(&VAR_5->mt76, &VAR_8->wcid, VAR_9);
  break;
 case 132:
  VAR_12->aggr = 1;
  VAR_12->send_bar = 0;
  FUNC_4(VAR_5, VAR_8->wcid.idx, VAR_9, VAR_11);
  break;
 case 129:
 case 128:
  VAR_12->aggr = 0;
  FUNC_4(VAR_5, VAR_8->wcid.idx, VAR_9, -1);
  break;
 case 131:
  VAR_12->agg_ssn = FUNC_0(VAR_10);
  FUNC_1(VAR_2, VAR_6->addr, VAR_9);
  break;
 case 130:
  VAR_12->aggr = 0;
  FUNC_4(VAR_5, VAR_8->wcid.idx, VAR_9, -1);
  FUNC_2(VAR_2, VAR_6->addr, VAR_9);
  break;
 }

 return 0;
}
