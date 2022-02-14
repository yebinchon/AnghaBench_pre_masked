
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hub {TYPE_1__** ports; } ;
struct usb_hcd {int dummy; } ;
struct TYPE_2__ {int hw_portnum; } ;


 struct xhci_hub* FUNC_0 (struct usb_hcd*) ;

int FUNC_1(struct usb_hcd *VAR_0, int VAR_1)
{
 struct xhci_hub *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 return VAR_2->ports[VAR_1 - 1]->hw_portnum + 1;
}
