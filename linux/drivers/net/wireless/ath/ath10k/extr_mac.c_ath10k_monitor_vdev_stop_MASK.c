
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int monitor_vdev_id; int vdev_delete_done; int vdev_setup_done; int conf_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int ,int) ;
 int FUNC_3 (struct ath10k*,int ) ;
 int FUNC_4 (struct ath10k*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_1)
{
 int VAR_2 = 0;

 FUNC_5(&VAR_1->conf_mutex);

 VAR_2 = FUNC_3(VAR_1, VAR_1->monitor_vdev_id);
 if (VAR_2)
  FUNC_2(VAR_1, "failed to put down monitor vdev %i: %d\n",
       VAR_1->monitor_vdev_id, VAR_2);

 FUNC_6(&VAR_1->vdev_setup_done);
 FUNC_6(&VAR_1->vdev_delete_done);

 VAR_2 = FUNC_4(VAR_1, VAR_1->monitor_vdev_id);
 if (VAR_2)
  FUNC_2(VAR_1, "failed to to request monitor vdev %i stop: %d\n",
       VAR_1->monitor_vdev_id, VAR_2);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_2(VAR_1, "failed to synchronize monitor vdev %i stop: %d\n",
       VAR_1->monitor_vdev_id, VAR_2);

 FUNC_0(VAR_1, VAR_0, "mac monitor vdev %i stopped\n",
     VAR_1->monitor_vdev_id);
 return VAR_2;
}
