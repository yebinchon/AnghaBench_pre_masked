
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pam; } ;
struct TYPE_9__ {TYPE_2__ pmcw; } ;
struct subchannel {int lpm; int opm; TYPE_3__ schib; } ;
struct TYPE_10__ {int cu_type; } ;
struct TYPE_7__ {int parent; } ;
struct ccw_device {TYPE_6__* private; TYPE_4__ id; int online; TYPE_1__ dev; } ;
struct TYPE_11__ {int recog_done; int donotify; scalar_t__ resuming; } ;
struct TYPE_12__ {int state; int wait_q; TYPE_5__ flags; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct subchannel*,int) ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (struct ccw_device*,int ) ;
 int FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct ccw_device*) ;
 scalar_t__ FUNC_5 (struct subchannel*) ;
 scalar_t__ FUNC_6 (struct subchannel*) ;
 int FUNC_7 (struct ccw_device*) ;
 struct subchannel* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct ccw_device *VAR_3, int VAR_4)
{
 struct subchannel *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_8(VAR_3->dev.parent);

 if (FUNC_5(VAR_5))
  VAR_4 = 129;




 VAR_6 = VAR_5->lpm;


 if (FUNC_6(VAR_5))
  VAR_4 = 129;
 else
  VAR_5->lpm = VAR_5->schib.pmcw.pam & VAR_5->opm;

 if (VAR_3->private->state == VAR_2)

  VAR_6 = 0;
 if (VAR_5->lpm != VAR_6)
  FUNC_0(VAR_5, VAR_6);
 if (VAR_3->private->state == VAR_2 &&
     (VAR_4 == 129 || VAR_4 == 130)) {
  VAR_3->private->flags.recog_done = 1;
  VAR_3->private->state = VAR_1;
  FUNC_9(&VAR_3->private->wait_q);
  return;
 }
 if (VAR_3->private->flags.resuming) {
  VAR_3->private->state = VAR_4;
  VAR_3->private->flags.recog_done = 1;
  FUNC_9(&VAR_3->private->wait_q);
  return;
 }
 switch (VAR_4) {
 case 129:
  break;
 case 128:
  if (!VAR_3->online) {
   FUNC_4(VAR_3);
   break;
  }
  VAR_3->private->state = 128;
  VAR_3->private->flags.recog_done = 1;
  if (FUNC_3(VAR_3)) {
   VAR_3->private->flags.donotify = 1;
   FUNC_1(VAR_3);
   FUNC_9(&VAR_3->private->wait_q);
  } else {
   FUNC_4(VAR_3);
   FUNC_2(VAR_3, VAR_0);
  }
  return;
 case 130:
  if (VAR_3->id.cu_type != 0) {
   VAR_3->private->flags.recog_done = 1;
   VAR_3->private->state = 130;
   FUNC_9(&VAR_3->private->wait_q);
   return;
  }
  break;
 }
 VAR_3->private->state = VAR_4;
 FUNC_7(VAR_3);
 FUNC_9(&VAR_3->private->wait_q);
}
