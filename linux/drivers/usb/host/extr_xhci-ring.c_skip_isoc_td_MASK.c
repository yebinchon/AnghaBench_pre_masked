
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_ep {int dummy; } ;
struct xhci_transfer_event {int buffer; } ;
struct xhci_td {scalar_t__ last_trb; TYPE_1__* urb; } ;
struct xhci_ring {scalar_t__ dequeue; } ;
struct xhci_hcd {int dummy; } ;
struct usb_iso_packet_descriptor {scalar_t__ actual_length; int status; } ;
struct urb_priv {int num_tds_done; } ;
struct TYPE_2__ {struct usb_iso_packet_descriptor* iso_frame_desc; struct urb_priv* hcpriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct xhci_hcd*,struct xhci_ring*) ;
 int FUNC_1 (int ) ;
 struct xhci_ring* FUNC_2 (struct xhci_virt_ep*,int ) ;
 int FUNC_3 (struct xhci_hcd*,struct xhci_td*,struct xhci_ring*,int*) ;

__attribute__((used)) static int FUNC_4(struct xhci_hcd *VAR_1, struct xhci_td *VAR_2,
   struct xhci_transfer_event *VAR_3,
   struct xhci_virt_ep *VAR_4, int *VAR_5)
{
 struct xhci_ring *VAR_6;
 struct urb_priv *VAR_7;
 struct usb_iso_packet_descriptor *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_2(VAR_4, FUNC_1(VAR_3->buffer));
 VAR_7 = VAR_2->urb->hcpriv;
 VAR_9 = VAR_7->num_tds_done;
 VAR_8 = &VAR_2->urb->iso_frame_desc[VAR_9];


 VAR_8->status = -VAR_0;


 VAR_8->actual_length = 0;


 while (VAR_6->dequeue != VAR_2->last_trb)
  FUNC_0(VAR_1, VAR_6);
 FUNC_0(VAR_1, VAR_6);

 return FUNC_3(VAR_1, VAR_2, VAR_6, VAR_5);
}
