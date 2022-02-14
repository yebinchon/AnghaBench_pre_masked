
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct uvc_urb {struct uvc_streaming* stream; struct urb* urb; } ;
struct TYPE_5__ {int header_size; scalar_t__ payload_size; scalar_t__ max_payload_size; } ;
struct TYPE_6__ {scalar_t__ buf_used; } ;
struct uvc_streaming {int urb_size; TYPE_2__ bulk; int last_fid; TYPE_3__ queue; scalar_t__ sequence; } ;
struct TYPE_4__ {scalar_t__ sequence; } ;
struct uvc_buffer {scalar_t__ bytesused; TYPE_1__ buf; int state; } ;
struct urb {int transfer_buffer_length; int * transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,struct uvc_buffer*) ;
 int FUNC_1 (struct uvc_streaming*,struct uvc_buffer*,int *,int) ;
 int FUNC_2 (struct uvc_streaming*,struct uvc_buffer*,int *,int) ;

__attribute__((used)) static void FUNC_3(struct uvc_urb *VAR_2,
 struct uvc_buffer *VAR_3, struct uvc_buffer *VAR_4)
{
 struct urb *VAR_5 = VAR_2->urb;
 struct uvc_streaming *VAR_6 = VAR_2->stream;

 u8 *VAR_7 = VAR_5->transfer_buffer;
 int VAR_8 = VAR_6->urb_size, VAR_9;

 if (VAR_3 == ((void*)0)) {
  VAR_5->transfer_buffer_length = 0;
  return;
 }


 if (VAR_6->bulk.header_size == 0) {
  VAR_9 = FUNC_2(VAR_6, VAR_3, VAR_7, VAR_8);
  VAR_6->bulk.header_size = VAR_9;
  VAR_6->bulk.payload_size += VAR_9;
  VAR_7 += VAR_9;
  VAR_8 -= VAR_9;
 }


 VAR_9 = FUNC_1(VAR_6, VAR_3, VAR_7, VAR_8);

 VAR_6->bulk.payload_size += VAR_9;
 VAR_8 -= VAR_9;

 if (VAR_3->bytesused == VAR_6->queue.buf_used ||
     VAR_6->bulk.payload_size == VAR_6->bulk.max_payload_size) {
  if (VAR_3->bytesused == VAR_6->queue.buf_used) {
   VAR_6->queue.buf_used = 0;
   VAR_3->state = VAR_0;
   VAR_3->buf.sequence = ++VAR_6->sequence;
   FUNC_0(&VAR_6->queue, VAR_3);
   VAR_6->last_fid ^= VAR_1;
  }

  VAR_6->bulk.header_size = 0;
  VAR_6->bulk.payload_size = 0;
 }

 VAR_5->transfer_buffer_length = VAR_6->urb_size - VAR_8;
}
