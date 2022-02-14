
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_sta_keepalive_arg {int enabled; int interval; int method; int vdev_id; } ;
struct ath10k_vif {scalar_t__ vdev_type; int vdev_id; struct ath10k* ar; } ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ath10k*,char*,int ,int) ;
 int FUNC_1 (struct ath10k*,struct wmi_sta_keepalive_arg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ath10k_vif *VAR_4)
{
 struct ath10k *VAR_5 = VAR_4->ar;
 struct wmi_sta_keepalive_arg VAR_6 = {};
 int VAR_7;

 FUNC_2(&VAR_4->ar->conf_mutex);

 if (VAR_4->vdev_type != VAR_3)
  return 0;

 if (!FUNC_3(VAR_0, VAR_5->wmi.svc_map))
  return 0;




 VAR_6.vdev_id = VAR_4->vdev_id;
 VAR_6.enabled = 1;
 VAR_6.method = VAR_2;
 VAR_6.interval = VAR_1;

 VAR_7 = FUNC_1(VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_5, "failed to submit keepalive on vdev %i: %d\n",
       VAR_4->vdev_id, VAR_7);
  return VAR_7;
 }

 return 0;
}
