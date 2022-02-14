
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int cdev_sysfs_created; int dev; int cdev; int dev_ctrl; int cdev_ctrl; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct hl_device*) ;

__attribute__((used)) static int FUNC_4(struct hl_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->cdev, VAR_0->dev);
 if (VAR_1) {
  FUNC_2(VAR_0->dev,
   "failed to add a char device to the system\n");
  return VAR_1;
 }

 VAR_1 = FUNC_0(&VAR_0->cdev_ctrl, VAR_0->dev_ctrl);
 if (VAR_1) {
  FUNC_2(VAR_0->dev,
   "failed to add a control char device to the system\n");
  goto delete_cdev_device;
 }


 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to initialize sysfs\n");
  goto delete_ctrl_cdev_device;
 }

 VAR_0->cdev_sysfs_created = 1;

 return 0;

delete_ctrl_cdev_device:
 FUNC_1(&VAR_0->cdev_ctrl, VAR_0->dev_ctrl);
delete_cdev_device:
 FUNC_1(&VAR_0->cdev, VAR_0->dev);
 return VAR_1;
}
