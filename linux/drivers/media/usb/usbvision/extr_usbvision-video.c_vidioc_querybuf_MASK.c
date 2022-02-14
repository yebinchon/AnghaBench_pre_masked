
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; } ;
struct v4l2_buffer {size_t index; int length; int sequence; int timestamp; int field; void* memory; TYPE_1__ m; int flags; } ;
struct usbvision_frame {scalar_t__ grabstate; int sequence; int ts; } ;
struct TYPE_4__ {int bytes_per_pixel; } ;
struct usb_usbvision {size_t num_frames; int curwidth; int curheight; struct usbvision_frame* frame; TYPE_2__ palette; int max_frame_size; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ) ;
 struct usb_usbvision* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_10,
       void *VAR_11, struct v4l2_buffer *VAR_12)
{
 struct usb_usbvision *VAR_13 = FUNC_2(VAR_10);
 struct usbvision_frame *VAR_14;



 if (VAR_12->index >= VAR_13->num_frames)
  return -VAR_0;

 VAR_12->flags = VAR_4;
 VAR_14 = &VAR_13->frame[VAR_12->index];
 if (VAR_14->grabstate >= VAR_8)
  VAR_12->flags |= VAR_3;
 if (VAR_14->grabstate >= VAR_7)
  VAR_12->flags |= VAR_1;
 if (VAR_14->grabstate == VAR_9)
  VAR_12->flags |= VAR_2;
 VAR_12->memory = VAR_6;

 VAR_12->m.offset = VAR_12->index * FUNC_0(VAR_13->max_frame_size);

 VAR_12->memory = VAR_6;
 VAR_12->field = VAR_5;
 VAR_12->length = VAR_13->curwidth *
  VAR_13->curheight *
  VAR_13->palette.bytes_per_pixel;
 VAR_12->timestamp = FUNC_1(VAR_13->frame[VAR_12->index].ts);
 VAR_12->sequence = VAR_13->frame[VAR_12->index].sequence;
 return 0;
}
