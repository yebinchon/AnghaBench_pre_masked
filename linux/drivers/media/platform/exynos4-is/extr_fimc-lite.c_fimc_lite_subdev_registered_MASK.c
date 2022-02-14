
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {int minor; int device_caps; int io_modes; int buf_struct_size; int name; int entity; int * dev; int * lock; int timestamp_flags; struct fimc_lite* drv_priv; int * mem_ops; int * ops; int type; struct video_device* queue; int release; int v4l2_dev; int * ioctl_ops; int * fops; } ;
struct vb2_queue {int minor; int device_caps; int io_modes; int buf_struct_size; int name; int entity; int * dev; int * lock; int timestamp_flags; struct fimc_lite* drv_priv; int * mem_ops; int * ops; int type; struct vb2_queue* queue; int release; int v4l2_dev; int * ioctl_ops; int * fops; } ;
struct v4l2_subdev {int v4l2_dev; } ;
struct flite_buffer {int dummy; } ;
struct TYPE_5__ {int * pipe; struct video_device vdev; } ;
struct TYPE_6__ {int flags; } ;
struct fimc_lite {int index; TYPE_2__ ve; TYPE_3__ vd_pad; TYPE_1__* pdev; int lock; int active_buf_q; int pending_buf_q; scalar_t__ reqbufs_count; int out_path; struct video_device vb_queue; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,TYPE_3__*) ;
 int FUNC_4 (struct video_device*,int ,int) ;
 int FUNC_5 (int ,int,char*,int) ;
 int * FUNC_6 (struct v4l2_subdev*) ;
 struct fimc_lite* FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int VAR_12 ;
 int FUNC_9 (struct video_device*) ;
 int FUNC_10 (struct video_device*) ;
 int VAR_13 ;
 int FUNC_11 (struct video_device*,int ,int) ;
 int FUNC_12 (struct video_device*,struct fimc_lite*) ;

__attribute__((used)) static int FUNC_13(struct v4l2_subdev *VAR_14)
{
 struct fimc_lite *VAR_15 = FUNC_7(VAR_14);
 struct vb2_queue *VAR_16 = &VAR_15->vb_queue;
 struct video_device *VAR_17 = &VAR_15->ve.vdev;
 int VAR_18;

 FUNC_4(VAR_17, 0, sizeof(*VAR_17));
 FUNC_1(&VAR_15->out_path, VAR_0);

 FUNC_5(VAR_17->name, sizeof(VAR_17->name), "fimc-lite.%d.capture",
   VAR_15->index);

 VAR_17->fops = &VAR_9;
 VAR_17->ioctl_ops = &VAR_10;
 VAR_17->v4l2_dev = VAR_14->v4l2_dev;
 VAR_17->minor = -1;
 VAR_17->release = VAR_13;
 VAR_17->queue = VAR_16;
 VAR_17->device_caps = VAR_5 | VAR_4;
 VAR_15->reqbufs_count = 0;

 FUNC_0(&VAR_15->pending_buf_q);
 FUNC_0(&VAR_15->active_buf_q);

 FUNC_4(VAR_16, 0, sizeof(*VAR_16));
 VAR_16->type = VAR_3;
 VAR_16->io_modes = VAR_6 | VAR_7;
 VAR_16->ops = &VAR_11;
 VAR_16->mem_ops = &VAR_12;
 VAR_16->buf_struct_size = sizeof(struct flite_buffer);
 VAR_16->drv_priv = VAR_15;
 VAR_16->timestamp_flags = VAR_2;
 VAR_16->lock = &VAR_15->lock;
 VAR_16->dev = &VAR_15->pdev->dev;

 VAR_18 = FUNC_9(VAR_16);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_15->vd_pad.flags = VAR_1;
 VAR_18 = FUNC_3(&VAR_17->entity, 1, &VAR_15->vd_pad);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_12(VAR_17, VAR_15);
 VAR_15->ve.pipe = FUNC_6(VAR_14);

 VAR_18 = FUNC_11(VAR_17, VAR_8, -1);
 if (VAR_18 < 0) {
  FUNC_2(&VAR_17->entity);
  VAR_15->ve.pipe = ((void*)0);
  return VAR_18;
 }

 FUNC_8(VAR_14->v4l2_dev, "Registered %s as /dev/%s\n",
    VAR_17->name, FUNC_10(VAR_17));
 return 0;
}
