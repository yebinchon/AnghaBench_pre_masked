
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct xhci_td {TYPE_1__* last_trb; } ;
struct xhci_ring {int cycle_state; TYPE_1__* enqueue; } ;
struct xhci_hcd {int hci_version; int quirks; int * devs; } ;
struct xhci_generic_trb {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; int bRequest; int wLength; int wIndex; int wValue; } ;
struct urb_priv {struct xhci_td* td; } ;
struct urb {int transfer_buffer_length; scalar_t__ transfer_dma; int transfer_buffer; scalar_t__ setup_packet; struct urb_priv* hcpriv; int stream_id; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct xhci_generic_trb generic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct xhci_hcd*,int,unsigned int,int ,int,struct xhci_generic_trb*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__*,int ,int) ;
 int FUNC_10 (struct xhci_hcd*,int ,unsigned int,int ,int,struct urb*,int ,int ) ;
 int FUNC_11 (struct xhci_hcd*,struct xhci_ring*,int,int,int,int,int) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (struct urb*) ;
 int FUNC_14 (struct xhci_hcd*,int ,int,int,struct urb*,int) ;
 scalar_t__ FUNC_15 (struct urb*) ;
 struct xhci_ring* FUNC_16 (struct xhci_hcd*,struct urb*) ;

int FUNC_17(struct xhci_hcd *VAR_12, gfp_t VAR_13,
  struct urb *VAR_14, int VAR_15, unsigned int VAR_16)
{
 struct xhci_ring *VAR_17;
 int VAR_18;
 int VAR_19;
 struct usb_ctrlrequest *VAR_20;
 struct xhci_generic_trb *VAR_21;
 int VAR_22;
 u32 VAR_23;
 struct urb_priv *VAR_24;
 struct xhci_td *VAR_25;

 VAR_17 = FUNC_16(VAR_12, VAR_14);
 if (!VAR_17)
  return -VAR_0;





 if (!VAR_14->setup_packet)
  return -VAR_0;


 VAR_18 = 2;





 if (VAR_14->transfer_buffer_length > 0)
  VAR_18++;
 VAR_19 = FUNC_10(VAR_12, VAR_12->devs[VAR_15],
   VAR_16, VAR_14->stream_id,
   VAR_18, VAR_14, 0, VAR_13);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_24 = VAR_14->hcpriv;
 VAR_25 = &VAR_24->td[0];






 VAR_21 = &VAR_17->enqueue->generic;
 VAR_22 = VAR_17->cycle_state;



 VAR_20 = (struct usb_ctrlrequest *) VAR_14->setup_packet;
 VAR_23 = 0;
 VAR_23 |= VAR_5 | FUNC_4(VAR_8);
 if (VAR_22 == 0)
  VAR_23 |= 0x1;


 if ((VAR_12->hci_version >= 0x100) || (VAR_12->quirks & VAR_11)) {
  if (VAR_14->transfer_buffer_length > 0) {
   if (VAR_20->bRequestType & VAR_10)
    VAR_23 |= FUNC_3(VAR_2);
   else
    VAR_23 |= FUNC_3(VAR_3);
  }
 }

 FUNC_11(VAR_12, VAR_17, 1,
    VAR_20->bRequestType | VAR_20->bRequest << 8 | FUNC_6(VAR_20->wValue) << 16,
    FUNC_6(VAR_20->wIndex) | FUNC_6(VAR_20->wLength) << 16,
    FUNC_1(8) | FUNC_0(0),

    VAR_23);



 if (FUNC_13(VAR_14))
  VAR_23 = VAR_7 | FUNC_4(VAR_1);
 else
  VAR_23 = FUNC_4(VAR_1);

 if (VAR_14->transfer_buffer_length > 0) {
  u32 VAR_26, VAR_27;
  u64 VAR_28;

  if (FUNC_15(VAR_14)) {
   FUNC_9(&VAR_28, VAR_14->transfer_buffer,
          VAR_14->transfer_buffer_length);
   FUNC_7(&VAR_28);
   VAR_23 |= VAR_5;
  } else {
   VAR_28 = (u64) VAR_14->transfer_dma;
  }

  VAR_27 = FUNC_14(VAR_12, 0,
    VAR_14->transfer_buffer_length,
    VAR_14->transfer_buffer_length,
    VAR_14, 1);
  VAR_26 = FUNC_1(VAR_14->transfer_buffer_length) |
    FUNC_2(VAR_27) |
    FUNC_0(0);
  if (VAR_20->bRequestType & VAR_10)
   VAR_23 |= VAR_4;
  FUNC_11(VAR_12, VAR_17, 1,
    FUNC_8(VAR_28),
    FUNC_12(VAR_28),
    VAR_26,
    VAR_23 | VAR_17->cycle_state);
 }


 VAR_25->last_trb = VAR_17->enqueue;



 if (VAR_14->transfer_buffer_length > 0 && VAR_20->bRequestType & VAR_10)
  VAR_23 = 0;
 else
  VAR_23 = VAR_4;
 FUNC_11(VAR_12, VAR_17, 0,
   0,
   0,
   FUNC_0(0),

   VAR_23 | VAR_6 | FUNC_4(VAR_9) | VAR_17->cycle_state);

 FUNC_5(VAR_12, VAR_15, VAR_16, 0,
   VAR_22, VAR_21);
 return 0;
}
