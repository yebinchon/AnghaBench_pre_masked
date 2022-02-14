
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_vif {int active; int id; int enable_beacon; int type; int list; int addr; scalar_t__ drv_priv; int p2p; int * beacon; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct carl9170_vif_info {int active; int id; int enable_beacon; int type; int list; int addr; scalar_t__ drv_priv; int p2p; int * beacon; } ;
struct TYPE_6__ {int off_override; } ;
struct TYPE_4__ {scalar_t__ tx_seq_table; int vif_num; } ;
struct ar9170 {int vifs; int mutex; TYPE_3__ ps; TYPE_2__* vif_priv; int vif_bitmap; TYPE_1__ fw; int beacon_iter; int vif_list; int beacon_lock; } ;
struct TYPE_5__ {int id; int vif; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 int const VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int,int ) ;
 struct ieee80211_vif* FUNC_4 (struct ar9170*) ;
 int FUNC_5 (struct ar9170*,struct ieee80211_vif*) ;
 int FUNC_6 (struct ar9170*,int,int ) ;
 int FUNC_7 (struct ar9170*,scalar_t__,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,struct ieee80211_vif*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 () ;

__attribute__((used)) static int FUNC_20(struct ieee80211_hw *VAR_4,
         struct ieee80211_vif *VAR_5)
{
 struct carl9170_vif_info *VAR_6 = (void *) VAR_5->drv_priv;
 struct ieee80211_vif *VAR_7, *VAR_8 = ((void*)0);
 struct ar9170 *VAR_9 = VAR_4->priv;
 int VAR_10 = -1, VAR_11 = 0;

 FUNC_12(&VAR_9->mutex);
 FUNC_15();
 if (VAR_6->active) {




  VAR_10 = VAR_6->id;
  VAR_6->enable_beacon = 0;

  FUNC_17(&VAR_9->beacon_lock);
  FUNC_8(VAR_6->beacon);
  VAR_6->beacon = ((void*)0);
  FUNC_18(&VAR_9->beacon_lock);

  goto init;
 }
 VAR_7 = FUNC_4(VAR_9);

 if (VAR_7) {
  switch (VAR_7->type) {
  case 128:
   if (VAR_5->type == 128)
    break;







   if (VAR_7->p2p && VAR_5->p2p &&
       VAR_5->type == 130) {
    VAR_8 = VAR_7;
    break;
   }

   VAR_11 = -VAR_0;
   FUNC_16();

   goto unlock;

  case 129:
  case 130:
   if ((VAR_5->type == 128) ||
       (VAR_5->type == VAR_2) ||
       (VAR_5->type == 130) ||
       (VAR_5->type == 129))
    break;

   VAR_11 = -VAR_0;
   FUNC_16();
   goto unlock;

  default:
   FUNC_16();
   goto unlock;
  }
 }

 VAR_10 = FUNC_2(&VAR_9->vif_bitmap, VAR_9->fw.vif_num, 0);

 if (VAR_10 < 0) {
  FUNC_16();

  VAR_11 = -VAR_1;
  goto unlock;
 }

 FUNC_0(VAR_9->vif_priv[VAR_10].id != VAR_10);

 VAR_6->active = 1;
 VAR_6->id = VAR_10;
 VAR_6->enable_beacon = 0;
 VAR_9->vifs++;
 if (VAR_8) {




  FUNC_9(&VAR_6->list, &VAR_9->vif_list);
 } else {



  FUNC_10(&VAR_6->list, &VAR_9->vif_list);
 }
 FUNC_14(VAR_9->vif_priv[VAR_10].vif, VAR_5);

init:
 VAR_7 = FUNC_4(VAR_9);

 if (VAR_7 == VAR_5) {
  FUNC_14(VAR_9->beacon_iter, VAR_6);
  FUNC_16();

  if (VAR_8) {
   struct carl9170_vif_info *VAR_12 =
    (void *) VAR_8->drv_priv;





   VAR_11 = FUNC_6(VAR_9, VAR_12->id,
             VAR_8->addr);
   if (VAR_11)
    goto unlock;
  }

  VAR_11 = FUNC_5(VAR_9, VAR_5);
  if (VAR_11)
   goto unlock;
 } else {
  FUNC_16();
  VAR_11 = FUNC_6(VAR_9, VAR_10, VAR_5->addr);

  if (VAR_11)
   goto unlock;
 }

 if (VAR_9->fw.tx_seq_table) {
  VAR_11 = FUNC_7(VAR_9, VAR_9->fw.tx_seq_table + VAR_10 * 4,
      0);
  if (VAR_11)
   goto unlock;
 }

unlock:
 if (VAR_11 && (VAR_10 >= 0)) {
  VAR_6->active = 0;
  FUNC_3(&VAR_9->vif_bitmap, VAR_10, 0);
  VAR_9->vifs--;
  FUNC_1(VAR_9->vif_priv[VAR_10].vif, ((void*)0));
  FUNC_11(&VAR_6->list);
  FUNC_13(&VAR_9->mutex);
  FUNC_19();
 } else {
  if (VAR_9->vifs > 1)
   VAR_9->ps.off_override |= VAR_3;

  FUNC_13(&VAR_9->mutex);
 }

 return VAR_11;
}
