
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct subchannel {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct ccw_device {TYPE_1__* private; TYPE_2__ dev; } ;
typedef scalar_t__ addr_t ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct subchannel*,int ) ;
 int FUNC_2 (struct ccw_device*,int ) ;
 struct subchannel* FUNC_3 (int ) ;

int
FUNC_4(struct ccw_device *VAR_6)
{
 struct subchannel *VAR_7;
 int VAR_8;

 if ((VAR_6->private->state != VAR_2) &&
     (VAR_6->private->state != VAR_1))
  return -VAR_4;
 VAR_7 = FUNC_3(VAR_6->dev.parent);
 VAR_8 = FUNC_1(VAR_7, (u32)(addr_t)VAR_7);
 if (VAR_8 != 0) {

  if (VAR_8 == -VAR_5)
   FUNC_2(VAR_6, VAR_0);
  return VAR_8;
 }

 VAR_6->private->state = VAR_3;
 FUNC_0(VAR_6);
 return 0;
}
