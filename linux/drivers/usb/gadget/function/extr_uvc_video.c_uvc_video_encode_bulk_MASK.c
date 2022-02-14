
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ buf_used; } ;
struct uvc_video {int req_size; scalar_t__ payload_size; scalar_t__ max_payload_size; TYPE_1__ queue; int fid; } ;
struct uvc_buffer {scalar_t__ bytesused; int state; } ;
struct usb_request {int length; int zero; void* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct uvc_video*,struct uvc_buffer*,void*,int) ;
 int FUNC_2 (struct uvc_video*,struct uvc_buffer*,void*,int) ;
 int FUNC_3 (TYPE_1__*,struct uvc_buffer*) ;

__attribute__((used)) static void
FUNC_4(struct usb_request *VAR_2, struct uvc_video *VAR_3,
  struct uvc_buffer *VAR_4)
{
 void *VAR_5 = VAR_2->buf;
 int VAR_6 = VAR_3->req_size;
 int VAR_7;


 if (VAR_3->payload_size == 0) {
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
  VAR_3->payload_size += VAR_7;
  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
 }


 VAR_6 = FUNC_0((int)(VAR_3->max_payload_size - VAR_3->payload_size), VAR_6);
 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_3->payload_size += VAR_7;
 VAR_6 -= VAR_7;

 VAR_2->length = VAR_3->req_size - VAR_6;
 VAR_2->zero = VAR_3->payload_size == VAR_3->max_payload_size;

 if (VAR_4->bytesused == VAR_3->queue.buf_used) {
  VAR_3->queue.buf_used = 0;
  VAR_4->state = VAR_0;
  FUNC_3(&VAR_3->queue, VAR_4);
  VAR_3->fid ^= VAR_1;

  VAR_3->payload_size = 0;
 }

 if (VAR_3->payload_size == VAR_3->max_payload_size ||
     VAR_4->bytesused == VAR_3->queue.buf_used)
  VAR_3->payload_size = 0;
}
