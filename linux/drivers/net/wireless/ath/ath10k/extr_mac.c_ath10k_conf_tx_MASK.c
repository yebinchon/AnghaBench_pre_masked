
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct wmi_wmm_params_arg {int txop; int aifs; int cwmax; int cwmin; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_tx_queue_params {int txop; int uapsd; int aifs; int cw_max; int cw_min; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_7__ {struct wmi_wmm_params_arg ac_bk; struct wmi_wmm_params_arg ac_be; struct wmi_wmm_params_arg ac_vi; struct wmi_wmm_params_arg ac_vo; } ;
struct ath10k_vif {TYPE_3__ wmm_params; int vdev_id; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct ath10k {int conf_mutex; TYPE_2__ wmi; } ;
struct TYPE_5__ {scalar_t__ gen_vdev_wmm_conf; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,struct ieee80211_vif*,int ,int ) ;
 int FUNC_2 (struct ath10k*,char*,int,...) ;
 int FUNC_3 (struct ath10k*,TYPE_3__*) ;
 int FUNC_4 (struct ath10k*,int ,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_1,
     struct ieee80211_vif *VAR_2, u16 VAR_3,
     const struct ieee80211_tx_queue_params *VAR_4)
{
 struct ath10k *VAR_5 = VAR_1->priv;
 struct ath10k_vif *VAR_6 = (void *)VAR_2->drv_priv;
 struct wmi_wmm_params_arg *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_5(&VAR_5->conf_mutex);

 switch (VAR_3) {
 case 128:
  VAR_7 = &VAR_6->wmm_params.ac_vo;
  break;
 case 129:
  VAR_7 = &VAR_6->wmm_params.ac_vi;
  break;
 case 131:
  VAR_7 = &VAR_6->wmm_params.ac_be;
  break;
 case 130:
  VAR_7 = &VAR_6->wmm_params.ac_bk;
  break;
 }

 if (FUNC_0(!VAR_7)) {
  VAR_8 = -VAR_0;
  goto exit;
 }

 VAR_7->cwmin = VAR_4->cw_min;
 VAR_7->cwmax = VAR_4->cw_max;
 VAR_7->aifs = VAR_4->aifs;






 VAR_7->txop = VAR_4->txop * 32;

 if (VAR_5->wmi.ops->gen_vdev_wmm_conf) {
  VAR_8 = FUNC_4(VAR_5, VAR_6->vdev_id,
            &VAR_6->wmm_params);
  if (VAR_8) {
   FUNC_2(VAR_5, "failed to set vdev wmm params on vdev %i: %d\n",
        VAR_6->vdev_id, VAR_8);
   goto exit;
  }
 } else {



  VAR_8 = FUNC_3(VAR_5, &VAR_6->wmm_params);
  if (VAR_8) {
   FUNC_2(VAR_5, "failed to set wmm params: %d\n", VAR_8);
   goto exit;
  }
 }

 VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4->uapsd);
 if (VAR_8)
  FUNC_2(VAR_5, "failed to set sta uapsd: %d\n", VAR_8);

exit:
 FUNC_6(&VAR_5->conf_mutex);
 return VAR_8;
}
