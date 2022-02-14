
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct subchannel {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct ccw_device {TYPE_2__* private; TYPE_1__ dev; } ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
typedef scalar_t__ addr_t ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 scalar_t__ FUNC_1 (struct subchannel*,int ) ;
 struct subchannel* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ccw_device *VAR_1, enum dev_event VAR_2)
{
 struct subchannel *VAR_3;

 VAR_3 = FUNC_2(VAR_1->dev.parent);
 if (FUNC_1(VAR_3, (u32)(addr_t)VAR_3) != 0)

  return;
 VAR_1->private->state = VAR_0;
 FUNC_0(VAR_1);
}
