
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ type; int txq; int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_5__ {int noa_data; } ;
struct TYPE_6__ {TYPE_1__ ap; } ;
struct ath10k_vif {long long vdev_id; scalar_t__ vdev_type; TYPE_2__ u; int ar; int list; int connection_loss_work; int ap_csa_work; } ;
struct ath10k_peer {struct ieee80211_vif* vif; } ;
struct TYPE_8__ {int tx_lock; } ;
struct TYPE_7__ {int svc_map; } ;
struct ath10k {long long free_vdev_map; int conf_mutex; TYPE_4__ htt; int * monitor_arvif; int data_lock; struct ath10k_peer** peer_map; int num_peers; int vdev_delete_done; TYPE_3__ wmi; } ;


 int FUNC_0 (struct ath10k_peer**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ath10k*,int ,char*,long long) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,int ) ;
 int FUNC_4 (struct ath10k_vif*) ;
 int FUNC_5 (struct ath10k_vif*) ;
 int FUNC_6 (struct ath10k*) ;
 int FUNC_7 (struct ath10k*,long long) ;
 int FUNC_8 (struct ath10k_vif*) ;
 int FUNC_9 (struct ath10k*,long long,int ) ;
 int FUNC_10 (struct ath10k*,long long,int ) ;
 int FUNC_11 (struct ath10k*,char*,...) ;
 int FUNC_12 (int ,long long,int ) ;
 int FUNC_13 (struct ath10k*,long long) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int ,int ) ;
 unsigned long FUNC_23 (int *,int ) ;

__attribute__((used)) static void FUNC_24(struct ieee80211_hw *VAR_6,
        struct ieee80211_vif *VAR_7)
{
 struct ath10k *VAR_8 = VAR_6->priv;
 struct ath10k_vif *VAR_9 = (void *)VAR_7->drv_priv;
 struct ath10k_peer *VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_15(&VAR_9->ap_csa_work);
 FUNC_14(&VAR_9->connection_loss_work);

 FUNC_18(&VAR_8->conf_mutex);

 VAR_12 = FUNC_8(VAR_9);
 if (VAR_12)
  FUNC_11(VAR_8, "failed to stop spectral for vdev %i: %d\n",
       VAR_9->vdev_id, VAR_12);

 VAR_8->free_vdev_map |= 1LL << VAR_9->vdev_id;
 FUNC_20(&VAR_8->data_lock);
 FUNC_17(&VAR_9->list);
 FUNC_21(&VAR_8->data_lock);

 if (VAR_9->vdev_type == VAR_4 ||
     VAR_9->vdev_type == VAR_5) {
  VAR_12 = FUNC_12(VAR_9->ar, VAR_9->vdev_id,
          VAR_7->addr);
  if (VAR_12)
   FUNC_11(VAR_8, "failed to submit AP/IBSS self-peer removal on vdev %i: %d\n",
        VAR_9->vdev_id, VAR_12);

  FUNC_9(VAR_8, VAR_9->vdev_id,
       VAR_7->addr);
  FUNC_16(VAR_9->u.ap.noa_data);
 }

 FUNC_1(VAR_8, VAR_0, "mac vdev %i delete (remove interface)\n",
     VAR_9->vdev_id);

 VAR_12 = FUNC_13(VAR_8, VAR_9->vdev_id);
 if (VAR_12)
  FUNC_11(VAR_8, "failed to delete WMI vdev %i: %d\n",
       VAR_9->vdev_id, VAR_12);

 if (FUNC_22(VAR_3, VAR_8->wmi.svc_map)) {
  VAR_11 = FUNC_23(&VAR_8->vdev_delete_done,
       VAR_1);
  if (VAR_11 == 0) {
   FUNC_11(VAR_8, "Timeout in receiving vdev delete response\n");
   goto out;
  }
 }




 if (VAR_9->vdev_type == VAR_4 ||
     VAR_9->vdev_type == VAR_5) {
  VAR_12 = FUNC_10(VAR_8, VAR_9->vdev_id,
         VAR_7->addr);
  if (VAR_12)
   FUNC_11(VAR_8, "failed to remove AP self-peer on vdev %i: %d\n",
        VAR_9->vdev_id, VAR_12);

  FUNC_20(&VAR_8->data_lock);
  VAR_8->num_peers--;
  FUNC_21(&VAR_8->data_lock);
 }

 FUNC_20(&VAR_8->data_lock);
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_8->peer_map); VAR_13++) {
  VAR_10 = VAR_8->peer_map[VAR_13];
  if (!VAR_10)
   continue;

  if (VAR_10->vif == VAR_7) {
   FUNC_11(VAR_8, "found vif peer %pM entry on vdev %i after it was supposedly removed\n",
        VAR_7->addr, VAR_9->vdev_id);
   VAR_10->vif = ((void*)0);
  }
 }




 FUNC_4(VAR_9);
 FUNC_21(&VAR_8->data_lock);

 FUNC_7(VAR_8, VAR_9->vdev_id);
 FUNC_3(VAR_8, VAR_7->txq);

 if (VAR_7->type == VAR_2) {
  VAR_8->monitor_arvif = ((void*)0);
  VAR_12 = FUNC_6(VAR_8);
  if (VAR_12)
   FUNC_11(VAR_8, "failed to recalc monitor: %d\n", VAR_12);
 }

 VAR_12 = FUNC_2(VAR_8);
 if (VAR_12)
  FUNC_11(VAR_8, "failed to recalc tx power: %d\n", VAR_12);

 FUNC_20(&VAR_8->htt.tx_lock);
 FUNC_5(VAR_9);
 FUNC_21(&VAR_8->htt.tx_lock);

 FUNC_3(VAR_8, VAR_7->txq);

out:
 FUNC_19(&VAR_8->conf_mutex);
}
