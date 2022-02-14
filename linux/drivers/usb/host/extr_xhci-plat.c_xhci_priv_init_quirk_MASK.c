
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_plat_priv {int (* init_quirk ) (struct usb_hcd*) ;} ;
struct usb_hcd {int dummy; } ;


 struct xhci_plat_priv* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_0)
{
 struct xhci_plat_priv *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->init_quirk)
  return 0;

 return VAR_1->init_quirk(VAR_0);
}
