
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {long long free_vdev_map; int monitor_vdev_id; int mac_addr; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (long long) ;
 int FUNC_1 (struct ath10k*,int ,char*,long long) ;
 int FUNC_2 (struct ath10k*,char*,...) ;
 int FUNC_3 (struct ath10k*,int,int ,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 FUNC_4(&VAR_3->conf_mutex);

 if (VAR_3->free_vdev_map == 0) {
  FUNC_2(VAR_3, "failed to find free vdev id for monitor vdev\n");
  return -VAR_1;
 }

 VAR_4 = FUNC_0(VAR_3->free_vdev_map);

 VAR_3->monitor_vdev_id = VAR_4;

 VAR_5 = FUNC_3(VAR_3, VAR_3->monitor_vdev_id,
         VAR_2,
         0, VAR_3->mac_addr);
 if (VAR_5) {
  FUNC_2(VAR_3, "failed to request monitor vdev %i creation: %d\n",
       VAR_3->monitor_vdev_id, VAR_5);
  return VAR_5;
 }

 VAR_3->free_vdev_map &= ~(1LL << VAR_3->monitor_vdev_id);
 FUNC_1(VAR_3, VAR_0, "mac monitor vdev %d created\n",
     VAR_3->monitor_vdev_id);

 return 0;
}
