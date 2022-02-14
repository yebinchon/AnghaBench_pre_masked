
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_hcd {int dummy; } ;
struct usb_hcd {scalar_t__ regs; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;
 struct usb_hcd* FUNC_3 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_4(struct xhci_hcd *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_3(VAR_0);
 u32 VAR_2;
 u32 VAR_3 = 4;

 do {

  FUNC_2(0x6F, VAR_1->regs + 0x1048);
  FUNC_1(10);

  FUNC_2(0x7F, VAR_1->regs + 0x1048);
  FUNC_1(200);
  VAR_2 = FUNC_0(VAR_1->regs + 0x1070);
 } while (!(VAR_2 & 0x1) && --VAR_3);
}
