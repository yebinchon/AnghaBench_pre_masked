
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; int devt; } ;
struct tee_device {int flags; int cdev; TYPE_1__ dev; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;
 int VAR_2 ;

int FUNC_8(struct tee_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->flags & VAR_1) {
  FUNC_4(&VAR_3->dev, "attempt to register twice\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_2(&VAR_3->cdev, VAR_3->dev.devt, 1);
 if (VAR_4) {
  FUNC_4(&VAR_3->dev,
   "unable to cdev_add() %s, major %d, minor %d, err=%d\n",
   VAR_3->name, FUNC_0(VAR_3->dev.devt),
   FUNC_1(VAR_3->dev.devt), VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_5(&VAR_3->dev);
 if (VAR_4) {
  FUNC_4(&VAR_3->dev,
   "unable to device_add() %s, major %d, minor %d, err=%d\n",
   VAR_3->name, FUNC_0(VAR_3->dev.devt),
   FUNC_1(VAR_3->dev.devt), VAR_4);
  goto err_device_add;
 }

 VAR_4 = FUNC_7(&VAR_3->dev.kobj, &VAR_2);
 if (VAR_4) {
  FUNC_4(&VAR_3->dev,
   "failed to create sysfs attributes, err=%d\n", VAR_4);
  goto err_sysfs_create_group;
 }

 VAR_3->flags |= VAR_1;
 return 0;

err_sysfs_create_group:
 FUNC_6(&VAR_3->dev);
err_device_add:
 FUNC_3(&VAR_3->cdev);
 return VAR_4;
}
