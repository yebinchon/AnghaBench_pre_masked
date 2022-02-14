
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ dev; } ;
struct TYPE_6__ {int devno; int ssid; } ;
struct TYPE_5__ {TYPE_3__ dev_id; int iretry; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct subchannel*,int *) ;
 struct subchannel* FUNC_2 (int ) ;

int
FUNC_3(struct ccw_device *VAR_1)
{
 struct subchannel *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1->dev.parent);
 VAR_3 = FUNC_1(VAR_2, &VAR_1->private->iretry);

 if (VAR_3 == -VAR_0)
  FUNC_0(0, "0.%x.%04x: could not stop I/O\n",
         VAR_1->private->dev_id.ssid,
         VAR_1->private->dev_id.devno);

 return VAR_3;
}
