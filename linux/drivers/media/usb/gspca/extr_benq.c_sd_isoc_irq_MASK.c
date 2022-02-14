
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct urb {int status; int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ transfer_buffer; scalar_t__ context; } ;
struct gspca_dev {void* last_packet_type; struct urb** urb; scalar_t__ frozen; int streaming; } ;
struct TYPE_2__ {scalar_t__ actual_length; int status; int offset; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct gspca_dev*,int ,int*,scalar_t__) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_8)
{
 struct gspca_dev *VAR_9 = (struct gspca_dev *) VAR_8->context;
 struct urb *VAR_10;
 u8 *VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_9, VAR_1, "sd isoc irq\n");
 if (!VAR_9->streaming)
  return;
 if (VAR_8->status != 0) {
  if (VAR_8->status == -VAR_2)
   return;




  FUNC_3("urb status: %d\n", VAR_8->status);
  return;
 }


 if (VAR_8 == VAR_9->urb[0] || VAR_8 == VAR_9->urb[2])
  return;


 if (VAR_8 == VAR_9->urb[1])
  VAR_10 = VAR_9->urb[0];
 else
  VAR_10 = VAR_9->urb[2];
 for (VAR_12 = 0; VAR_12 < VAR_8->number_of_packets; VAR_12++) {


  if (VAR_10->iso_frame_desc[VAR_12].actual_length != VAR_7
      || VAR_8->iso_frame_desc[VAR_12].actual_length != VAR_7) {
   FUNC_1(VAR_9, "ISOC bad lengths %d / %d\n",
      VAR_10->iso_frame_desc[VAR_12].actual_length,
      VAR_8->iso_frame_desc[VAR_12].actual_length);
   VAR_9->last_packet_type = VAR_0;
   continue;
  }
  VAR_13 = VAR_10->iso_frame_desc[VAR_12].status;
  if (VAR_13 == 0)
   VAR_13 = VAR_8->iso_frame_desc[VAR_12].status;
  if (VAR_13) {
   FUNC_3("ISOC data error: [%d] status=%d\n",
    VAR_12, VAR_13);
   VAR_9->last_packet_type = VAR_0;
   continue;
  }
  VAR_11 = (u8 *) VAR_10->transfer_buffer
     + VAR_10->iso_frame_desc[VAR_12].offset;
  if (VAR_11[0] == 0x80 && (VAR_11[1] & 0xfe) == 0xba) {


   FUNC_2(VAR_9, VAR_6,
     ((void*)0), 0);
   FUNC_2(VAR_9, VAR_3,
     VAR_11 + 4, VAR_7 - 4);
  } else if (VAR_11[0] == 0x04 && (VAR_11[1] & 0xfe) == 0xba) {
   FUNC_2(VAR_9, VAR_5,
     VAR_11 + 4, VAR_7 - 4);
  } else {
   VAR_9->last_packet_type = VAR_0;
   continue;
  }
  VAR_11 = (u8 *) VAR_8->transfer_buffer
     + VAR_8->iso_frame_desc[VAR_12].offset;
  FUNC_2(VAR_9, VAR_5,
    VAR_11, VAR_7);
 }


 VAR_13 = FUNC_4(VAR_10, VAR_4);
 if (VAR_13 < 0)
  FUNC_3("usb_submit_urb(0) ret %d\n", VAR_13);
 VAR_13 = FUNC_4(VAR_8, VAR_4);
 if (VAR_13 < 0)
  FUNC_3("usb_submit_urb() ret %d\n", VAR_13);
}
