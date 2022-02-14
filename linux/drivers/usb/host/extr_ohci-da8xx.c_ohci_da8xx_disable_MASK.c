
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct da8xx_ohci_hcd {int usb11_clk; int usb11_phy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct da8xx_ohci_hcd* FUNC_3 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_4(struct usb_hcd *VAR_0)
{
 struct da8xx_ohci_hcd *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->usb11_phy);
 FUNC_1(VAR_1->usb11_phy);
 FUNC_0(VAR_1->usb11_clk);
}
