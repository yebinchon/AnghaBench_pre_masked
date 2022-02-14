
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {scalar_t__ irq; TYPE_1__* driver; int flags; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* shutdown ) (struct usb_hcd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct usb_hcd*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct usb_hcd* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct usb_hcd*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (struct usb_hcd*) ;

void FUNC_6(struct pci_dev *VAR_1)
{
 struct usb_hcd *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return;

 if (FUNC_4(VAR_0, &VAR_2->flags) &&
   VAR_2->driver->shutdown) {
  VAR_2->driver->shutdown(VAR_2);
  if (FUNC_5(VAR_2) && VAR_2->irq > 0)
   FUNC_0(VAR_2->irq, VAR_2);
  FUNC_1(VAR_1);
 }
}
