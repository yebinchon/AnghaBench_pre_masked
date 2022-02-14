
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int owner; } ;
struct mei_device {TYPE_2__ cdev; int minor; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_5__ {int owner; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (struct device*,char*,int ,int ) ;
 int FUNC_8 (struct device*) ;
 struct device* FUNC_9 (int ,struct device*,int,struct mei_device*,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_10 (struct mei_device*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (struct mei_device*) ;
 int FUNC_12 (struct mei_device*) ;

int FUNC_13(struct mei_device *VAR_4, struct device *VAR_5)
{
 struct device *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_12(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_8 = FUNC_2(FUNC_1(VAR_1), VAR_4->minor);
 FUNC_6(&VAR_4->cdev, &VAR_2);
 VAR_4->cdev.owner = VAR_5->driver->owner;


 VAR_7 = FUNC_4(&VAR_4->cdev, VAR_8, 1);
 if (VAR_7) {
  FUNC_7(VAR_5, "unable to add device %d:%d\n",
   FUNC_1(VAR_1), VAR_4->minor);
  goto err_dev_add;
 }

 VAR_6 = FUNC_9(VAR_0, VAR_5, VAR_8,
        VAR_4, VAR_3,
        "mei%d", VAR_4->minor);

 if (FUNC_0(VAR_6)) {
  FUNC_7(VAR_5, "unable to create device %d:%d\n",
   FUNC_1(VAR_1), VAR_4->minor);
  VAR_7 = FUNC_3(VAR_6);
  goto err_dev_create;
 }

 FUNC_10(VAR_4, FUNC_8(VAR_6));

 return 0;

err_dev_create:
 FUNC_5(&VAR_4->cdev);
err_dev_add:
 FUNC_11(VAR_4);
 return VAR_7;
}
