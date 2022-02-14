
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct urb {int number_of_packets; TYPE_2__* iso_frame_desc; scalar_t__ transfer_buffer; int status; } ;
struct gspca_dev {int empty_packet; int streaming; int last_packet_type; TYPE_1__* sd_desc; scalar_t__ frozen; } ;
typedef int (* cam_pkt_op ) (struct gspca_dev*,int *,int) ;
struct TYPE_4__ {int actual_length; int status; int offset; } ;
struct TYPE_3__ {int (* pkt_scan ) (struct gspca_dev*,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int,int) ;
 int FUNC_1 (struct gspca_dev*,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_4,
   struct urb *VAR_5)
{
 u8 *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 cam_pkt_op VAR_10;

 if (VAR_5->status != 0) {
  if (VAR_5->status == -VAR_2)
   return;




  FUNC_1(VAR_4, "urb status: %d\n", VAR_5->status);
  VAR_5->status = 0;
  goto resubmit;
 }
 VAR_10 = VAR_4->sd_desc->pkt_scan;
 for (VAR_7 = 0; VAR_7 < VAR_5->number_of_packets; VAR_7++) {
  VAR_8 = VAR_5->iso_frame_desc[VAR_7].actual_length;


  VAR_9 = VAR_5->iso_frame_desc[VAR_7].status;
  if (VAR_9) {
   FUNC_0(VAR_4, VAR_1, "ISOC data error: [%d] len=%d, status=%d\n",
          VAR_7, VAR_8, VAR_9);
   VAR_4->last_packet_type = VAR_0;
   continue;
  }
  if (VAR_8 == 0) {
   if (VAR_4->empty_packet == 0)
    VAR_4->empty_packet = 1;
   continue;
  }


  FUNC_0(VAR_4, VAR_1, "packet [%d] o:%d l:%d\n",
     VAR_7, VAR_5->iso_frame_desc[VAR_7].offset, VAR_8);
  VAR_6 = (u8 *) VAR_5->transfer_buffer
     + VAR_5->iso_frame_desc[VAR_7].offset;
  VAR_10(VAR_4, VAR_6, VAR_8);
 }

resubmit:
 if (!VAR_4->streaming)
  return;

 VAR_9 = FUNC_3(VAR_5, VAR_3);
 if (VAR_9 < 0)
  FUNC_2("usb_submit_urb() ret %d\n", VAR_9);
}
