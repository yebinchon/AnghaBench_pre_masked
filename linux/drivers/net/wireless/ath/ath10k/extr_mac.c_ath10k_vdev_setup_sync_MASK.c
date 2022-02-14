
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int last_wmi_vdev_start_status; int vdev_setup_done; int dev_flags; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 unsigned long FUNC_2 (int *,int ) ;

__attribute__((used)) static inline int FUNC_3(struct ath10k *VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(&VAR_4->conf_mutex);

 if (FUNC_1(VAR_0, &VAR_4->dev_flags))
  return -VAR_2;

 VAR_5 = FUNC_2(&VAR_4->vdev_setup_done,
      VAR_1);
 if (VAR_5 == 0)
  return -VAR_3;

 return VAR_4->last_wmi_vdev_start_status;
}
