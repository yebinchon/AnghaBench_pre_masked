
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct subchannel {int lock; int schid; } ;
struct TYPE_4__ {int parent; } ;
struct ccw_device {TYPE_3__* private; TYPE_1__ dev; } ;
typedef scalar_t__ addr_t ;
struct TYPE_5__ {int resuming; } ;
struct TYPE_6__ {scalar_t__ state; TYPE_2__ flags; int wait_q; int path_new_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct subchannel*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct subchannel*,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct ccw_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct subchannel* FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void FUNC_10(struct ccw_device *VAR_5)
{
 struct subchannel *VAR_6 = FUNC_8(VAR_5->dev.parent);

 FUNC_6(VAR_6->lock);
 if (FUNC_2(VAR_6->schid)) {
  FUNC_1(VAR_6, (u32)(addr_t)VAR_6);
  goto out_unlock;
 }




 VAR_5->private->flags.resuming = 1;
 VAR_5->private->path_new_mask = VAR_3;
 FUNC_3(VAR_6, VAR_4);
 FUNC_7(VAR_6->lock);
 FUNC_4();


 VAR_6 = FUNC_8(VAR_5->dev.parent);
 FUNC_6(VAR_6->lock);
 if (VAR_5->private->state != VAR_2 &&
     VAR_5->private->state != VAR_1)
  goto out_unlock;

 FUNC_0(VAR_5);
 FUNC_7(VAR_6->lock);
 FUNC_9(VAR_5->private->wait_q, FUNC_5(VAR_5) ||
     VAR_5->private->state == VAR_0);
 FUNC_6(VAR_6->lock);

out_unlock:
 VAR_5->private->flags.resuming = 0;
 FUNC_7(VAR_6->lock);
}
