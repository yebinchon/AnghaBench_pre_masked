
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {scalar_t__ idx; } ;
struct mt76_sta {size_t* agg_ssn; TYPE_1__ wcid; } ;
struct mt7601u_dev {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;
struct ieee80211_ampdu_params {int action; size_t tid; size_t ssn; struct ieee80211_sta* sta; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;







 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ieee80211_vif*,int ,size_t,size_t) ;
 int FUNC_5 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_6 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_7 (struct mt7601u_dev*,int ,int ) ;
 int FUNC_8 (struct mt7601u_dev*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
    struct ieee80211_ampdu_params *VAR_2)
{
 struct mt7601u_dev *VAR_3 = VAR_0->priv;
 struct ieee80211_sta *VAR_4 = VAR_2->sta;
 enum ieee80211_ampdu_mlme_action VAR_5 = VAR_2->action;
 u16 VAR_6 = VAR_2->tid;
 u16 VAR_7 = VAR_2->ssn;
 struct mt76_sta *VAR_8 = (struct mt76_sta *) VAR_4->drv_priv;

 FUNC_3(VAR_8->wcid.idx > FUNC_1(0));

 switch (VAR_5) {
 case 134:
  FUNC_8(VAR_3, FUNC_2(VAR_8->wcid.idx) + 4, FUNC_0(16 + VAR_6));
  break;
 case 133:
  FUNC_7(VAR_3, FUNC_2(VAR_8->wcid.idx) + 4,
      FUNC_0(16 + VAR_6));
  break;
 case 132:
  FUNC_4(VAR_1, VAR_4->addr, VAR_6, VAR_8->agg_ssn[VAR_6]);
  break;
 case 129:
 case 128:
  break;
 case 131:
  VAR_8->agg_ssn[VAR_6] = VAR_7 << 4;
  FUNC_5(VAR_1, VAR_4->addr, VAR_6);
  break;
 case 130:
  FUNC_6(VAR_1, VAR_4->addr, VAR_6);
  break;
 }

 return 0;
}
