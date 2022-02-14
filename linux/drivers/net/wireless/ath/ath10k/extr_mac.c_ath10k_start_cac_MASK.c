
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int monitor_vdev_id; int dev_flags; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_2)
{
 int VAR_3;

 FUNC_4(&VAR_2->conf_mutex);

 FUNC_5(VAR_0, &VAR_2->dev_flags);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_2, "failed to start monitor (cac): %d\n", VAR_3);
  FUNC_3(VAR_0, &VAR_2->dev_flags);
  return VAR_3;
 }

 FUNC_0(VAR_2, VAR_1, "mac cac start monitor vdev %d\n",
     VAR_2->monitor_vdev_id);

 return 0;
}
