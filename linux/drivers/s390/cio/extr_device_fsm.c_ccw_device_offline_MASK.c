
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int scsw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct TYPE_5__ {int parent; } ;
struct ccw_device {TYPE_4__* private; TYPE_1__ dev; } ;
struct TYPE_7__ {int pgroup; scalar_t__ donotify; } ;
struct TYPE_8__ {scalar_t__ state; TYPE_3__ flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct ccw_device*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ccw_device*) ;
 scalar_t__ FUNC_3 (struct subchannel*) ;
 scalar_t__ FUNC_4 (int *) ;
 struct subchannel* FUNC_5 (int ) ;

int
FUNC_6(struct ccw_device *VAR_9)
{
 struct subchannel *VAR_10;


 if (VAR_9->private->state == VAR_2 ||
     VAR_9->private->state == VAR_3) {
  VAR_9->private->flags.donotify = 0;
  FUNC_1(VAR_9, VAR_3);
  return 0;
 }
 if (VAR_9->private->state == VAR_0) {
  FUNC_1(VAR_9, VAR_0);
  return 0;
 }
 if (FUNC_2(VAR_9)) {
  FUNC_1(VAR_9, VAR_4);
  return 0;
 }
 VAR_10 = FUNC_5(VAR_9->dev.parent);
 if (FUNC_3(VAR_10))
  return -VAR_8;
 if (FUNC_4(&VAR_10->schib.scsw) != 0)
  return -VAR_6;
 if (VAR_9->private->state != VAR_5)
  return -VAR_7;

 if (!VAR_9->private->flags.pgroup) {

  FUNC_1(VAR_9, VAR_4);
  return 0;
 }

 VAR_9->private->state = VAR_1;
 FUNC_0(VAR_9);
 return 0;
}
