
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mt76_txq {TYPE_2__* wcid; } ;
struct TYPE_6__ {int idx; int hw_key_idx; } ;
struct TYPE_5__ {TYPE_2__ wcid; } ;
struct mt7615_vif {int idx; int omac_idx; int wmm_idx; TYPE_1__ sta; scalar_t__ band_idx; } ;
struct TYPE_7__ {int mutex; int * wcid; } ;
struct mt7615_dev {TYPE_3__ mt76; int omac_mask; int vif_mask; } ;
struct ieee80211_vif {TYPE_4__* txq; int type; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt7615_dev* priv; } ;
struct TYPE_8__ {scalar_t__ drv_priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mt7615_dev*,struct ieee80211_vif*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_4,
    struct ieee80211_vif *VAR_5)
{
 struct mt7615_vif *VAR_6 = (struct mt7615_vif *)VAR_5->drv_priv;
 struct mt7615_dev *VAR_7 = VAR_4->priv;
 struct mt76_txq *VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_5(&VAR_7->mt76.mutex);

 VAR_6->idx = FUNC_1(~VAR_7->vif_mask) - 1;
 if (VAR_6->idx >= VAR_1) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_2(VAR_5->type, VAR_7->omac_mask);
 if (VAR_9 < 0) {
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_6->omac_idx = VAR_9;


 VAR_6->band_idx = 0;
 VAR_6->wmm_idx = VAR_6->idx % VAR_2;

 VAR_10 = FUNC_3(VAR_7, VAR_5, 1);
 if (VAR_10)
  goto out;

 VAR_7->vif_mask |= FUNC_0(VAR_6->idx);
 VAR_7->omac_mask |= FUNC_0(VAR_6->omac_idx);
 VAR_9 = VAR_3 - VAR_6->idx;
 VAR_6->sta.wcid.idx = VAR_9;
 VAR_6->sta.wcid.hw_key_idx = -1;

 FUNC_7(VAR_7->mt76.wcid[VAR_9], &VAR_6->sta.wcid);
 VAR_8 = (struct mt76_txq *)VAR_5->txq->drv_priv;
 VAR_8->wcid = &VAR_6->sta.wcid;
 FUNC_4(&VAR_7->mt76, VAR_5->txq);

out:
 FUNC_6(&VAR_7->mt76.mutex);

 return VAR_10;
}
