
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_chan_def {int dummy; } ;
struct ath10k_vif {int vdev_id; int bssid; int aid; struct ath10k* ar; int vif; int is_up; int is_started; } ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k_vif*) ;
 int FUNC_2 (struct ath10k_vif*) ;
 int FUNC_3 (int ,struct cfg80211_chan_def*) ;
 int FUNC_4 (struct ath10k_vif*,struct cfg80211_chan_def*) ;
 int FUNC_5 (struct ath10k*,char*,int,...) ;
 int FUNC_6 (struct ath10k*,int ) ;
 int FUNC_7 (struct ath10k*,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct ath10k_vif *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->ar;
 struct cfg80211_chan_def VAR_4;
 int VAR_5;
 if (!FUNC_8(VAR_1, VAR_3->wmi.svc_map))
  return 0;

 if (FUNC_0(!VAR_2->is_started))
  return -VAR_0;

 if (FUNC_0(!VAR_2->is_up))
  return -VAR_0;

 if (FUNC_0(FUNC_3(VAR_2->vif, &VAR_4)))
  return -VAR_0;

 VAR_5 = FUNC_6(VAR_3, VAR_2->vdev_id);
 if (VAR_5) {
  FUNC_5(VAR_3, "failed to bring down ap vdev %i: %d\n",
       VAR_2->vdev_id, VAR_5);
  return VAR_5;
 }





 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5) {
  FUNC_5(VAR_3, "failed to update beacon template: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5) {
  FUNC_5(VAR_3, "failed to update presp template: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_2, &VAR_4);
 if (VAR_5) {
  FUNC_5(VAR_3, "failed to restart ap vdev %i: %d\n",
       VAR_2->vdev_id, VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_7(VAR_2->ar, VAR_2->vdev_id, VAR_2->aid,
     VAR_2->bssid);
 if (VAR_5) {
  FUNC_5(VAR_3, "failed to bring up ap vdev %i: %d\n",
       VAR_2->vdev_id, VAR_5);
  return VAR_5;
 }

 return 0;
}
