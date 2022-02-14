
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wahc {int dti_isoc_xfer_in_progress; size_t dti_isoc_xfer_seg; int dti_state; int active_buf_in_urbs; struct urb* buf_in_urbs; TYPE_4__* wusb; scalar_t__ dti_buf; TYPE_1__* usb_iface; } ;
struct wa_xfer_packet_status_len_hwaiso {int PacketLength; int PacketStatus; } ;
struct wa_xfer_packet_status_hwaiso {scalar_t__ bPacketType; struct wa_xfer_packet_status_len_hwaiso* PacketStatus; int wLength; } ;
struct wa_xfer {size_t segs; int lock; TYPE_5__* urb; scalar_t__ is_inbound; TYPE_2__* ep; struct wa_seg** seg; } ;
struct wa_seg {unsigned int isoc_frame_count; unsigned int isoc_frame_offset; unsigned int isoc_frame_index; int status; } ;
struct wa_rpipe {int dummy; } ;
struct usb_iso_packet_descriptor {int actual_length; int status; } ;
struct urb {size_t actual_length; int transfer_buffer; } ;
struct device {int dummy; } ;
struct TYPE_12__ {TYPE_3__* driver; } ;
struct TYPE_11__ {struct usb_iso_packet_descriptor* iso_frame_desc; int start_frame; } ;
struct TYPE_10__ {TYPE_6__ usb_hcd; } ;
struct TYPE_9__ {int (* get_frame_number ) (TYPE_6__*) ;} ;
struct TYPE_8__ {struct wa_rpipe* hcpriv; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct wahc*,struct urb*,struct wa_xfer*,struct wa_seg*) ;
 unsigned int FUNC_1 (struct wa_xfer*,struct wa_seg*,int ) ;
 int FUNC_2 (struct device*,char*,size_t,int ) ;
 int FUNC_3 (struct device*,char*,int,...) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct wa_rpipe*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 size_t FUNC_8 (struct wa_xfer_packet_status_hwaiso*,int ,unsigned int) ;
 int FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct urb*,int ) ;
 int FUNC_12 (struct wahc*) ;
 int FUNC_13 (struct wa_xfer*) ;
 int FUNC_14 (struct wa_rpipe*) ;
 struct wa_xfer* FUNC_15 (struct wahc*,int) ;
 int FUNC_16 (struct wa_xfer*) ;
 int FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct wahc *VAR_8, struct urb *VAR_9)
{
 struct device *VAR_10 = &VAR_8->usb_iface->dev;
 struct wa_xfer_packet_status_hwaiso *VAR_11;
 struct wa_xfer_packet_status_len_hwaiso *VAR_12;
 struct wa_xfer *VAR_13;
 unsigned long VAR_14;
 struct wa_seg *VAR_15;
 struct wa_rpipe *VAR_16;
 unsigned VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20;
 unsigned VAR_21 = 0, VAR_22 = 0;
 size_t VAR_23;


 FUNC_2(VAR_10, "DTI: isoc packet status %d bytes at %p\n",
  VAR_9->actual_length, VAR_9->transfer_buffer);
 VAR_11 = (struct wa_xfer_packet_status_hwaiso *)(VAR_8->dti_buf);
 if (VAR_11->bPacketType != VAR_7) {
  FUNC_3(VAR_10, "DTI Error: isoc packet status--bad type 0x%02x\n",
   VAR_11->bPacketType);
  goto error_parse_buffer;
 }
 VAR_13 = FUNC_15(VAR_8, VAR_8->dti_isoc_xfer_in_progress);
 if (VAR_13 == ((void*)0)) {
  FUNC_3(VAR_10, "DTI Error: isoc packet status--unknown xfer 0x%08x\n",
   VAR_8->dti_isoc_xfer_in_progress);
  goto error_parse_buffer;
 }
 FUNC_6(&VAR_13->lock, VAR_14);
 if (FUNC_10(VAR_8->dti_isoc_xfer_seg >= VAR_13->segs))
  goto error_bad_seg;
 VAR_15 = VAR_13->seg[VAR_8->dti_isoc_xfer_seg];
 VAR_16 = VAR_13->ep->hcpriv;
 VAR_23 = FUNC_8(VAR_11, VAR_1,
        VAR_15->isoc_frame_count);
 if (VAR_9->actual_length != VAR_23) {
  FUNC_3(VAR_10, "DTI Error: isoc packet status--bad urb length (%d bytes vs %zu needed)\n",
   VAR_9->actual_length, VAR_23);
  goto error_bad_seg;
 }
 if (FUNC_4(VAR_11->wLength) != VAR_23) {
  FUNC_3(VAR_10, "DTI Error: isoc packet status--bad length %u\n",
   FUNC_4(VAR_11->wLength));
  goto error_bad_seg;
 }

 VAR_12 = VAR_11->PacketStatus;
 VAR_13->urb->start_frame =
  VAR_8->wusb->usb_hcd.driver->get_frame_number(&VAR_8->wusb->usb_hcd);
 for (VAR_20 = 0; VAR_20 < VAR_15->isoc_frame_count; ++VAR_20) {
  struct usb_iso_packet_descriptor *VAR_24 =
   VAR_13->urb->iso_frame_desc;
  const int VAR_25 =
   VAR_15->isoc_frame_offset + VAR_20;

  VAR_24[VAR_25].status =
   FUNC_17(
   FUNC_4(VAR_12[VAR_20].PacketStatus));
  VAR_24[VAR_25].actual_length =
   FUNC_4(VAR_12[VAR_20].PacketLength);

  if (VAR_24[VAR_25].actual_length > 0) {

   if (!VAR_19)
    VAR_21 = VAR_20;
   ++VAR_19;
  }
 }

 if (VAR_13->is_inbound && VAR_19) {
  int VAR_26, VAR_27 = 0, VAR_28 = 0;
  struct urb *VAR_29;


  VAR_15->status = VAR_6;


  VAR_15->isoc_frame_index = VAR_21;

  do {
   int VAR_30, VAR_31;
   struct usb_iso_packet_descriptor *VAR_32;

   VAR_29 = &(VAR_8->buf_in_urbs[VAR_28]);
   VAR_31 = FUNC_0(VAR_8,
    VAR_29, VAR_13, VAR_15);

   VAR_15->isoc_frame_index += VAR_31;
   VAR_27 += VAR_31;

   ++(VAR_8->active_buf_in_urbs);
   VAR_26 = FUNC_11(VAR_29, VAR_0);


   VAR_30 =
    VAR_15->isoc_frame_offset + VAR_15->isoc_frame_index;
   VAR_32 =
    &(VAR_13->urb->iso_frame_desc[VAR_30]);
   while ((VAR_15->isoc_frame_index <
      VAR_15->isoc_frame_count) &&
     (VAR_32->actual_length == 0)) {
    ++(VAR_15->isoc_frame_index);
    ++VAR_32;
   }
   ++VAR_28;

  } while ((VAR_26 == 0) && (VAR_28 < VAR_4)
    && (VAR_15->isoc_frame_index <
      VAR_15->isoc_frame_count));

  if (VAR_26 < 0) {
   --(VAR_8->active_buf_in_urbs);
   FUNC_3(VAR_10, "DTI Error: Could not submit buf in URB (%d)",
    VAR_26);
   FUNC_12(VAR_8);
  } else if (VAR_19 > VAR_27)

   VAR_18 = 1;
 } else {

  VAR_22 = FUNC_5(VAR_16);
  VAR_17 = FUNC_1(VAR_13, VAR_15, VAR_5);
 }
 FUNC_7(&VAR_13->lock, VAR_14);
 if (VAR_18)
  VAR_8->dti_state = VAR_2;
 else
  VAR_8->dti_state = VAR_3;
 if (VAR_17)
  FUNC_13(VAR_13);
 if (VAR_22)
  FUNC_14(VAR_16);
 FUNC_16(VAR_13);
 return VAR_18;

error_bad_seg:
 FUNC_7(&VAR_13->lock, VAR_14);
 FUNC_16(VAR_13);
error_parse_buffer:
 return VAR_18;
}
