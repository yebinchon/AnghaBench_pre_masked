
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {int idx; } ;
struct TYPE_6__ {TYPE_5__ wcid; } ;
struct mt7603_vif {TYPE_1__ sta; int idx; } ;
struct TYPE_9__ {int beacon_mask; TYPE_3__* q_tx; } ;
struct mt7603_dev {int ps_lock; int beacon_check; TYPE_4__ mt76; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_8__ {TYPE_2__* q; } ;
struct TYPE_7__ {int hw_idx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 struct sk_buff* FUNC_2 (int ,struct ieee80211_vif*) ;
 int FUNC_3 (struct mt7603_dev*) ;
 int FUNC_4 (struct mt7603_dev*,int ,int,int ,int) ;
 int FUNC_5 (struct mt7603_dev*,int ,struct sk_buff*,TYPE_5__*,int *) ;
 int FUNC_6 (struct mt7603_dev*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(void *VAR_9, u8 *VAR_10, struct ieee80211_vif *VAR_11)
{
 struct mt7603_dev *VAR_12 = (struct mt7603_dev *)VAR_9;
 struct mt7603_vif *VAR_13 = (struct mt7603_vif *)VAR_11->drv_priv;
 struct sk_buff *VAR_14 = ((void*)0);

 if (!(VAR_12->mt76.beacon_mask & FUNC_0(VAR_13->idx)))
  return;

 VAR_14 = FUNC_2(FUNC_3(VAR_12), VAR_11);
 if (!VAR_14)
  return;

 FUNC_5(VAR_12, VAR_7, VAR_14, &VAR_13->sta.wcid, ((void*)0));

 FUNC_7(&VAR_12->ps_lock);
 FUNC_6(VAR_12, VAR_1, VAR_2 |
  FUNC_1(VAR_6, VAR_13->sta.wcid.idx) |
  FUNC_1(VAR_5,
      VAR_12->mt76.q_tx[VAR_8].q->hw_idx) |
  FUNC_1(VAR_3, 3) |
  FUNC_1(VAR_4, 8));

 if (!FUNC_4(VAR_12, VAR_1, VAR_2, 0, 5000))
  VAR_12->beacon_check = VAR_0;

 FUNC_8(&VAR_12->ps_lock);
}
