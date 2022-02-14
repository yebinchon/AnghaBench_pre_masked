
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {long long monitor_vdev_id; long long free_vdev_map; int conf_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,long long) ;
 int FUNC_1 (struct ath10k*,char*,long long,int) ;
 int FUNC_2 (struct ath10k*,long long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_1)
{
 int VAR_2 = 0;

 FUNC_3(&VAR_1->conf_mutex);

 VAR_2 = FUNC_2(VAR_1, VAR_1->monitor_vdev_id);
 if (VAR_2) {
  FUNC_1(VAR_1, "failed to request wmi monitor vdev %i removal: %d\n",
       VAR_1->monitor_vdev_id, VAR_2);
  return VAR_2;
 }

 VAR_1->free_vdev_map |= 1LL << VAR_1->monitor_vdev_id;

 FUNC_0(VAR_1, VAR_0, "mac monitor vdev %d deleted\n",
     VAR_1->monitor_vdev_id);
 return VAR_2;
}
