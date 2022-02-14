
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_bss_conf {int bssid; int enable_beacon; } ;
struct ath10k_vif {int is_up; int tx_seq_no; int vdev_id; int bssid; scalar_t__ aid; struct ath10k* ar; } ;
struct ath10k {int data_lock; int conf_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ) ;
 int FUNC_1 (struct ath10k_vif*) ;
 int FUNC_2 (struct ath10k_vif*) ;
 int FUNC_3 (struct ath10k*,char*,int ,int) ;
 int FUNC_4 (struct ath10k*,int ) ;
 int FUNC_5 (struct ath10k*,int ,scalar_t__,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ath10k_vif *VAR_1,
         struct ieee80211_bss_conf *VAR_2)
{
 struct ath10k *VAR_3 = VAR_1->ar;
 int VAR_4 = 0;

 FUNC_7(&VAR_1->ar->conf_mutex);

 if (!VAR_2->enable_beacon) {
  VAR_4 = FUNC_4(VAR_3, VAR_1->vdev_id);
  if (VAR_4)
   FUNC_3(VAR_3, "failed to down vdev_id %i: %d\n",
        VAR_1->vdev_id, VAR_4);

  VAR_1->is_up = 0;

  FUNC_8(&VAR_1->ar->data_lock);
  FUNC_1(VAR_1);
  FUNC_9(&VAR_1->ar->data_lock);

  return;
 }

 VAR_1->tx_seq_no = 0x1000;

 VAR_1->aid = 0;
 FUNC_6(VAR_1->bssid, VAR_2->bssid);

 VAR_4 = FUNC_5(VAR_1->ar, VAR_1->vdev_id, VAR_1->aid,
     VAR_1->bssid);
 if (VAR_4) {
  FUNC_3(VAR_3, "failed to bring up vdev %d: %i\n",
       VAR_1->vdev_id, VAR_4);
  return;
 }

 VAR_1->is_up = 1;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4) {
  FUNC_3(VAR_3, "failed to fix hidden ssid for vdev %i, expect trouble: %d\n",
       VAR_1->vdev_id, VAR_4);
  return;
 }

 FUNC_0(VAR_3, VAR_0, "mac vdev %d up\n", VAR_1->vdev_id);
}
