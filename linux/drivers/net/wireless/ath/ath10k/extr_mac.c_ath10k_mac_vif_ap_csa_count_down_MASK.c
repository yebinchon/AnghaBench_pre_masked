
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {int csa_active; } ;
struct ath10k_vif {scalar_t__ vdev_type; int is_up; struct ath10k* ar; struct ieee80211_vif* vif; } ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; int conf_mutex; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ath10k_vif*) ;
 int FUNC_2 (struct ath10k_vif*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 int FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (struct ieee80211_vif*) ;
 int FUNC_6 (struct ieee80211_vif*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct ath10k_vif *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->ar;
 struct ieee80211_vif *VAR_4 = VAR_2->vif;
 int VAR_5;

 FUNC_7(&VAR_2->ar->conf_mutex);

 if (FUNC_0(!FUNC_8(VAR_0, VAR_3->wmi.svc_map)))
  return;

 if (VAR_2->vdev_type != VAR_1)
  return;

 if (!VAR_4->csa_active)
  return;

 if (!VAR_2->is_up)
  return;

 if (!FUNC_5(VAR_4)) {
  FUNC_6(VAR_4);

  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5)
   FUNC_3(VAR_3, "failed to update bcn tmpl during csa: %d\n",
        VAR_5);

  VAR_5 = FUNC_2(VAR_2);
  if (VAR_5)
   FUNC_3(VAR_3, "failed to update prb tmpl during csa: %d\n",
        VAR_5);
 } else {
  FUNC_4(VAR_4);
 }
}
