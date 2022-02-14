
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * field; } ;
union xhci_trb {TYPE_2__ generic; } ;
typedef int u32 ;
struct xhci_virt_ep {int dummy; } ;
struct xhci_transfer_event {int transfer_len; int buffer; int flags; } ;
struct xhci_td {TYPE_5__* urb; union xhci_trb* last_trb; } ;
struct xhci_slot_ctx {int tt_info; } ;
struct xhci_ring {int stream_id; int err_count; } ;
struct xhci_hcd {TYPE_1__** devs; } ;
struct TYPE_10__ {int transfer_buffer_length; int actual_length; TYPE_4__* ep; } ;
struct TYPE_8__ {int bEndpointAddress; } ;
struct TYPE_9__ {TYPE_3__ desc; } ;
struct TYPE_6__ {int out_ctx; } ;







 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (struct xhci_hcd*,struct xhci_td*,struct xhci_transfer_event*,struct xhci_virt_ep*,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xhci_hcd*,struct xhci_ring*,union xhci_trb*) ;
 int FUNC_9 (struct xhci_hcd*,unsigned int,int,int ,struct xhci_td*,int ) ;
 int FUNC_10 (struct xhci_hcd*,char*,int ,int,int) ;
 struct xhci_ring* FUNC_11 (struct xhci_virt_ep*,int ) ;
 struct xhci_slot_ctx* FUNC_12 (struct xhci_hcd*,int ) ;
 int FUNC_13 (struct xhci_hcd*,char*,...) ;

__attribute__((used)) static int FUNC_14(struct xhci_hcd *VAR_3, struct xhci_td *VAR_4,
 union xhci_trb *VAR_5, struct xhci_transfer_event *VAR_6,
 struct xhci_virt_ep *VAR_7, int *VAR_8)
{
 struct xhci_slot_ctx *VAR_9;
 struct xhci_ring *VAR_10;
 u32 VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_15 = FUNC_4(FUNC_6(VAR_6->flags));
 VAR_9 = FUNC_12(VAR_3, VAR_3->devs[VAR_15]->out_ctx);
 VAR_16 = FUNC_3(FUNC_6(VAR_6->flags)) - 1;
 VAR_10 = FUNC_11(VAR_7, FUNC_7(VAR_6->buffer));
 VAR_11 = FUNC_1(FUNC_6(VAR_6->transfer_len));
 VAR_12 = FUNC_0(FUNC_6(VAR_6->transfer_len));
 VAR_14 = FUNC_2(FUNC_6(VAR_5->generic.field[2]));
 VAR_13 = VAR_4->urb->transfer_buffer_length;

 switch (VAR_11) {
 case 129:
  VAR_10->err_count = 0;

  if (VAR_5 != VAR_4->last_trb || VAR_12) {
   FUNC_13(VAR_3, "WARN Successful completion on short TX\n");
   FUNC_10(VAR_3, "ep %#x - asked for %d bytes, %d bytes untransferred\n",
     VAR_4->urb->ep->desc.bEndpointAddress,
     VAR_13, VAR_12);
  }
  *VAR_8 = 0;
  break;
 case 132:
  FUNC_10(VAR_3, "ep %#x - asked for %d bytes, %d bytes untransferred\n",
    VAR_4->urb->ep->desc.bEndpointAddress,
    VAR_13, VAR_12);
  *VAR_8 = 0;
  break;
 case 130:
  VAR_4->urb->actual_length = VAR_12;
  goto finish_td;
 case 131:

  VAR_14 = 0;
  VAR_12 = 0;
  break;
 case 128:
  if ((VAR_10->err_count++ > VAR_1) ||
      FUNC_6(VAR_9->tt_info) & VAR_2)
   break;
  *VAR_8 = 0;
  FUNC_9(VAR_3, VAR_15, VAR_16,
     VAR_10->stream_id, VAR_4, VAR_0);
  return 0;
 default:

  break;
 }

 if (VAR_5 == VAR_4->last_trb)
  VAR_4->urb->actual_length = VAR_13 - VAR_12;
 else
  VAR_4->urb->actual_length =
   FUNC_8(VAR_3, VAR_10, VAR_5) +
   VAR_14 - VAR_12;
finish_td:
 if (VAR_12 > VAR_13) {
  FUNC_13(VAR_3, "bad transfer trb length %d in event trb\n",
     VAR_12);
  VAR_4->urb->actual_length = 0;
 }
 return FUNC_5(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8);
}
