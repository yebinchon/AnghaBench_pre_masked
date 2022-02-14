
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int regs; } ;
struct ehci_hcd {int big_endian_mmio; int caps; } ;


 int FUNC_0 (struct usb_hcd*) ;
 struct ehci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ehci_hcd*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_0)
{
 int VAR_1;
 struct ehci_hcd *VAR_2 = FUNC_1(VAR_0);

 VAR_2->big_endian_mmio = 1;
 VAR_2->caps = VAR_0->regs;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_2(VAR_2);

 return VAR_1;
}
