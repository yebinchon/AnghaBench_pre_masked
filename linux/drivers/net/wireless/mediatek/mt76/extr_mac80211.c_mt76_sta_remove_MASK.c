
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_dev {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct mt76_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct mt76_dev *VAR_0, struct ieee80211_vif *VAR_1,
  struct ieee80211_sta *VAR_2)
{
 FUNC_1(&VAR_0->mutex);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->mutex);
}
