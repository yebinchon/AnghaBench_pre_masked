
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct wmi_peer_assoc_complete_arg {int peer_num_spatial_streams; int peer_caps; int peer_listen_intval; int peer_flags; int peer_aid; int vdev_id; int addr; } ;
struct TYPE_8__ {int assoc_capability; int aid; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_4__ bss_conf; scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; int aid; } ;
struct ath10k_vif {TYPE_3__* ar; int vdev_id; } ;
struct ath10k {int conf_mutex; } ;
struct TYPE_6__ {TYPE_1__* peer_flags; } ;
struct TYPE_7__ {TYPE_2__ wmi; } ;
struct TYPE_5__ {int auth; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath10k*,struct ieee80211_vif*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ath10k *VAR_1,
          struct ieee80211_vif *VAR_2,
          struct ieee80211_sta *VAR_3,
          struct wmi_peer_assoc_complete_arg *VAR_4)
{
 struct ath10k_vif *VAR_5 = (void *)VAR_2->drv_priv;
 u32 VAR_6;

 FUNC_2(&VAR_1->conf_mutex);

 if (VAR_2->type == VAR_0)
  VAR_6 = VAR_2->bss_conf.aid;
 else
  VAR_6 = VAR_3->aid;

 FUNC_1(VAR_4->addr, VAR_3->addr);
 VAR_4->vdev_id = VAR_5->vdev_id;
 VAR_4->peer_aid = VAR_6;
 VAR_4->peer_flags |= VAR_5->ar->wmi.peer_flags->auth;
 VAR_4->peer_listen_intval = FUNC_0(VAR_1, VAR_2);
 VAR_4->peer_num_spatial_streams = 1;
 VAR_4->peer_caps = VAR_2->bss_conf.assoc_capability;
}
