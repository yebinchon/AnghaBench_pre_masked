
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * ops; } ;
struct video_device {int device_caps; TYPE_3__ entity; int * lock; struct vb2_queue* queue; int * v4l2_dev; int vfl_dir; int vfl_type; int * ioctl_ops; int * fops; int release; int name; } ;
struct vb2_queue {int io_modes; int buf_struct_size; int min_buffers_needed; int dev; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct sun6i_video* drv_priv; void* type; } ;
struct TYPE_6__ {int width; int height; int field; int pixelformat; } ;
struct TYPE_7__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; void* type; int member_0; } ;
struct TYPE_9__ {int flags; } ;
struct sun6i_video {int lock; struct video_device vdev; struct vb2_queue vb2_vidq; scalar_t__ sequence; int dma_queue_lock; int dma_queue; TYPE_4__ pad; struct sun6i_csi* csi; } ;
struct sun6i_csi_buffer {int dummy; } ;
struct sun6i_csi {int v4l2_dev; int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int,TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char const*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct sun6i_video*,struct v4l2_format*) ;
 int * VAR_15 ;
 int FUNC_8 (int *,char*,int) ;
 int VAR_16 ;
 int FUNC_9 (struct vb2_queue*) ;
 int FUNC_10 (struct vb2_queue*) ;
 int VAR_17 ;
 int FUNC_11 (struct video_device*,int ,int) ;
 int FUNC_12 (struct video_device*,struct sun6i_video*) ;

int FUNC_13(struct sun6i_video *VAR_18, struct sun6i_csi *VAR_19,
       const char *VAR_20)
{
 struct video_device *VAR_21 = &VAR_18->vdev;
 struct vb2_queue *VAR_22 = &VAR_18->vb2_vidq;
 struct v4l2_format VAR_23 = { 0 };
 int VAR_24;

 VAR_18->csi = VAR_19;


 VAR_18->pad.flags = VAR_1 | VAR_0;
 VAR_21->entity.ops = &VAR_14;
 VAR_24 = FUNC_2(&VAR_21->entity, 1, &VAR_18->pad);
 if (VAR_24 < 0)
  return VAR_24;

 FUNC_4(&VAR_18->lock);

 FUNC_0(&VAR_18->dma_queue);
 FUNC_5(&VAR_18->dma_queue_lock);

 VAR_18->sequence = 0;


 VAR_23.type = VAR_3;
 VAR_23.fmt.pix.pixelformat = VAR_15[0];
 VAR_23.fmt.pix.width = 1280;
 VAR_23.fmt.pix.height = 720;
 VAR_23.fmt.pix.field = VAR_6;
 FUNC_7(VAR_18, &VAR_23);


 VAR_22->type = VAR_3;
 VAR_22->io_modes = VAR_8 | VAR_7;
 VAR_22->drv_priv = VAR_18;
 VAR_22->buf_struct_size = sizeof(struct sun6i_csi_buffer);
 VAR_22->ops = &VAR_11;
 VAR_22->mem_ops = &VAR_16;
 VAR_22->timestamp_flags = VAR_2;
 VAR_22->lock = &VAR_18->lock;

 VAR_22->min_buffers_needed = 3;
 VAR_22->dev = VAR_19->dev;

 VAR_24 = FUNC_9(VAR_22);
 if (VAR_24) {
  FUNC_8(&VAR_19->v4l2_dev, "vb2_queue_init failed: %d\n", VAR_24);
  goto clean_entity;
 }


 FUNC_6(VAR_21->name, VAR_20, sizeof(VAR_21->name));
 VAR_21->release = VAR_17;
 VAR_21->fops = &VAR_12;
 VAR_21->ioctl_ops = &VAR_13;
 VAR_21->vfl_type = VAR_10;
 VAR_21->vfl_dir = VAR_9;
 VAR_21->v4l2_dev = &VAR_19->v4l2_dev;
 VAR_21->queue = VAR_22;
 VAR_21->lock = &VAR_18->lock;
 VAR_21->device_caps = VAR_4 | VAR_5;
 FUNC_12(VAR_21, VAR_18);

 VAR_24 = FUNC_11(VAR_21, VAR_10, -1);
 if (VAR_24 < 0) {
  FUNC_8(&VAR_19->v4l2_dev,
    "video_register_device failed: %d\n", VAR_24);
  goto release_vb2;
 }

 return 0;

release_vb2:
 FUNC_10(&VAR_18->vb2_vidq);
clean_entity:
 FUNC_1(&VAR_18->vdev.entity);
 FUNC_3(&VAR_18->lock);
 return VAR_24;
}
