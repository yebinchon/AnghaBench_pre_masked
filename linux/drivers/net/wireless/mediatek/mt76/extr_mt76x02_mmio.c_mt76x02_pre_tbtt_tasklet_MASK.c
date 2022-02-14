
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mt76x02_vif {int group_wcid; } ;
struct TYPE_11__ {scalar_t__ csa_complete; TYPE_1__* q_tx; } ;
struct mt76x02_dev {TYPE_5__ mt76; } ;
struct mt76_queue {int lock; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_9__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {TYPE_3__ control; } ;
struct beacon_bc_data {int q; int * tail; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_10__ {TYPE_2__ conf; } ;
struct TYPE_7__ {struct mt76_queue* q; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 size_t VAR_2 ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int ,int ,struct mt76x02_dev*) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_4__* FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct mt76x02_dev*,size_t,struct sk_buff*,int *,int *) ;
 int FUNC_8 (struct mt76x02_dev*,struct beacon_bc_data*,int) ;
 int FUNC_9 (struct mt76x02_dev*) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(unsigned long VAR_4)
{
 struct mt76x02_dev *VAR_5 = (struct mt76x02_dev *)VAR_4;
 struct mt76_queue *VAR_6 = VAR_5->mt76.q_tx[VAR_2].q;
 struct beacon_bc_data VAR_7 = {};
 struct sk_buff *VAR_8;
 int VAR_9;

 if (FUNC_5(VAR_5)->conf.flags & VAR_0)
  return;

 FUNC_9(VAR_5);

 FUNC_3(FUNC_5(VAR_5),
  VAR_1,
  VAR_3, VAR_5);

 FUNC_4(&VAR_5->mt76);

 if (VAR_5->mt76.csa_complete)
  return;

 FUNC_8(VAR_5, &VAR_7, 8);

 if (!FUNC_10(&VAR_7.q))
  return;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7.tail); VAR_9++) {
  if (!VAR_7.tail[VAR_9])
   continue;

  FUNC_6(VAR_7.tail[VAR_9], 0);
 }

 FUNC_11(&VAR_6->lock);
 while ((VAR_8 = FUNC_2(&VAR_7.q)) != ((void*)0)) {
  struct ieee80211_tx_info *VAR_10 = FUNC_1(VAR_8);
  struct ieee80211_vif *VAR_11 = VAR_10->control.vif;
  struct mt76x02_vif *VAR_12 = (struct mt76x02_vif *)VAR_11->drv_priv;

  FUNC_7(VAR_5, VAR_2, VAR_8, &VAR_12->group_wcid,
      ((void*)0));
 }
 FUNC_12(&VAR_6->lock);
}
