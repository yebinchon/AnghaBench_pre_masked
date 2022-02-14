
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct TYPE_6__ {int mutex; TYPE_2__* q_tx; } ;
struct mt7603_dev {TYPE_3__ mt76; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {size_t cw_min; size_t cw_max; size_t txop; size_t aifs; } ;
struct ieee80211_hw {struct mt7603_dev* priv; } ;
struct TYPE_5__ {TYPE_1__* q; } ;
struct TYPE_4__ {size_t hw_idx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 size_t VAR_2 ;
 size_t FUNC_2 (size_t) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 size_t VAR_5 ;
 size_t FUNC_5 (size_t) ;
 int FUNC_6 (struct mt7603_dev*) ;
 int FUNC_7 (struct mt7603_dev*) ;
 size_t FUNC_8 (struct mt7603_dev*,int ) ;
 int FUNC_9 (struct mt7603_dev*,int ,size_t) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct ieee80211_hw *VAR_6, struct ieee80211_vif *VAR_7, u16 VAR_8,
        const struct ieee80211_tx_queue_params *VAR_9)
{
 struct mt7603_dev *VAR_10 = VAR_6->priv;
 u16 VAR_11 = (1 << 5) - 1;
 u16 VAR_12 = (1 << 10) - 1;
 u32 VAR_13;

 VAR_8 = VAR_10->mt76.q_tx[VAR_8].q->hw_idx;

 if (VAR_9->cw_min)
  VAR_11 = VAR_9->cw_min;
 if (VAR_9->cw_max)
  VAR_12 = VAR_9->cw_max;

 FUNC_10(&VAR_10->mt76.mutex);
 FUNC_7(VAR_10);

 VAR_13 = FUNC_8(VAR_10, FUNC_4(VAR_8));
 VAR_13 &= ~(VAR_5 << FUNC_5(VAR_8));
 VAR_13 |= VAR_9->txop << FUNC_5(VAR_8);
 FUNC_9(VAR_10, FUNC_4(VAR_8), VAR_13);

 VAR_13 = FUNC_8(VAR_10, VAR_0);
 VAR_13 &= ~(VAR_1 << FUNC_0(VAR_8));
 VAR_13 |= VAR_9->aifs << FUNC_0(VAR_8);
 FUNC_9(VAR_10, VAR_0, VAR_13);

 VAR_13 = FUNC_8(VAR_10, VAR_3);
 VAR_13 &= ~(VAR_4 << FUNC_3(VAR_8));
 VAR_13 |= VAR_11 << FUNC_3(VAR_8);
 FUNC_9(VAR_10, VAR_3, VAR_13);

 VAR_13 = FUNC_8(VAR_10, FUNC_1(VAR_8));
 VAR_13 &= ~(VAR_2 << FUNC_2(VAR_8));
 VAR_13 |= VAR_12 << FUNC_2(VAR_8);
 FUNC_9(VAR_10, FUNC_1(VAR_8), VAR_13);

 FUNC_6(VAR_10);
 FUNC_11(&VAR_10->mt76.mutex);

 return 0;
}
