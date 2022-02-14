
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_hcd {int lock; TYPE_2__** devs; } ;
struct usb_host_endpoint {int desc; scalar_t__ hcpriv; } ;
struct usb_hcd {int dummy; } ;
struct usb_device {unsigned int slot_id; } ;
struct TYPE_4__ {TYPE_1__* eps; } ;
struct TYPE_3__ {int ep_state; } ;


 int VAR_0 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (struct xhci_hcd*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct usb_hcd *VAR_1,
  struct usb_host_endpoint *VAR_2)
{
 struct xhci_hcd *VAR_3;
 struct usb_device *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7;

 VAR_3 = FUNC_0(VAR_1);

 FUNC_1(&VAR_3->lock, VAR_7);
 VAR_4 = (struct usb_device *)VAR_2->hcpriv;
 VAR_5 = VAR_4->slot_id;
 VAR_6 = FUNC_3(&VAR_2->desc);

 VAR_3->devs[VAR_5]->eps[VAR_6].ep_state &= ~VAR_0;
 FUNC_4(VAR_3, VAR_5, VAR_6);
 FUNC_2(&VAR_3->lock, VAR_7);
}
