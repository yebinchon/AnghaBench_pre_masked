
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sta {int tdls; } ;
struct ath10k_vif {scalar_t__ vdev_type; struct ath10k* ar; } ;
struct ath10k {int num_stations; int conf_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ath10k_vif *VAR_1,
     struct ieee80211_sta *VAR_2)
{
 struct ath10k *VAR_3 = VAR_1->ar;

 FUNC_0(&VAR_3->conf_mutex);

 if (VAR_1->vdev_type == VAR_0 && !VAR_2->tdls)
  return;

 VAR_3->num_stations--;
}
