
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dev; int cdev; int dev_ctrl; int cdev_ctrl; int cdev_sysfs_created; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hl_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hl_device *VAR_0)
{

 if (!VAR_0->cdev_sysfs_created) {
  FUNC_2(VAR_0->dev_ctrl);
  FUNC_2(VAR_0->dev);
  return;
 }

 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->cdev_ctrl, VAR_0->dev_ctrl);
 FUNC_0(&VAR_0->cdev, VAR_0->dev);
}
