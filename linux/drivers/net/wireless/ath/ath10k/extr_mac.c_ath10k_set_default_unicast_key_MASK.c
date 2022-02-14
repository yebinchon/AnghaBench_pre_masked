
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k_vif {int def_wep_key_idx; TYPE_3__* ar; int vdev_id; } ;
struct ath10k {int dummy; } ;
struct TYPE_5__ {TYPE_1__* vdev_param; } ;
struct TYPE_6__ {scalar_t__ state; int conf_mutex; TYPE_2__ wmi; } ;
struct TYPE_4__ {int def_keyid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int) ;
 int FUNC_1 (struct ath10k*,char*,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_2,
        struct ieee80211_vif *VAR_3,
        int VAR_4)
{
 struct ath10k *VAR_5 = VAR_2->priv;
 struct ath10k_vif *VAR_6 = (void *)VAR_3->drv_priv;
 int VAR_7;

 FUNC_3(&VAR_6->ar->conf_mutex);

 if (VAR_6->ar->state != VAR_1)
  goto unlock;

 FUNC_0(VAR_5, VAR_0, "mac vdev %d set keyidx %d\n",
     VAR_6->vdev_id, VAR_4);

 VAR_7 = FUNC_2(VAR_6->ar,
     VAR_6->vdev_id,
     VAR_6->ar->wmi.vdev_param->def_keyid,
     VAR_4);

 if (VAR_7) {
  FUNC_1(VAR_5, "failed to update wep key index for vdev %d: %d\n",
       VAR_6->vdev_id,
       VAR_7);
  goto unlock;
 }

 VAR_6->def_wep_key_idx = VAR_4;

unlock:
 FUNC_4(&VAR_6->ar->conf_mutex);
}
