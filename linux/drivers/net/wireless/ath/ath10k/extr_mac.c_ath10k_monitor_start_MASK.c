
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int monitor_started; int monitor_vdev_id; int conf_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,int ) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_1)
{
 int VAR_2;

 FUNC_5(&VAR_1->conf_mutex);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_4(VAR_1, "failed to create monitor vdev: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1, VAR_1->monitor_vdev_id);
 if (VAR_2) {
  FUNC_4(VAR_1, "failed to start monitor vdev: %d\n", VAR_2);
  FUNC_2(VAR_1);
  return VAR_2;
 }

 VAR_1->monitor_started = 1;
 FUNC_0(VAR_1, VAR_0, "mac monitor started\n");

 return 0;
}
