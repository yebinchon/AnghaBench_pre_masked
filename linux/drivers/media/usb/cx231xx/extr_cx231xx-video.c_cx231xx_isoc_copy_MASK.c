
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct urb {int status; int number_of_packets; unsigned char* transfer_buffer; TYPE_2__* iso_frame_desc; struct cx231xx_dmaqueue* context; } ;
struct cx231xx_dmaqueue {int last_sav; int partial_buf; scalar_t__ is_partial_line; } ;
struct TYPE_3__ {scalar_t__ max_pkt_size; } ;
struct cx231xx {int state; TYPE_1__ video_mode; } ;
struct TYPE_4__ {int status; scalar_t__ actual_length; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int*) ;
 int FUNC_1 (unsigned char*,int,int*) ;
 int FUNC_2 (struct cx231xx*,struct cx231xx_dmaqueue*,int,unsigned char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (struct cx231xx*,int,int) ;

__attribute__((used)) static inline int FUNC_6(struct cx231xx *VAR_3, struct urb *VAR_4)
{
 struct cx231xx_dmaqueue *VAR_5 = VAR_4->context;
 int VAR_6;
 unsigned char *VAR_7;
 u32 VAR_8 = 0, VAR_9 = 0;
 u8 VAR_10 = 0;

 if (!VAR_3)
  return 0;

 if (VAR_3->state & VAR_0)
  return 0;

 if (VAR_4->status < 0) {
  FUNC_5(VAR_3, -1, VAR_4->status);
  if (VAR_4->status == -VAR_1)
   return 0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->number_of_packets; VAR_6++) {
  int VAR_11 = VAR_4->iso_frame_desc[VAR_6].status;

  if (VAR_11 < 0) {
   FUNC_5(VAR_3, VAR_6, VAR_11);
   if (VAR_4->iso_frame_desc[VAR_6].status != -VAR_2)
    continue;
  }

  if (VAR_4->iso_frame_desc[VAR_6].actual_length <= 0) {

   continue;
  }
  if (VAR_4->iso_frame_desc[VAR_6].actual_length >
      VAR_3->video_mode.max_pkt_size) {
   FUNC_3("packet bigger than packet size");
   continue;
  }


  VAR_7 = VAR_4->transfer_buffer + VAR_4->iso_frame_desc[VAR_6].offset;
  VAR_9 = VAR_4->iso_frame_desc[VAR_6].actual_length;
  VAR_8 = 0;

  if (VAR_5->is_partial_line) {

   VAR_10 = VAR_5->last_sav;
  } else {


   VAR_10 =
       FUNC_0(VAR_7,
         VAR_5->partial_buf,
         &VAR_8);
  }

  VAR_10 &= 0xF0;


  if (VAR_10) {
   VAR_8 += FUNC_2(VAR_3, VAR_5,
    VAR_10,
    VAR_7 + VAR_8,
    VAR_9 - VAR_8);
  }




  while (VAR_8 < VAR_9) {
   u32 VAR_12 = 0;

   VAR_10 = FUNC_1(
    VAR_7 + VAR_8,
    VAR_9 - VAR_8,
    &VAR_12);

   VAR_8 += VAR_12;

   VAR_10 &= 0xF0;
   if (VAR_10 && (VAR_8 < VAR_9)) {
    VAR_8 += FUNC_2(VAR_3,
     VAR_5, VAR_10,
     VAR_7 + VAR_8,
     VAR_9 - VAR_8);
   }
  }



  FUNC_4(VAR_5->partial_buf, VAR_7 + VAR_9 - 4, 4);
  VAR_8 = 0;

 }
 return 1;
}
