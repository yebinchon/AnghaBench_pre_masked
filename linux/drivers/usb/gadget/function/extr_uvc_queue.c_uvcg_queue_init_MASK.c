
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int io_modes; int buf_struct_size; int timestamp_flags; int * mem_ops; struct mutex* lock; int * ops; struct uvc_video_queue* drv_priv; } ;
struct uvc_video_queue {scalar_t__ flags; int irqqueue; int irqlock; TYPE_1__ queue; } ;
struct uvc_buffer {int dummy; } ;
struct mutex {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;

int FUNC_3(struct uvc_video_queue *VAR_7, enum v4l2_buf_type VAR_8,
      struct mutex *VAR_9)
{
 int VAR_10;

 VAR_7->queue.type = VAR_8;
 VAR_7->queue.io_modes = VAR_3 | VAR_4 | VAR_2;
 VAR_7->queue.drv_priv = VAR_7;
 VAR_7->queue.buf_struct_size = sizeof(struct uvc_buffer);
 VAR_7->queue.ops = &VAR_5;
 VAR_7->queue.lock = VAR_9;
 VAR_7->queue.mem_ops = &VAR_6;
 VAR_7->queue.timestamp_flags = VAR_0
         | VAR_1;
 VAR_10 = FUNC_2(&VAR_7->queue);
 if (VAR_10)
  return VAR_10;

 FUNC_1(&VAR_7->irqlock);
 FUNC_0(&VAR_7->irqqueue);
 VAR_7->flags = 0;

 return 0;
}
