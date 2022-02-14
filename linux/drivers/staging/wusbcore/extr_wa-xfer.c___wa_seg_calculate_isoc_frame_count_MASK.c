
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wa_xfer {scalar_t__ seg_size; scalar_t__ is_inbound; TYPE_2__* wa; TYPE_1__* urb; } ;
struct usb_iso_packet_descriptor {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_4__ {int quirks; } ;
struct TYPE_3__ {int number_of_packets; struct usb_iso_packet_descriptor* iso_frame_desc; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct wa_xfer *VAR_1,
 int VAR_2, int *VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;
 int VAR_6 = VAR_2;
 struct usb_iso_packet_descriptor *VAR_7 =
  VAR_1->urb->iso_frame_desc;

 while ((VAR_6 < VAR_1->urb->number_of_packets)
  && ((VAR_4 + VAR_7[VAR_6].length)
    <= VAR_1->seg_size)) {







  if ((VAR_1->wa->quirks & VAR_0)
   && (VAR_1->is_inbound == 0)
   && (VAR_6 > VAR_2)
   && ((VAR_7[VAR_6 - 1].offset +
    VAR_7[VAR_6 - 1].length) !=
    VAR_7[VAR_6].offset))
   break;


  ++VAR_5;
  VAR_4 += VAR_7[VAR_6].length;


  ++VAR_6;
 }

 *VAR_3 = VAR_4;
 return VAR_5;
}
