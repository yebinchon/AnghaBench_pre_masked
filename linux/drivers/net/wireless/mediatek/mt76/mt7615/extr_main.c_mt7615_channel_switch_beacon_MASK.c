
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mt7615_dev* priv; } ;
struct cfg80211_chan_def {int dummy; } ;


 int FUNC_0 (struct mt7615_dev*,struct ieee80211_vif*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_hw *VAR_0,
        struct ieee80211_vif *VAR_1,
        struct cfg80211_chan_def *VAR_2)
{
 struct mt7615_dev *VAR_3 = VAR_0->priv;

 FUNC_1(&VAR_3->mt76.mutex);
 FUNC_0(VAR_3, VAR_1, 1);
 FUNC_2(&VAR_3->mt76.mutex);
}
