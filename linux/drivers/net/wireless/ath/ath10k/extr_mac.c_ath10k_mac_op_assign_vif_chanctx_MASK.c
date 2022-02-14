
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ type; int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_3__ def; } ;
struct ath10k_vif {int is_started; int is_up; int vdev_id; } ;
struct TYPE_5__ {scalar_t__ tx_stats_over_pktlog; } ;
struct ath10k {int conf_mutex; int pktlog_filter; TYPE_2__ hw_params; } ;
struct TYPE_4__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,int ,char*,struct ieee80211_chanctx_conf*,int ) ;
 scalar_t__ FUNC_2 (struct ath10k_vif*) ;
 int FUNC_3 (struct ath10k_vif*) ;
 int FUNC_4 (struct ath10k_vif*) ;
 scalar_t__ FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k_vif*,TYPE_3__*) ;
 int FUNC_7 (struct ath10k_vif*) ;
 int FUNC_8 (struct ath10k*,char*,int,...) ;
 int FUNC_9 (struct ath10k*,int ) ;
 int FUNC_10 (struct ath10k*,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct ieee80211_hw *VAR_4,
     struct ieee80211_vif *VAR_5,
     struct ieee80211_chanctx_conf *VAR_6)
{
 struct ath10k *VAR_7 = VAR_4->priv;
 struct ath10k_vif *VAR_8 = (void *)VAR_5->drv_priv;
 int VAR_9;

 FUNC_11(&VAR_7->conf_mutex);

 FUNC_1(VAR_7, VAR_0,
     "mac chanctx assign ptr %pK vdev_id %i\n",
     VAR_6, VAR_8->vdev_id);

 if (FUNC_0(VAR_8->is_started)) {
  FUNC_12(&VAR_7->conf_mutex);
  return -VAR_2;
 }

 VAR_9 = FUNC_6(VAR_8, &VAR_6->def);
 if (VAR_9) {
  FUNC_8(VAR_7, "failed to start vdev %i addr %pM on freq %d: %d\n",
       VAR_8->vdev_id, VAR_5->addr,
       VAR_6->def.chan->center_freq, VAR_9);
  goto err;
 }

 VAR_8->is_started = 1;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9) {
  FUNC_8(VAR_7, "failed to update vdev %i ps: %d\n",
       VAR_8->vdev_id, VAR_9);
  goto err_stop;
 }

 if (VAR_5->type == VAR_3) {
  VAR_9 = FUNC_10(VAR_7, VAR_8->vdev_id, 0, VAR_5->addr);
  if (VAR_9) {
   FUNC_8(VAR_7, "failed to up monitor vdev %i: %d\n",
        VAR_8->vdev_id, VAR_9);
   goto err_stop;
  }

  VAR_8->is_up = 1;
 }

 if (FUNC_2(VAR_8)) {
  VAR_9 = FUNC_3(VAR_8);
  if (VAR_9)
   FUNC_8(VAR_7, "failed to set cts protection for vdev %d: %d\n",
        VAR_8->vdev_id, VAR_9);
 }

 if (FUNC_5(VAR_7) &&
     VAR_7->hw_params.tx_stats_over_pktlog) {
  VAR_7->pktlog_filter |= VAR_1;
  VAR_9 = FUNC_9(VAR_7,
          VAR_7->pktlog_filter);
  if (VAR_9) {
   FUNC_8(VAR_7, "failed to enable pktlog %d\n", VAR_9);
   goto err_stop;
  }
 }

 FUNC_12(&VAR_7->conf_mutex);
 return 0;

err_stop:
 FUNC_7(VAR_8);
 VAR_8->is_started = 0;
 FUNC_4(VAR_8);

err:
 FUNC_12(&VAR_7->conf_mutex);
 return VAR_9;
}
