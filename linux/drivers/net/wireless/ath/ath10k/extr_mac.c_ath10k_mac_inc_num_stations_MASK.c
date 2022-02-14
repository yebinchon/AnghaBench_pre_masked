
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sta {int tdls; } ;
struct ath10k_vif {scalar_t__ vdev_type; struct ath10k* ar; } ;
struct ath10k {scalar_t__ num_stations; scalar_t__ max_num_stations; int conf_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct ath10k_vif *VAR_2,
           struct ieee80211_sta *VAR_3)
{
 struct ath10k *VAR_4 = VAR_2->ar;

 FUNC_0(&VAR_4->conf_mutex);

 if (VAR_2->vdev_type == VAR_1 && !VAR_3->tdls)
  return 0;

 if (VAR_4->num_stations >= VAR_4->max_num_stations)
  return -VAR_0;

 VAR_4->num_stations++;

 return 0;
}
