
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wa_xfer_packet_info_hwaiso {void** PacketLength; void* wLength; int bPacketType; } ;
struct wa_xfer {TYPE_1__* urb; } ;
struct wa_seg {int isoc_frame_count; int isoc_frame_offset; } ;
struct usb_iso_packet_descriptor {int length; } ;
struct TYPE_2__ {struct usb_iso_packet_descriptor* iso_frame_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct wa_xfer_packet_info_hwaiso*,int ,int) ;

__attribute__((used)) static void FUNC_2(
  struct wa_xfer_packet_info_hwaiso *VAR_2,
  struct wa_xfer *VAR_3,
  struct wa_seg *VAR_4) {
 struct usb_iso_packet_descriptor *VAR_5 =
  VAR_3->urb->iso_frame_desc;
 int VAR_6;


 VAR_2->bPacketType = VAR_1;
 VAR_2->wLength = FUNC_0(FUNC_1(VAR_2,
        VAR_0,
        VAR_4->isoc_frame_count));
 for (VAR_6 = 0; VAR_6 < VAR_4->isoc_frame_count;
  ++VAR_6) {
  int VAR_7 = VAR_6 + VAR_4->isoc_frame_offset;
  VAR_2->PacketLength[VAR_6] =
   FUNC_0(VAR_5[VAR_7].length);
 }
}
