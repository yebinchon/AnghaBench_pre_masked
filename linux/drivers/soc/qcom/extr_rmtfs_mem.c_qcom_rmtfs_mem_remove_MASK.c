
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_scm_vmperm {int perm; int vmid; } ;
struct qcom_rmtfs_mem {int dev; int cdev; scalar_t__ perms; int size; int addr; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 struct qcom_rmtfs_mem* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,scalar_t__*,struct qcom_scm_vmperm*,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct qcom_rmtfs_mem *VAR_3 = FUNC_1(&VAR_2->dev);
 struct qcom_scm_vmperm VAR_4;

 if (VAR_3->perms) {
  VAR_4.vmid = VAR_1;
  VAR_4.perm = VAR_0;

  FUNC_3(VAR_3->addr, VAR_3->size,
        &VAR_3->perms, &VAR_4, 1);
 }

 FUNC_0(&VAR_3->cdev, &VAR_3->dev);
 FUNC_2(&VAR_3->dev);

 return 0;
}
