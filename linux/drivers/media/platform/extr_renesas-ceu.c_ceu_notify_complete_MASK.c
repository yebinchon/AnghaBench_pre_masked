
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int device_caps; struct v4l2_device* v4l2_dev; int release; int * ioctl_ops; int * fops; int ctrl_handler; struct vb2_queue* queue; int * lock; int name; } ;
struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; int dev; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct ceu_device* drv_priv; int type; } ;
struct v4l2_subdev {int ctrl_handler; } ;
struct v4l2_device {int dummy; } ;
struct v4l2_async_notifier {struct v4l2_device* v4l2_dev; } ;
struct TYPE_3__ {int dev; } ;
struct ceu_device {struct vb2_queue vb2_vq; int mlock; TYPE_2__* sd; scalar_t__ sd_index; TYPE_2__* subdevs; TYPE_1__ v4l2_dev; struct video_device vdev; } ;
struct ceu_buffer {int dummy; } ;
struct TYPE_4__ {struct v4l2_subdev* v4l2_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ceu_device*) ;
 int VAR_9 ;
 int FUNC_1 (struct ceu_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct v4l2_device*,char*,int) ;
 struct ceu_device* FUNC_4 (struct v4l2_device*) ;
 int VAR_12 ;
 int FUNC_5 (struct vb2_queue*) ;
 int FUNC_6 (struct video_device*,int ,int) ;
 int FUNC_7 (struct video_device*,struct ceu_device*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_async_notifier *VAR_13)
{
 struct v4l2_device *VAR_14 = VAR_13->v4l2_dev;
 struct ceu_device *VAR_15 = FUNC_4(VAR_14);
 struct video_device *VAR_16 = &VAR_15->vdev;
 struct vb2_queue *VAR_17 = &VAR_15->vb2_vq;
 struct v4l2_subdev *VAR_18;
 int VAR_19;


 VAR_17->type = VAR_2;
 VAR_17->io_modes = VAR_6 | VAR_5;
 VAR_17->drv_priv = VAR_15;
 VAR_17->ops = &VAR_10;
 VAR_17->mem_ops = &VAR_12;
 VAR_17->buf_struct_size = sizeof(struct ceu_buffer);
 VAR_17->timestamp_flags = VAR_1;
 VAR_17->min_buffers_needed = 2;
 VAR_17->lock = &VAR_15->mlock;
 VAR_17->dev = VAR_15->v4l2_dev.dev;

 VAR_19 = FUNC_5(VAR_17);
 if (VAR_19)
  return VAR_19;





 if (!VAR_15->sd) {
  VAR_15->sd = &VAR_15->subdevs[0];
  VAR_15->sd_index = 0;
 }

 VAR_18 = VAR_15->sd->v4l2_sd;

 VAR_19 = FUNC_0(VAR_15);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_1(VAR_15);
 if (VAR_19)
  return VAR_19;


 FUNC_2(VAR_16->name, VAR_0, sizeof(VAR_16->name));
 VAR_16->v4l2_dev = VAR_14;
 VAR_16->lock = &VAR_15->mlock;
 VAR_16->queue = &VAR_15->vb2_vq;
 VAR_16->ctrl_handler = VAR_18->ctrl_handler;
 VAR_16->fops = &VAR_8;
 VAR_16->ioctl_ops = &VAR_9;
 VAR_16->release = VAR_11;
 VAR_16->device_caps = VAR_4 |
      VAR_3;
 FUNC_7(VAR_16, VAR_15);

 VAR_19 = FUNC_6(VAR_16, VAR_7, -1);
 if (VAR_19 < 0) {
  FUNC_3(VAR_16->v4l2_dev,
    "video_register_device failed: %d\n", VAR_19);
  return VAR_19;
 }

 return 0;
}
