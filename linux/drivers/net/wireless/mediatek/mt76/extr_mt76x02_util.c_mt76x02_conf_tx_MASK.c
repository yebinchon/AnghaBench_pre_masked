
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct TYPE_6__ {TYPE_2__* q_tx; } ;
struct mt76x02_dev {TYPE_3__ mt76; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int txop; int aifs; scalar_t__ cw_max; scalar_t__ cw_min; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;
struct TYPE_5__ {TYPE_1__* q; } ;
struct TYPE_4__ {int hw_idx; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct mt76x02_dev*,int ) ;
 int FUNC_9 (struct mt76x02_dev*,int ,int) ;

int FUNC_10(struct ieee80211_hw *VAR_11, struct ieee80211_vif *VAR_12,
      u16 VAR_13, const struct ieee80211_tx_queue_params *VAR_14)
{
 struct mt76x02_dev *VAR_15 = VAR_11->priv;
 u8 VAR_16 = 5, VAR_17 = 10, VAR_18;
 u32 VAR_19;

 VAR_18 = VAR_15->mt76.q_tx[VAR_13].q->hw_idx;

 if (VAR_14->cw_min)
  VAR_16 = FUNC_7(VAR_14->cw_min);
 if (VAR_14->cw_max)
  VAR_17 = FUNC_7(VAR_14->cw_max);

 VAR_19 = FUNC_0(VAR_3, VAR_14->txop) |
       FUNC_0(VAR_0, VAR_14->aifs) |
       FUNC_0(VAR_2, VAR_16) |
       FUNC_0(VAR_1, VAR_17);
 FUNC_9(VAR_15, FUNC_1(VAR_18), VAR_19);

 VAR_19 = FUNC_8(VAR_15, FUNC_5(VAR_18));
 VAR_19 &= ~(VAR_10 << FUNC_6(VAR_18));
 VAR_19 |= VAR_14->txop << FUNC_6(VAR_18);
 FUNC_9(VAR_15, FUNC_5(VAR_18), VAR_19);

 VAR_19 = FUNC_8(VAR_15, VAR_4);
 VAR_19 &= ~(VAR_5 << FUNC_2(VAR_18));
 VAR_19 |= VAR_14->aifs << FUNC_2(VAR_18);
 FUNC_9(VAR_15, VAR_4, VAR_19);

 VAR_19 = FUNC_8(VAR_15, VAR_8);
 VAR_19 &= ~(VAR_9 << FUNC_4(VAR_18));
 VAR_19 |= VAR_16 << FUNC_4(VAR_18);
 FUNC_9(VAR_15, VAR_8, VAR_19);

 VAR_19 = FUNC_8(VAR_15, VAR_6);
 VAR_19 &= ~(VAR_7 << FUNC_3(VAR_18));
 VAR_19 |= VAR_17 << FUNC_3(VAR_18);
 FUNC_9(VAR_15, VAR_6, VAR_19);

 return 0;
}
