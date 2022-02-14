
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ieee80211_vif_chanctx_switch {TYPE_6__* new_ctx; TYPE_5__* vif; TYPE_4__* old_ctx; } ;
struct ath10k_vif {int vdev_id; int bssid; int aid; int ar; int is_up; int is_started; } ;
struct ath10k {int data_lock; scalar_t__ monitor_started; int conf_mutex; } ;
struct TYPE_14__ {int width; TYPE_2__* chan; } ;
struct TYPE_13__ {TYPE_7__ def; } ;
struct TYPE_12__ {scalar_t__ drv_priv; } ;
struct TYPE_10__ {int width; TYPE_1__* chan; } ;
struct TYPE_11__ {TYPE_3__ def; } ;
struct TYPE_9__ {int center_freq; } ;
struct TYPE_8__ {int center_freq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct ath10k_vif*) ;
 int FUNC_3 (struct ath10k_vif*) ;
 int FUNC_4 (struct ath10k*,int *,struct ieee80211_vif_chanctx_switch*,int) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*) ;
 int FUNC_7 (struct ath10k_vif*,TYPE_7__*) ;
 int FUNC_8 (struct ath10k*,char*,int,...) ;
 int FUNC_9 (struct ath10k*,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(struct ath10k *VAR_1,
      struct ieee80211_vif_chanctx_switch *VAR_2,
      int VAR_3)
{
 struct ath10k_vif *VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_11(&VAR_1->conf_mutex);




 if (VAR_1->monitor_started)
  FUNC_6(VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_4 = (void *)VAR_2[VAR_6].vif->drv_priv;

  FUNC_1(VAR_1, VAR_0,
      "mac chanctx switch vdev_id %i freq %hu->%hu width %d->%d\n",
      VAR_4->vdev_id,
      VAR_2[VAR_6].old_ctx->def.chan->center_freq,
      VAR_2[VAR_6].new_ctx->def.chan->center_freq,
      VAR_2[VAR_6].old_ctx->def.width,
      VAR_2[VAR_6].new_ctx->def.width);

  if (FUNC_0(!VAR_4->is_started))
   continue;

  if (FUNC_0(!VAR_4->is_up))
   continue;

  VAR_5 = FUNC_9(VAR_1, VAR_4->vdev_id);
  if (VAR_5) {
   FUNC_8(VAR_1, "failed to down vdev %d: %d\n",
        VAR_4->vdev_id, VAR_5);
   continue;
  }
 }





 FUNC_12(&VAR_1->data_lock);
 FUNC_4(VAR_1, ((void*)0), VAR_2, VAR_3);
 FUNC_13(&VAR_1->data_lock);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_4 = (void *)VAR_2[VAR_6].vif->drv_priv;

  if (FUNC_0(!VAR_4->is_started))
   continue;

  if (FUNC_0(!VAR_4->is_up))
   continue;

  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5)
   FUNC_8(VAR_1, "failed to update bcn tmpl during csa: %d\n",
        VAR_5);

  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5)
   FUNC_8(VAR_1, "failed to update prb tmpl during csa: %d\n",
        VAR_5);

  VAR_5 = FUNC_7(VAR_4, &VAR_2[VAR_6].new_ctx->def);
  if (VAR_5) {
   FUNC_8(VAR_1, "failed to restart vdev %d: %d\n",
        VAR_4->vdev_id, VAR_5);
   continue;
  }

  VAR_5 = FUNC_10(VAR_4->ar, VAR_4->vdev_id, VAR_4->aid,
      VAR_4->bssid);
  if (VAR_5) {
   FUNC_8(VAR_1, "failed to bring vdev up %d: %d\n",
        VAR_4->vdev_id, VAR_5);
   continue;
  }
 }

 FUNC_5(VAR_1);
}
