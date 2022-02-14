
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ dev_state; int device_lock; int dev; scalar_t__ reset_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct mei_device*) ;
 scalar_t__ FUNC_3 (struct mei_device*) ;
 int FUNC_4 (struct mei_device*) ;
 int FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct mei_device*) ;
 int FUNC_7 (struct mei_device*) ;
 int FUNC_8 (struct mei_device*) ;
 int FUNC_9 (struct mei_device*,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct mei_device *VAR_3)
{
 int VAR_4;

 FUNC_10(&VAR_3->device_lock);


 FUNC_2(VAR_3);

 FUNC_6(VAR_3);

 FUNC_0(VAR_3->dev, "reset in start the mei device.\n");

 VAR_3->reset_count = 0;
 do {
  FUNC_9(VAR_3, VAR_2);
  VAR_4 = FUNC_8(VAR_3);

  if (VAR_4 == -VAR_0 || VAR_3->dev_state == VAR_1) {
   FUNC_1(VAR_3->dev, "reset failed ret = %d", VAR_4);
   goto err;
  }
 } while (VAR_4);

 if (FUNC_3(VAR_3)) {
  FUNC_1(VAR_3->dev, "HBM haven't started");
  goto err;
 }

 if (!FUNC_5(VAR_3)) {
  FUNC_1(VAR_3->dev, "host is not ready.\n");
  goto err;
 }

 if (!FUNC_7(VAR_3)) {
  FUNC_1(VAR_3->dev, "ME is not ready.\n");
  goto err;
 }

 if (!FUNC_4(VAR_3)) {
  FUNC_0(VAR_3->dev, "MEI start failed.\n");
  goto err;
 }

 FUNC_0(VAR_3->dev, "link layer has been established.\n");

 FUNC_11(&VAR_3->device_lock);
 return 0;
err:
 FUNC_1(VAR_3->dev, "link layer initialization failed.\n");
 FUNC_9(VAR_3, VAR_1);
 FUNC_11(&VAR_3->device_lock);
 return -VAR_0;
}
