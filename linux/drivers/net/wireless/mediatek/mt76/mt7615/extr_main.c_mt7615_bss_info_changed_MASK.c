
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mutex; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mt7615_dev* priv; } ;
struct ieee80211_bss_conf {int enable_beacon; int assoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt7615_dev*,struct ieee80211_vif*,int ) ;
 int FUNC_1 (struct mt7615_dev*,struct ieee80211_vif*,int ) ;
 int FUNC_2 (struct mt7615_dev*,struct ieee80211_vif*,int ) ;
 int FUNC_3 (struct mt7615_dev*,struct ieee80211_vif*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct ieee80211_bss_conf *VAR_4,
        u32 VAR_5)
{
 struct mt7615_dev *VAR_6 = VAR_2->priv;

 FUNC_4(&VAR_6->mt76.mutex);

 if (VAR_5 & VAR_0)
  FUNC_1(VAR_6, VAR_3, VAR_4->assoc);





 if (VAR_5 & VAR_1) {
  FUNC_1(VAR_6, VAR_3, VAR_4->enable_beacon);
  FUNC_3(VAR_6, VAR_3, VAR_4->enable_beacon);
  FUNC_2(VAR_6, VAR_3, VAR_4->enable_beacon);
  FUNC_0(VAR_6, VAR_3, VAR_4->enable_beacon);
 }

 FUNC_5(&VAR_6->mt76.mutex);
}
