
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wahc {int dti_epd; } ;
struct wa_xfer {TYPE_1__* urb; } ;
struct wa_seg {int isoc_frame_index; int isoc_frame_count; int isoc_frame_offset; } ;
struct usb_iso_packet_descriptor {int const actual_length; scalar_t__ offset; } ;
struct urb {scalar_t__ transfer_dma; int transfer_buffer_length; struct wa_seg* context; scalar_t__ num_sgs; int * sg; int * transfer_buffer; int transfer_flags; scalar_t__ num_mapped_sgs; int status; } ;
struct TYPE_2__ {scalar_t__ transfer_dma; struct usb_iso_packet_descriptor* iso_frame_desc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct wahc *VAR_2,
 struct urb *VAR_3, struct wa_xfer *VAR_4, struct wa_seg *VAR_5)
{
 int VAR_6 = VAR_5->isoc_frame_index + VAR_5->isoc_frame_offset;
 int VAR_7, VAR_8 = 0, VAR_9 = VAR_6;
 struct usb_iso_packet_descriptor *VAR_10 =
      VAR_4->urb->iso_frame_desc;
 const int VAR_11 = FUNC_1(VAR_2->dti_epd);
 int VAR_12;
 struct usb_iso_packet_descriptor *VAR_13;

 FUNC_0(VAR_3->status == -VAR_0);







 VAR_7 = VAR_5->isoc_frame_index;
 do {
  VAR_12 = 0;

  VAR_13 = &VAR_10[VAR_9];
  VAR_8 += VAR_13->actual_length;
  ++VAR_9;
  ++VAR_7;

  if (VAR_7 < VAR_5->isoc_frame_count) {
   struct usb_iso_packet_descriptor *VAR_14;

   VAR_14 = &VAR_10[VAR_9];

   if ((VAR_13->offset + VAR_13->actual_length) ==
    VAR_14->offset)
    VAR_12 = 1;
  }
 } while (VAR_12
   && ((VAR_13->actual_length % VAR_11) == 0));


 VAR_3->num_mapped_sgs = 0;
 VAR_3->transfer_dma = VAR_4->urb->transfer_dma +
  VAR_10[VAR_6].offset;
 VAR_3->transfer_buffer_length = VAR_8;
 VAR_3->transfer_flags |= VAR_1;
 VAR_3->transfer_buffer = ((void*)0);
 VAR_3->sg = ((void*)0);
 VAR_3->num_sgs = 0;
 VAR_3->context = VAR_5;


 return VAR_7 - VAR_5->isoc_frame_index;
}
