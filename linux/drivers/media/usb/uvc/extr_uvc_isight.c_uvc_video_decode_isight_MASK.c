
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_urb {struct uvc_streaming* stream; struct urb* urb; } ;
struct uvc_streaming {int queue; } ;
struct uvc_buffer {scalar_t__ state; } ;
struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ transfer_buffer; } ;
struct TYPE_2__ {scalar_t__ status; int actual_length; scalar_t__ offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct uvc_buffer*,scalar_t__,int ) ;
 struct uvc_buffer* FUNC_1 (int *,struct uvc_buffer*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

void FUNC_3(struct uvc_urb *VAR_4, struct uvc_buffer *VAR_5,
   struct uvc_buffer *VAR_6)
{
 struct urb *VAR_7 = VAR_4->urb;
 struct uvc_streaming *VAR_8 = VAR_4->stream;
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_7->number_of_packets; ++VAR_10) {
  if (VAR_7->iso_frame_desc[VAR_10].status < 0) {
   FUNC_2(VAR_3, "USB isochronous frame "
      "lost (%d).\n",
      VAR_7->iso_frame_desc[VAR_10].status);
  }
  do {
   VAR_9 = FUNC_0(&VAR_8->queue, VAR_5,
     VAR_7->transfer_buffer +
     VAR_7->iso_frame_desc[VAR_10].offset,
     VAR_7->iso_frame_desc[VAR_10].actual_length);

   if (VAR_5 == ((void*)0))
    break;

   if (VAR_5->state == VAR_1 ||
       VAR_5->state == VAR_2)
    VAR_5 = FUNC_1(&VAR_8->queue,
       VAR_5);
  } while (VAR_9 == -VAR_0);
 }
}
