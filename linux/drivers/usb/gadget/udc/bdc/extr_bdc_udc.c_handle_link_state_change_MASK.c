
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int speed; } ;
struct bdc {int devstatus; int dev; TYPE_2__ gadget; TYPE_1__* gadget_driver; int func_wake_notify; int lock; } ;
struct TYPE_4__ {int (* resume ) (TYPE_2__*) ;int (* suspend ) (TYPE_2__*) ;} ;





 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bdc*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(struct bdc *VAR_6, u32 VAR_7)
{
 u32 VAR_8;

 FUNC_2(VAR_6->dev, "Link state change");
 VAR_8 = FUNC_0(VAR_7);
 switch (VAR_8) {
 case 128:
  if ((VAR_6->gadget.speed != VAR_5) &&
      VAR_6->gadget_driver->suspend) {
   FUNC_2(VAR_6->dev, "Entered Suspend mode\n");
   FUNC_6(&VAR_6->lock);
   VAR_6->devstatus |= VAR_1;
   VAR_6->gadget_driver->suspend(&VAR_6->gadget);
   FUNC_5(&VAR_6->lock);
  }
  break;
 case 129:
  if (VAR_6->devstatus & VAR_3) {
     VAR_6->devstatus &= ~VAR_3;
   if (VAR_6->gadget.speed == VAR_4) {
    FUNC_1(VAR_6, 0);
    VAR_6->devstatus |= VAR_2;







    FUNC_4(
      &VAR_6->func_wake_notify,
      FUNC_3(VAR_0));
    FUNC_2(VAR_6->dev, "sched func_wake_notify\n");
   }
  }
  break;

 case 130:
  FUNC_2(VAR_6->dev, "Resumed from Suspend\n");
  if (VAR_6->devstatus & VAR_1) {
   VAR_6->gadget_driver->resume(&VAR_6->gadget);
   VAR_6->devstatus &= ~VAR_1;
  }
  break;
 default:
  FUNC_2(VAR_6->dev, "link state:%d\n", VAR_8);
 }
}
