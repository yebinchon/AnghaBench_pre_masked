
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_td {TYPE_1__* urb; } ;
struct xhci_hcd {int quirks; } ;
struct xhci_dequeue_state {int new_deq_seg; int new_deq_ptr; } ;
struct usb_device {int slot_id; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xhci_hcd*,int ,char*) ;
 int FUNC_1 (struct xhci_hcd*,int ,unsigned int,unsigned int,struct xhci_td*,struct xhci_dequeue_state*) ;
 int FUNC_2 (struct xhci_hcd*,int ,unsigned int,struct xhci_dequeue_state*) ;
 int FUNC_3 (struct xhci_hcd*,int ,unsigned int,struct xhci_dequeue_state*) ;

void FUNC_4(struct xhci_hcd *VAR_3, unsigned int VAR_4,
          unsigned int VAR_5, struct xhci_td *VAR_6)
{
 struct xhci_dequeue_state VAR_7;
 struct usb_device *VAR_8 = VAR_6->urb->dev;

 FUNC_0(VAR_3, VAR_2,
   "Cleaning up stalled endpoint ring");



 FUNC_1(VAR_3, VAR_8->slot_id,
   VAR_4, VAR_5, VAR_6, &VAR_7);

 if (!VAR_7.new_deq_ptr || !VAR_7.new_deq_seg)
  return;




 if (!(VAR_3->quirks & VAR_0)) {
  FUNC_0(VAR_3, VAR_2,
    "Queueing new dequeue state");
  FUNC_2(VAR_3, VAR_8->slot_id,
    VAR_4, &VAR_7);
 } else {





  FUNC_0(VAR_3, VAR_1,
    "Setting up input context for "
    "configure endpoint command");
  FUNC_3(VAR_3, VAR_8->slot_id,
    VAR_4, &VAR_7);
 }
}
