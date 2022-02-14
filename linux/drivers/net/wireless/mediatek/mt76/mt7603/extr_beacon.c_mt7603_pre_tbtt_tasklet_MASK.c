
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mt76_queue {scalar_t__ queued; int lock; } ;
struct TYPE_10__ {int wcid; } ;
struct mt7603_vif {TYPE_3__ sta; } ;
struct TYPE_13__ {int beacon_mask; TYPE_4__* q_tx; scalar_t__ csa_complete; } ;
struct mt7603_dev {int* tail; int* count; int beacon_check; TYPE_6__ mt76; int q; struct mt7603_dev* dev; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_9__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct beacon_bc_data {int* tail; int* count; int beacon_check; TYPE_6__ mt76; int q; struct beacon_bc_data* dev; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_12__ {TYPE_1__ conf; } ;
struct TYPE_11__ {struct mt76_queue* q; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_3 (struct sk_buff*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_5__*,int ,int ,struct mt7603_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (TYPE_6__*) ;
 TYPE_5__* FUNC_13 (struct mt7603_dev*) ;
 int FUNC_14 (struct mt7603_dev*,struct mt76_queue*) ;
 int FUNC_15 (struct mt7603_dev*,size_t,int) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (struct mt7603_dev*,size_t,struct sk_buff*,int *,int *) ;
 int FUNC_18 (struct mt7603_dev*,int ,int) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

void FUNC_23(unsigned long VAR_9)
{
 struct mt7603_dev *VAR_10 = (struct mt7603_dev *)VAR_9;
 struct mt76_queue *VAR_11;
 struct beacon_bc_data VAR_12 = {};
 struct sk_buff *VAR_13;
 int VAR_14, VAR_15;

 if (FUNC_13(VAR_10)->conf.flags & VAR_0)
  return;

 VAR_12.dev = VAR_10;
 FUNC_9(&VAR_12.q);

 VAR_11 = VAR_10->mt76.q_tx[VAR_3].q;
 FUNC_21(&VAR_11->lock);
 FUNC_11(FUNC_13(VAR_10),
  VAR_1,
  VAR_8, VAR_10);
 FUNC_14(VAR_10, VAR_11);
 FUNC_22(&VAR_11->lock);


 FUNC_18(VAR_10, VAR_5, FUNC_2(30, 16) | FUNC_1(0));

 FUNC_15(VAR_10, VAR_4, 0);

 FUNC_12(&VAR_10->mt76);
 if (VAR_10->mt76.csa_complete)
  goto out;

 VAR_11 = VAR_10->mt76.q_tx[VAR_4].q;
 do {
  VAR_15 = FUNC_20(&VAR_12.q);
  FUNC_11(FUNC_13(VAR_10),
   VAR_1,
   VAR_7, &VAR_12);
 } while (VAR_15 != FUNC_20(&VAR_12.q) &&
   FUNC_20(&VAR_12.q) < 8);

 if (FUNC_19(&VAR_12.q))
  goto out;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_12.tail); VAR_14++) {
  if (!VAR_12.tail[VAR_14])
   continue;

  FUNC_16(VAR_12.tail[VAR_14], 0);
 }

 FUNC_21(&VAR_11->lock);
 while ((VAR_13 = FUNC_8(&VAR_12.q)) != ((void*)0)) {
  struct ieee80211_tx_info *VAR_16 = FUNC_3(VAR_13);
  struct ieee80211_vif *VAR_17 = VAR_16->control.vif;
  struct mt7603_vif *VAR_18 = (struct mt7603_vif *)VAR_17->drv_priv;

  FUNC_17(VAR_10, VAR_4, VAR_13, &VAR_18->sta.wcid, ((void*)0));
 }
 FUNC_14(VAR_10, VAR_11);
 FUNC_22(&VAR_11->lock);

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_12.count); VAR_14++)
  FUNC_18(VAR_10, FUNC_4(VAR_14),
   VAR_12.count[VAR_14] << FUNC_5(VAR_14));

 FUNC_18(VAR_10, VAR_6,
  FUNC_7(0) |
  (FUNC_6(1) *
   ((1 << (VAR_2 - 1)) - 1)));

out:
 FUNC_15(VAR_10, VAR_3, 0);
 if (VAR_10->mt76.q_tx[VAR_3].q->queued >
     FUNC_10(VAR_10->mt76.beacon_mask))
  VAR_10->beacon_check++;
}
