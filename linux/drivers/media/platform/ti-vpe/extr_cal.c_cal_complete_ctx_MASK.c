
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int * lock; struct vb2_queue* queue; TYPE_2__* v4l2_dev; } ;
struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; int dev; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct cal_ctx* drv_priv; int type; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int active; } ;
struct cal_ctx {int external_rate; TYPE_2__ v4l2_dev; int mutex; struct video_device vdev; TYPE_1__ vidq; struct vb2_queue vb_vidq; int slock; int timeperframe; } ;
struct cal_buffer {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct video_device VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int VAR_9 ;
 int FUNC_4 (struct vb2_queue*) ;
 int FUNC_5 (struct video_device*) ;
 int VAR_10 ;
 int FUNC_6 (struct video_device*,int ,int ) ;
 int FUNC_7 (struct video_device*,struct cal_ctx*) ;

__attribute__((used)) static int FUNC_8(struct cal_ctx *VAR_11)
{
 struct video_device *VAR_12;
 struct vb2_queue *VAR_13;
 int VAR_14;

 VAR_11->timeperframe = VAR_8;
 VAR_11->external_rate = 192000000;


 FUNC_2(&VAR_11->slock);
 FUNC_1(&VAR_11->mutex);


 VAR_13 = &VAR_11->vb_vidq;
 VAR_13->type = VAR_1;
 VAR_13->io_modes = VAR_3 | VAR_2 | VAR_4;
 VAR_13->drv_priv = VAR_11;
 VAR_13->buf_struct_size = sizeof(struct cal_buffer);
 VAR_13->ops = &VAR_6;
 VAR_13->mem_ops = &VAR_9;
 VAR_13->timestamp_flags = VAR_0;
 VAR_13->lock = &VAR_11->mutex;
 VAR_13->min_buffers_needed = 3;
 VAR_13->dev = VAR_11->v4l2_dev.dev;

 VAR_14 = FUNC_4(VAR_13);
 if (VAR_14)
  return VAR_14;


 FUNC_0(&VAR_11->vidq.active);

 VAR_12 = &VAR_11->vdev;
 *VAR_12 = VAR_7;
 VAR_12->v4l2_dev = &VAR_11->v4l2_dev;
 VAR_12->queue = VAR_13;





 VAR_12->lock = &VAR_11->mutex;
 FUNC_7(VAR_12, VAR_11);

 VAR_14 = FUNC_6(VAR_12, VAR_5, VAR_10);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_3(&VAR_11->v4l2_dev, "V4L2 device registered as %s\n",
    FUNC_5(VAR_12));

 return 0;
}
