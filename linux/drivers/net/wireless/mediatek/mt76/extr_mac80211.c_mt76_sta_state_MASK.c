
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_dev {TYPE_1__* drv; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct mt76_dev* priv; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;
struct TYPE_2__ {int (* sta_assoc ) (struct mt76_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mt76_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_1 (struct mt76_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_2 (struct mt76_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;

int FUNC_3(struct ieee80211_hw *VAR_4, struct ieee80211_vif *VAR_5,
     struct ieee80211_sta *VAR_6,
     enum ieee80211_sta_state VAR_7,
     enum ieee80211_sta_state VAR_8)
{
 struct mt76_dev *VAR_9 = VAR_4->priv;

 if (VAR_7 == VAR_3 &&
     VAR_8 == VAR_2)
  return FUNC_0(VAR_9, VAR_5, VAR_6);

 if (VAR_7 == VAR_1 &&
     VAR_8 == VAR_0 &&
     VAR_9->drv->sta_assoc)
  VAR_9->drv->sta_assoc(VAR_9, VAR_5, VAR_6);

 if (VAR_7 == VAR_2 &&
     VAR_8 == VAR_3)
  FUNC_1(VAR_9, VAR_5, VAR_6);

 return 0;
}
