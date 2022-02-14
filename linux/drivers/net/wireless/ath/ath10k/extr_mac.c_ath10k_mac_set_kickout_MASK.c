
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_vif {int vdev_id; struct ath10k* ar; } ;
struct TYPE_6__ {TYPE_2__* vdev_param; TYPE_1__* pdev_param; } ;
struct ath10k {TYPE_3__ wmi; } ;
struct TYPE_5__ {int ap_keepalive_max_unresponsive_time_secs; int ap_keepalive_max_idle_inactive_time_secs; int ap_keepalive_min_idle_inactive_time_secs; } ;
struct TYPE_4__ {int sta_kickout_th; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,char*,int ,int) ;
 int FUNC_1 (struct ath10k*,int ,int ) ;
 int FUNC_2 (struct ath10k*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ath10k_vif *VAR_4)
{
 struct ath10k *VAR_5 = VAR_4->ar;
 u32 VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->wmi.pdev_param->sta_kickout_th;
 VAR_7 = FUNC_1(VAR_5, VAR_6,
     VAR_3);
 if (VAR_7) {
  FUNC_0(VAR_5, "failed to set kickout threshold on vdev %i: %d\n",
       VAR_4->vdev_id, VAR_7);
  return VAR_7;
 }

 VAR_6 = VAR_5->wmi.vdev_param->ap_keepalive_min_idle_inactive_time_secs;
 VAR_7 = FUNC_2(VAR_5, VAR_4->vdev_id, VAR_6,
     VAR_2);
 if (VAR_7) {
  FUNC_0(VAR_5, "failed to set keepalive minimum idle time on vdev %i: %d\n",
       VAR_4->vdev_id, VAR_7);
  return VAR_7;
 }

 VAR_6 = VAR_5->wmi.vdev_param->ap_keepalive_max_idle_inactive_time_secs;
 VAR_7 = FUNC_2(VAR_5, VAR_4->vdev_id, VAR_6,
     VAR_0);
 if (VAR_7) {
  FUNC_0(VAR_5, "failed to set keepalive maximum idle time on vdev %i: %d\n",
       VAR_4->vdev_id, VAR_7);
  return VAR_7;
 }

 VAR_6 = VAR_5->wmi.vdev_param->ap_keepalive_max_unresponsive_time_secs;
 VAR_7 = FUNC_2(VAR_5, VAR_4->vdev_id, VAR_6,
     VAR_1);
 if (VAR_7) {
  FUNC_0(VAR_5, "failed to set keepalive maximum unresponsive time on vdev %i: %d\n",
       VAR_4->vdev_id, VAR_7);
  return VAR_7;
 }

 return 0;
}
