
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct ehci_hcd {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ehci_hcd*) ;
 struct ehci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ehci_hcd*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct usb_hcd *VAR_1, int VAR_2)
{
 struct ehci_hcd *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_3))
  return;
 FUNC_2(VAR_3, --VAR_2, VAR_0);
}
