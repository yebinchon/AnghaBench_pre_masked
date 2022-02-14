
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct device {int dummy; } ;
struct ccw_driver {int (* remove ) (struct ccw_device*) ;} ;
struct TYPE_6__ {int parent; } ;
struct ccw_device {int ccwlock; TYPE_3__ dev; TYPE_2__* private; struct ccw_driver* drv; scalar_t__ online; } ;
struct TYPE_4__ {int devno; int ssid; } ;
struct TYPE_5__ {int int_class; TYPE_1__ dev_id; int wait_q; } ;


 int FUNC_0 (int ,char*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct ccw_device*,int ) ;
 int FUNC_4 (struct ccw_device*) ;
 int FUNC_5 (struct subchannel*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ccw_device*) ;
 struct ccw_device* FUNC_10 (struct device*) ;
 struct subchannel* FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_1)
{
 struct ccw_device *VAR_2 = FUNC_10(VAR_1);
 struct ccw_driver *VAR_3 = VAR_2->drv;
 struct subchannel *VAR_4;
 int VAR_5;

 if (VAR_3->remove)
  VAR_3->remove(VAR_2);

 FUNC_7(VAR_2->ccwlock);
 if (VAR_2->online) {
  VAR_2->online = 0;
  VAR_5 = FUNC_2(VAR_2);
  FUNC_8(VAR_2->ccwlock);
  if (VAR_5 == 0)
   FUNC_12(VAR_2->private->wait_q,
       FUNC_4(VAR_2));
  else
   FUNC_0(0, "ccw_device_offline returned %d, "
          "device 0.%x.%04x\n",
          VAR_5, VAR_2->private->dev_id.ssid,
          VAR_2->private->dev_id.devno);

  FUNC_6(&VAR_2->dev);
  FUNC_7(VAR_2->ccwlock);
 }
 FUNC_3(VAR_2, 0);
 VAR_2->drv = ((void*)0);
 VAR_2->private->int_class = VAR_0;
 VAR_4 = FUNC_11(VAR_2->dev.parent);
 FUNC_8(VAR_2->ccwlock);
 FUNC_5(VAR_4);
 FUNC_1(VAR_2);

 return 0;
}
