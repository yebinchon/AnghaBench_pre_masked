
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct TYPE_3__ {int * host; } ;
struct ci_hdrc {TYPE_2__* platdata; TYPE_1__ otg; struct usb_hcd* hcd; int irq; int role; } ;
struct TYPE_4__ {int flags; scalar_t__ pins_default; int pctl; scalar_t__ pins_host; scalar_t__ reg_vbus; int (* notify_event ) (struct ci_hdrc*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ci_hdrc*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ci_hdrc*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_7(struct ci_hdrc *VAR_3)
{
 struct usb_hcd *VAR_4 = VAR_3->hcd;

 if (VAR_4) {
  if (VAR_3->platdata->notify_event)
   VAR_3->platdata->notify_event(VAR_3,
    VAR_0);
  FUNC_6(VAR_4);
  VAR_3->role = VAR_2;
  FUNC_4(VAR_3->irq);
  FUNC_5(VAR_4);
  if (VAR_3->platdata->reg_vbus && !FUNC_0(VAR_3) &&
   (VAR_3->platdata->flags & VAR_1))
    FUNC_2(VAR_3->platdata->reg_vbus);
 }
 VAR_3->hcd = ((void*)0);
 VAR_3->otg.host = ((void*)0);

 if (VAR_3->platdata->pins_host && VAR_3->platdata->pins_default)
  FUNC_1(VAR_3->platdata->pctl,
         VAR_3->platdata->pins_default);
}
