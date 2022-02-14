
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uvc_urb {struct uvc_streaming* stream; struct urb* urb; } ;
struct uvc_streaming {int dummy; } ;
struct uvc_buffer {int error; scalar_t__ state; } ;
struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; int * transfer_buffer; } ;
struct TYPE_2__ {scalar_t__ status; int offset; scalar_t__ actual_length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct uvc_urb*,struct uvc_buffer*,int *,scalar_t__) ;
 int FUNC_2 (struct uvc_streaming*,struct uvc_buffer*,int *,scalar_t__) ;
 int FUNC_3 (struct uvc_streaming*,struct uvc_buffer*,int *,int) ;
 int FUNC_4 (struct uvc_streaming*,struct uvc_buffer*,int *,scalar_t__) ;
 int FUNC_5 (struct uvc_streaming*,struct uvc_buffer**,struct uvc_buffer**) ;

__attribute__((used)) static void FUNC_6(struct uvc_urb *VAR_3,
   struct uvc_buffer *VAR_4, struct uvc_buffer *VAR_5)
{
 struct urb *VAR_6 = VAR_3->urb;
 struct uvc_streaming *VAR_7 = VAR_3->stream;
 u8 *VAR_8;
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_6->number_of_packets; ++VAR_10) {
  if (VAR_6->iso_frame_desc[VAR_10].status < 0) {
   FUNC_0(VAR_2, "USB isochronous frame "
    "lost (%d).\n", VAR_6->iso_frame_desc[VAR_10].status);

   if (VAR_4 != ((void*)0))
    VAR_4->error = 1;
   continue;
  }


  VAR_8 = VAR_6->transfer_buffer + VAR_6->iso_frame_desc[VAR_10].offset;
  do {
   VAR_9 = FUNC_4(VAR_7, VAR_4, VAR_8,
    VAR_6->iso_frame_desc[VAR_10].actual_length);
   if (VAR_9 == -VAR_0)
    FUNC_5(VAR_7, &VAR_4, &VAR_5);
  } while (VAR_9 == -VAR_0);

  if (VAR_9 < 0)
   continue;

  FUNC_3(VAR_7, VAR_5, VAR_8, VAR_9);


  FUNC_1(VAR_3, VAR_4, VAR_8 + VAR_9,
   VAR_6->iso_frame_desc[VAR_10].actual_length - VAR_9);


  FUNC_2(VAR_7, VAR_4, VAR_8,
   VAR_6->iso_frame_desc[VAR_10].actual_length);

  if (VAR_4->state == VAR_1)
   FUNC_5(VAR_7, &VAR_4, &VAR_5);
 }
}
