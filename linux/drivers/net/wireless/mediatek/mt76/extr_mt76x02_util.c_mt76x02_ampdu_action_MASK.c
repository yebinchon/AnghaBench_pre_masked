
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_3__ {int idx; } ;
struct mt76x02_sta {TYPE_1__ wcid; } ;
struct mt76x02_dev {int mt76; } ;
struct mt76_txq {int aggr; int send_bar; int agg_ssn; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_txq {scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; struct ieee80211_txq** txq; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;
struct ieee80211_ampdu_params {int action; size_t tid; size_t ssn; int buf_size; struct ieee80211_sta* sta; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int FUNC_0 (int ) ;
 int VAR_0 ;







 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_vif*,int ,size_t,int ) ;
 int FUNC_4 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_5 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_6 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_7 (int *,TYPE_1__*,size_t,size_t,int ) ;
 int FUNC_8 (int *,TYPE_1__*,size_t) ;
 int FUNC_9 (struct mt76x02_dev*,int ,int ) ;

int FUNC_10(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2,
    struct ieee80211_ampdu_params *VAR_3)
{
 enum ieee80211_ampdu_mlme_action VAR_4 = VAR_3->action;
 struct ieee80211_sta *VAR_5 = VAR_3->sta;
 struct mt76x02_dev *VAR_6 = VAR_1->priv;
 struct mt76x02_sta *VAR_7 = (struct mt76x02_sta *)VAR_5->drv_priv;
 struct ieee80211_txq *VAR_8 = VAR_5->txq[VAR_3->tid];
 u16 VAR_9 = VAR_3->tid;
 u16 VAR_10 = VAR_3->ssn;
 struct mt76_txq *VAR_11;

 if (!VAR_8)
  return -VAR_0;

 VAR_11 = (struct mt76_txq *)VAR_8->drv_priv;

 switch (VAR_4) {
 case 134:
  FUNC_7(&VAR_6->mt76, &VAR_7->wcid, VAR_9,
       VAR_10, VAR_3->buf_size);
  FUNC_9(VAR_6, FUNC_2(VAR_7->wcid.idx) + 4, FUNC_0(16 + VAR_9));
  break;
 case 133:
  FUNC_8(&VAR_6->mt76, &VAR_7->wcid, VAR_9);
  FUNC_6(VAR_6, FUNC_2(VAR_7->wcid.idx) + 4,
      FUNC_0(16 + VAR_9));
  break;
 case 132:
  VAR_11->aggr = 1;
  VAR_11->send_bar = 0;
  FUNC_3(VAR_2, VAR_5->addr, VAR_9, VAR_11->agg_ssn);
  break;
 case 129:
 case 128:
  VAR_11->aggr = 0;
  break;
 case 131:
  VAR_11->agg_ssn = FUNC_1(VAR_10);
  FUNC_4(VAR_2, VAR_5->addr, VAR_9);
  break;
 case 130:
  VAR_11->aggr = 0;
  FUNC_5(VAR_2, VAR_5->addr, VAR_9);
  break;
 }

 return 0;
}
