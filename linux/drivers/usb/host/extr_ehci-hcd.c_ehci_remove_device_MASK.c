
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct usb_device {int dummy; } ;
struct ehci_hcd {int lock; } ;


 int FUNC_0 (struct usb_device*) ;
 struct ehci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_hcd *VAR_0, struct usb_device *VAR_1)
{
 struct ehci_hcd *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2->lock);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_2->lock);
}
