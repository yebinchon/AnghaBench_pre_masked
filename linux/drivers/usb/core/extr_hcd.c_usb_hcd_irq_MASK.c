
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_2__ {scalar_t__ (* irq ) (struct usb_hcd*) ;} ;


 scalar_t__ FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct usb_hcd*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct usb_hcd*) ;
 scalar_t__ FUNC_3 (int) ;

irqreturn_t FUNC_4 (int VAR_2, void *VAR_3)
{
 struct usb_hcd *VAR_4 = VAR_3;
 irqreturn_t VAR_5;

 if (FUNC_3(FUNC_0(VAR_4) || !FUNC_1(VAR_4)))
  VAR_5 = VAR_1;
 else if (VAR_4->driver->irq(VAR_4) == VAR_1)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 return VAR_5;
}
