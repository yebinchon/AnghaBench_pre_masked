
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int controller; struct usb_device* root_hub; } ;
struct usb_hcd {scalar_t__ irq; scalar_t__ flags; int phy_roothub; TYPE_2__ self; int rh_timer; int state; TYPE_1__* driver; scalar_t__ rh_pollable; int died_work; int wakeup_work; scalar_t__ rh_registered; } ;
struct usb_device {int dummy; } ;
struct TYPE_3__ {int (* stop ) (struct usb_hcd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (scalar_t__,struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct usb_hcd*) ;
 int VAR_5 ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct usb_device**) ;
 int FUNC_15 (struct usb_device*) ;
 scalar_t__ FUNC_16 (struct usb_hcd*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct usb_hcd*) ;

void FUNC_20(struct usb_hcd *VAR_6)
{
 struct usb_device *VAR_7 = VAR_6->self.root_hub;

 FUNC_5(VAR_6->self.controller, "remove, state %x\n", VAR_6->state);

 FUNC_15(VAR_7);
 FUNC_2(VAR_1, &VAR_6->flags);
 if (FUNC_0 (VAR_6->state))
  VAR_6->state = VAR_3;

 FUNC_4(VAR_6->self.controller, "roothub graceful disconnect\n");
 FUNC_10 (&VAR_4);
 VAR_6->rh_registered = 0;
 FUNC_11 (&VAR_4);




 FUNC_1(&VAR_6->died_work);

 FUNC_8(&VAR_5);
 FUNC_14(&VAR_7);
 FUNC_9(&VAR_5);
 VAR_6->rh_pollable = 0;
 FUNC_2(VAR_0, &VAR_6->flags);
 FUNC_3(&VAR_6->rh_timer);

 VAR_6->driver->stop(VAR_6);
 VAR_6->state = VAR_2;


 FUNC_2(VAR_0, &VAR_6->flags);
 FUNC_3(&VAR_6->rh_timer);

 if (FUNC_16(VAR_6)) {
  if (VAR_6->irq > 0)
   FUNC_6(VAR_6->irq, VAR_6);
 }

 FUNC_13(&VAR_6->self);
 FUNC_7(VAR_6);

 FUNC_18(VAR_6->phy_roothub);
 FUNC_17(VAR_6->phy_roothub);

 FUNC_19(VAR_6);
 VAR_6->flags = 0;
}
