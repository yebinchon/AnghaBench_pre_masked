
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int io_modes; int buf_struct_size; int timestamp_flags; int * ops; int * lock; int * mem_ops; struct uvc_video_queue* drv_priv; } ;
struct uvc_video_queue {int flags; int irqqueue; int irqlock; int mutex; TYPE_1__ queue; } ;
struct uvc_buffer {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_8 ;

int FUNC_4(struct uvc_video_queue *VAR_9, enum v4l2_buf_type VAR_10,
      int VAR_11)
{
 int VAR_12;

 VAR_9->queue.type = VAR_10;
 VAR_9->queue.io_modes = VAR_4 | VAR_5;
 VAR_9->queue.drv_priv = VAR_9;
 VAR_9->queue.buf_struct_size = sizeof(struct uvc_buffer);
 VAR_9->queue.mem_ops = &VAR_8;
 VAR_9->queue.timestamp_flags = VAR_1
  | VAR_2;
 VAR_9->queue.lock = &VAR_9->mutex;

 switch (VAR_10) {
 case 128:
  VAR_9->queue.ops = &VAR_6;
  break;
 default:
  VAR_9->queue.io_modes |= VAR_3;
  VAR_9->queue.ops = &VAR_7;
  break;
 }

 VAR_12 = FUNC_3(&VAR_9->queue);
 if (VAR_12)
  return VAR_12;

 FUNC_1(&VAR_9->mutex);
 FUNC_2(&VAR_9->irqlock);
 FUNC_0(&VAR_9->irqqueue);
 VAR_9->flags = VAR_11 ? VAR_0 : 0;

 return 0;
}
