
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uvc_urb {struct uvc_streaming* stream; struct urb* urb; } ;
struct TYPE_2__ {int header_size; scalar_t__ payload_size; int skip_payload; scalar_t__ max_payload_size; int header; } ;
struct uvc_streaming {TYPE_1__ bulk; } ;
struct uvc_buffer {scalar_t__ state; } ;
struct urb {int actual_length; int transfer_buffer_length; int * transfer_buffer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct uvc_urb*,struct uvc_buffer*,int *,int) ;
 int FUNC_2 (struct uvc_streaming*,struct uvc_buffer*,int ,scalar_t__) ;
 int FUNC_3 (struct uvc_streaming*,struct uvc_buffer*,int *,int) ;
 int FUNC_4 (struct uvc_streaming*,struct uvc_buffer*,int *,int) ;
 int FUNC_5 (struct uvc_streaming*,struct uvc_buffer**,struct uvc_buffer**) ;

__attribute__((used)) static void FUNC_6(struct uvc_urb *VAR_2,
   struct uvc_buffer *VAR_3, struct uvc_buffer *VAR_4)
{
 struct urb *VAR_5 = VAR_2->urb;
 struct uvc_streaming *VAR_6 = VAR_2->stream;
 u8 *VAR_7;
 int VAR_8, VAR_9;





 if (VAR_5->actual_length == 0 && VAR_6->bulk.header_size == 0)
  return;

 VAR_7 = VAR_5->transfer_buffer;
 VAR_8 = VAR_5->actual_length;
 VAR_6->bulk.payload_size += VAR_8;




 if (VAR_6->bulk.header_size == 0 && !VAR_6->bulk.skip_payload) {
  do {
   VAR_9 = FUNC_4(VAR_6, VAR_3, VAR_7, VAR_8);
   if (VAR_9 == -VAR_0)
    FUNC_5(VAR_6, &VAR_3, &VAR_4);
  } while (VAR_9 == -VAR_0);


  if (VAR_9 < 0 || VAR_3 == ((void*)0)) {
   VAR_6->bulk.skip_payload = 1;
  } else {
   FUNC_0(VAR_6->bulk.header, VAR_7, VAR_9);
   VAR_6->bulk.header_size = VAR_9;

   FUNC_3(VAR_6, VAR_4, VAR_7, VAR_9);

   VAR_7 += VAR_9;
   VAR_8 -= VAR_9;
  }
 }







 if (!VAR_6->bulk.skip_payload && VAR_3 != ((void*)0))
  FUNC_1(VAR_2, VAR_3, VAR_7, VAR_8);




 if (VAR_5->actual_length < VAR_5->transfer_buffer_length ||
     VAR_6->bulk.payload_size >= VAR_6->bulk.max_payload_size) {
  if (!VAR_6->bulk.skip_payload && VAR_3 != ((void*)0)) {
   FUNC_2(VAR_6, VAR_3, VAR_6->bulk.header,
    VAR_6->bulk.payload_size);
   if (VAR_3->state == VAR_1)
    FUNC_5(VAR_6, &VAR_3, &VAR_4);
  }

  VAR_6->bulk.header_size = 0;
  VAR_6->bulk.skip_payload = 0;
  VAR_6->bulk.payload_size = 0;
 }
}
