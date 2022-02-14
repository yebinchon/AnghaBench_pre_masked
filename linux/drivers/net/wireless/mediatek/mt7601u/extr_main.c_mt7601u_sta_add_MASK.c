
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_vif {int idx; } ;
struct TYPE_2__ {int idx; int hw_key_idx; } ;
struct mt76_sta {TYPE_1__ wcid; } ;
struct mt7601u_dev {int mutex; int * wcid; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mt7601u_dev*) ;
 int FUNC_3 (struct mt7601u_dev*,int,int ,int ) ;
 int FUNC_4 (struct mt7601u_dev*,int ,int ) ;
 int FUNC_5 (struct mt7601u_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2,
  struct ieee80211_sta *VAR_3)
{
 struct mt7601u_dev *VAR_4 = VAR_1->priv;
 struct mt76_sta *VAR_5 = (struct mt76_sta *) VAR_3->drv_priv;
 struct mt76_vif *VAR_6 = (struct mt76_vif *) VAR_2->drv_priv;
 int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_6(&VAR_4->mutex);

 VAR_8 = FUNC_5(VAR_4);
 if (VAR_8 < 0) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_5->wcid.idx = VAR_8;
 VAR_5->wcid.hw_key_idx = -1;
 FUNC_3(VAR_4, VAR_8, VAR_6->idx, VAR_3->addr);
 FUNC_4(VAR_4, FUNC_0(VAR_8), FUNC_1(VAR_8));
 FUNC_8(VAR_4->wcid[VAR_8], &VAR_5->wcid);
 FUNC_2(VAR_4);

out:
 FUNC_7(&VAR_4->mutex);

 return VAR_7;
}
