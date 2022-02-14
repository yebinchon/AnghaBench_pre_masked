
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_vif {int vdev_id; struct ath10k* ar; } ;
struct ath10k {scalar_t__ num_started_vdevs; int vdev_delete_done; int vdev_setup_done; int conf_mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,int ,int) ;
 int FUNC_4 (struct ath10k*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ath10k_vif *VAR_0)
{
 struct ath10k *VAR_1 = VAR_0->ar;
 int VAR_2;

 FUNC_5(&VAR_1->conf_mutex);

 FUNC_6(&VAR_1->vdev_setup_done);
 FUNC_6(&VAR_1->vdev_delete_done);

 VAR_2 = FUNC_4(VAR_1, VAR_0->vdev_id);
 if (VAR_2) {
  FUNC_3(VAR_1, "failed to stop WMI vdev %i: %d\n",
       VAR_0->vdev_id, VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_1, "failed to synchronize setup for vdev %i: %d\n",
       VAR_0->vdev_id, VAR_2);
  return VAR_2;
 }

 FUNC_0(VAR_1->num_started_vdevs == 0);

 if (VAR_1->num_started_vdevs != 0) {
  VAR_1->num_started_vdevs--;
  FUNC_1(VAR_1);
 }

 return VAR_2;
}
