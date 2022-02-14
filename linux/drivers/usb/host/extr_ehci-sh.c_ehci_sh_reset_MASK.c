
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int regs; } ;
struct ehci_hcd {int caps; } ;


 int FUNC_0 (struct usb_hcd*) ;
 struct ehci_hcd* FUNC_1 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_0)
{
 struct ehci_hcd *VAR_1 = FUNC_1(VAR_0);

 VAR_1->caps = VAR_0->regs;

 return FUNC_0(VAR_0);
}
