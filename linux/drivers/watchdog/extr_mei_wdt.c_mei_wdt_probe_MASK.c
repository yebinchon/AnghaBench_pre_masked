
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_wdt {int resp_required; struct mei_cl_device* cldev; int unregister; int response; int reg_lock; int state; int timeout; } ;
struct mei_cl_device_id {int dummy; } ;
struct mei_cl_device {int dev; } ;
struct TYPE_2__ {int firmware_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mei_wdt*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mei_wdt*) ;
 struct mei_wdt* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mei_cl_device*) ;
 int FUNC_7 (struct mei_cl_device*) ;
 int FUNC_8 (struct mei_cl_device*,int ) ;
 int FUNC_9 (struct mei_cl_device*,int ) ;
 int FUNC_10 (struct mei_cl_device*,struct mei_wdt*) ;
 int FUNC_11 (struct mei_cl_device*) ;
 int VAR_5 ;
 int FUNC_12 (struct mei_wdt*) ;
 int FUNC_13 (struct mei_wdt*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int *) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static int FUNC_15(struct mei_cl_device *VAR_9,
    const struct mei_cl_device_id *VAR_10)
{
 struct mei_wdt *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(sizeof(struct mei_wdt), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->timeout = VAR_3;
 VAR_11->state = VAR_4;
 VAR_11->cldev = VAR_9;
 VAR_11->resp_required = FUNC_11(VAR_9) > 0x1;
 FUNC_14(&VAR_11->reg_lock);
 FUNC_3(&VAR_11->response);
 FUNC_0(&VAR_11->unregister, VAR_7);

 FUNC_10(VAR_9, VAR_11);

 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_9->dev, "Could not enable cl device\n");
  goto err_out;
 }

 VAR_12 = FUNC_9(VAR_11->cldev, VAR_6);
 if (VAR_12) {
  FUNC_2(&VAR_9->dev, "Could not reg rx event ret=%d\n", VAR_12);
  goto err_disable;
 }

 VAR_12 = FUNC_8(VAR_11->cldev, VAR_5);


 if (VAR_12 && VAR_12 != -VAR_1) {
  FUNC_2(&VAR_9->dev, "Could not reg notif event ret=%d\n", VAR_12);
  goto err_disable;
 }

 VAR_8.firmware_version = FUNC_11(VAR_9);

 if (VAR_11->resp_required)
  VAR_12 = FUNC_12(VAR_11);
 else
  VAR_12 = FUNC_13(VAR_11);

 if (VAR_12)
  goto err_disable;

 FUNC_1(VAR_11);

 return 0;

err_disable:
 FUNC_6(VAR_9);

err_out:
 FUNC_4(VAR_11);

 return VAR_12;
}
