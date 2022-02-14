
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wmi_peer_assoc_complete_arg {int peer_flags; int peer_rate_caps; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; int wme; int uapsd_queues; } ;
struct ath10k_vif {int vdev_type; TYPE_3__* ar; } ;
struct ath10k {int dummy; } ;
struct TYPE_5__ {TYPE_1__* peer_flags; } ;
struct TYPE_6__ {TYPE_2__ wmi; } ;
struct TYPE_4__ {int qos; int apsd; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct ath10k*,int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ath10k *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct ieee80211_sta *VAR_4,
        struct wmi_peer_assoc_complete_arg *VAR_5)
{
 struct ath10k_vif *VAR_6 = (void *)VAR_3->drv_priv;

 switch (VAR_6->vdev_type) {
 case 130:
  if (VAR_4->wme)
   VAR_5->peer_flags |= VAR_6->ar->wmi.peer_flags->qos;

  if (VAR_4->wme && VAR_4->uapsd_queues) {
   VAR_5->peer_flags |= VAR_6->ar->wmi.peer_flags->apsd;
   VAR_5->peer_rate_caps |= VAR_1;
  }
  break;
 case 128:
  if (VAR_4->wme)
   VAR_5->peer_flags |= VAR_6->ar->wmi.peer_flags->qos;
  break;
 case 129:
  if (VAR_4->wme)
   VAR_5->peer_flags |= VAR_6->ar->wmi.peer_flags->qos;
  break;
 default:
  break;
 }

 FUNC_0(VAR_2, VAR_0, "mac peer %pM qos %d\n",
     VAR_4->addr, !!(VAR_5->peer_flags &
     VAR_6->ar->wmi.peer_flags->qos));
}
