
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct ccw_dev_id {int devno; int ssid; } ;
struct TYPE_2__ {scalar_t__ state; int onoff; struct ccw_dev_id dev_id; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ccw_device*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct ccw_device* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_4, void *VAR_5)
{
 struct ccw_device *VAR_6 = FUNC_8(VAR_4);
 struct ccw_dev_id *VAR_7 = &VAR_6->private->dev_id;

 FUNC_6(VAR_6->ccwlock);
 if (FUNC_4(VAR_7->ssid, VAR_7->devno) &&
     (VAR_6->private->state == VAR_1) &&
     (FUNC_1(&VAR_6->private->onoff, 0, 1) == 0)) {
  FUNC_0(3, "ccw: purging 0.%x.%04x\n", VAR_7->ssid,
         VAR_7->devno);
  FUNC_3(VAR_6, VAR_0);
  FUNC_2(&VAR_6->private->onoff, 0);
 }
 FUNC_7(VAR_6->ccwlock);

 if (FUNC_5(VAR_3))
  return -VAR_2;

 return 0;
}
