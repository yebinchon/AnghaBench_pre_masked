
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ena; } ;
struct TYPE_5__ {TYPE_1__ pmcw; } ;
struct subchannel {int lock; TYPE_2__ schib; int schid; } ;
struct ccw_device {TYPE_3__* private; int (* handler ) (struct ccw_device*,int ,int ) ;} ;
struct TYPE_6__ {scalar_t__ state; int iretry; int wait_q; int intparm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*,int) ;
 int FUNC_3 (struct subchannel*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct ccw_device* FUNC_5 (struct subchannel*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ccw_device*,int ,int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void FUNC_10(struct subchannel *VAR_4)
{
 struct ccw_device *VAR_5;
 int VAR_6;

 FUNC_6(VAR_4->lock);
 VAR_5 = FUNC_5(VAR_4);
 if (FUNC_4(VAR_4->schid))
  goto out_unlock;
 if (!VAR_4->schib.pmcw.ena)
  goto out_unlock;
 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 != -VAR_1)
  goto out_unlock;
 if (VAR_5->handler)
  VAR_5->handler(VAR_5, VAR_5->private->intparm, FUNC_0(-VAR_2));
 while (VAR_6 == -VAR_1) {
  VAR_5->private->state = VAR_0;
  VAR_5->private->iretry = 255;
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 == -VAR_1) {
   FUNC_2(VAR_5, VAR_3/10);
   FUNC_7(VAR_4->lock);
   FUNC_9(VAR_5->private->wait_q,
       VAR_5->private->state != VAR_0);
   FUNC_6(VAR_4->lock);
  }
  VAR_6 = FUNC_3(VAR_4);
 }
out_unlock:
 FUNC_7(VAR_4->lock);
}
