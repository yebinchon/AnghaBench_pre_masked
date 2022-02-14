
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct ccw_request {int cancel; scalar_t__ done; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ dev; } ;
struct TYPE_4__ {struct ccw_request req; } ;


 int FUNC_0 (struct ccw_device*,int) ;
 int FUNC_1 (struct subchannel*) ;
 struct subchannel* FUNC_2 (int ) ;

int FUNC_3(struct ccw_device *VAR_0)
{
 struct subchannel *VAR_1 = FUNC_2(VAR_0->dev.parent);
 struct ccw_request *VAR_2 = &VAR_0->private->req;
 int VAR_3;

 if (VAR_2->done)
  return 1;
 VAR_2->cancel = 1;
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  FUNC_0(VAR_0, VAR_3);
 return 0;
}
