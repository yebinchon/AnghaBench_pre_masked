
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct mt76_txq {TYPE_2__* wcid; } ;
struct TYPE_6__ {int idx; int hw_key_idx; } ;
struct TYPE_5__ {TYPE_2__ wcid; } ;
struct mt7603_vif {int idx; TYPE_1__ sta; } ;
struct TYPE_7__ {int mutex; int * wcid; } ;
struct mt7603_dev {TYPE_3__ mt76; int vif_mask; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_4__* txq; scalar_t__ addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt7603_dev* priv; } ;
struct TYPE_8__ {scalar_t__ drv_priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct mt7603_dev*,int,int,int *) ;
 int FUNC_10 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_11 (struct mt7603_dev*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_15(struct ieee80211_hw *VAR_7, struct ieee80211_vif *VAR_8)
{
 struct mt7603_vif *VAR_9 = (struct mt7603_vif *)VAR_8->drv_priv;
 struct mt7603_dev *VAR_10 = VAR_7->priv;
 struct mt76_txq *VAR_11;
 u8 VAR_12[VAR_1];
 int VAR_13;
 int VAR_14 = 0;

 FUNC_12(&VAR_10->mt76.mutex);

 VAR_9->idx = FUNC_6(~VAR_10->vif_mask) - 1;
 if (VAR_9->idx >= VAR_2) {
  VAR_14 = -VAR_0;
  goto out;
 }

 FUNC_11(VAR_10, FUNC_3(VAR_9->idx),
  FUNC_8(VAR_8->addr));
 FUNC_11(VAR_10, FUNC_4(VAR_9->idx),
  (FUNC_7(VAR_8->addr + 4) |
   VAR_5));

 if (VAR_8->type == VAR_6) {
  FUNC_11(VAR_10, FUNC_1(VAR_9->idx),
   FUNC_8(VAR_8->addr));
  FUNC_11(VAR_10, FUNC_2(VAR_9->idx),
   (FUNC_7(VAR_8->addr + 4) |
    VAR_4));
 }

 VAR_13 = VAR_3 - 1 - VAR_9->idx;
 VAR_10->vif_mask |= FUNC_0(VAR_9->idx);
 VAR_9->sta.wcid.idx = VAR_13;
 VAR_9->sta.wcid.hw_key_idx = -1;

 FUNC_5(VAR_12);
 FUNC_9(VAR_10, VAR_13, VAR_9->idx, VAR_12);

 VAR_11 = (struct mt76_txq *)VAR_8->txq->drv_priv;
 VAR_11->wcid = &VAR_9->sta.wcid;
 FUNC_10(&VAR_10->mt76, VAR_8->txq);
 FUNC_14(VAR_10->mt76.wcid[VAR_13], &VAR_9->sta.wcid);

out:
 FUNC_13(&VAR_10->mt76.mutex);

 return VAR_14;
}
