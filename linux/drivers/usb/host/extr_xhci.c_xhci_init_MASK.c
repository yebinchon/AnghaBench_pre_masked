
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int hci_version; int quirks; int lock; } ;
struct usb_hcd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xhci_hcd*) ;
 struct xhci_hcd* FUNC_1 (struct usb_hcd*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct xhci_hcd*,int ,char*) ;
 int FUNC_5 (struct xhci_hcd*,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_6)
{
 struct xhci_hcd *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = 0;

 FUNC_4(VAR_7, VAR_4, "xhci_init");
 FUNC_2(&VAR_7->lock);
 if (VAR_7->hci_version == 0x95 && VAR_3) {
  FUNC_4(VAR_7, VAR_5,
    "QUIRK: Not clearing Link TRB chain bits.");
  VAR_7->quirks |= VAR_2;
 } else {
  FUNC_4(VAR_7, VAR_4,
    "xHCI doesn't need link TRB QUIRK");
 }
 VAR_8 = FUNC_5(VAR_7, VAR_0);
 FUNC_4(VAR_7, VAR_4, "Finished xhci_init");


 if (FUNC_3()) {
  VAR_7->quirks |= VAR_1;
  FUNC_0(VAR_7);
 }

 return VAR_8;
}
