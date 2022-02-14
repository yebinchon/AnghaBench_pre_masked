
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_ep {int ep_state; } ;
struct xhci_virt_device {struct xhci_virt_ep* eps; } ;
struct xhci_hcd {int lock; struct xhci_virt_device** devs; } ;
struct usb_host_endpoint {int * hcpriv; int desc; } ;
struct usb_hcd {int dummy; } ;
struct usb_device {size_t slot_id; } ;


 int VAR_0 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct xhci_hcd*,char*,int) ;
 unsigned int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct usb_hcd *VAR_1,
      struct usb_host_endpoint *VAR_2)
{
 struct xhci_hcd *VAR_3;
 struct xhci_virt_device *VAR_4;
 struct xhci_virt_ep *VAR_5;
 struct usb_device *VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;

 VAR_3 = FUNC_0(VAR_1);
rescan:
 FUNC_2(&VAR_3->lock, VAR_7);

 VAR_6 = (struct usb_device *)VAR_2->hcpriv;
 if (!VAR_6 || !VAR_6->slot_id)
  goto done;

 VAR_4 = VAR_3->devs[VAR_6->slot_id];
 if (!VAR_4)
  goto done;

 VAR_8 = FUNC_5(&VAR_2->desc);
 VAR_5 = &VAR_4->eps[VAR_8];
 if (!VAR_5)
  goto done;


 if (VAR_5->ep_state & VAR_0) {
  FUNC_3(&VAR_3->lock, VAR_7);
  FUNC_1(1);
  goto rescan;
 }

 if (VAR_5->ep_state)
  FUNC_4(VAR_3, "endpoint disable with ep_state 0x%x\n",
    VAR_5->ep_state);
done:
 VAR_2->hcpriv = ((void*)0);
 FUNC_3(&VAR_3->lock, VAR_7);
}
