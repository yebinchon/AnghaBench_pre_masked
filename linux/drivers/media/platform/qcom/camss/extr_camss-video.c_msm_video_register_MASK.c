
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int device_caps; int entity; int name; int * lock; struct vb2_queue* queue; int vfl_dir; struct v4l2_device* v4l2_dev; int release; int * ioctl_ops; int * fops; } ;
struct vb2_queue {int io_modes; int buf_struct_size; int * lock; int dev; int timestamp_flags; int type; int * ops; int * mem_ops; struct camss_video* drv_priv; } ;
struct v4l2_device {int dev; } ;
struct media_pad {int flags; } ;
struct camss_video {int q_lock; struct vb2_queue vb2_q; int lock; TYPE_1__* camss; void* nformats; void* formats; struct video_device vdev; struct media_pad pad; } ;
struct camss_buffer {int dummy; } ;
struct TYPE_2__ {scalar_t__ version; int ref_count; int dev; } ;


 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,struct media_pad*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct camss_video*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char const*,int) ;
 int VAR_21 ;
 int FUNC_9 (struct vb2_queue*) ;
 int FUNC_10 (struct vb2_queue*) ;
 int FUNC_11 (struct video_device*,int ,int) ;
 int FUNC_12 (struct video_device*,struct camss_video*) ;

int FUNC_13(struct camss_video *VAR_22, struct v4l2_device *VAR_23,
         const char *VAR_24, int VAR_25)
{
 struct media_pad *VAR_26 = &VAR_22->pad;
 struct video_device *VAR_27;
 struct vb2_queue *VAR_28;
 int VAR_29;

 VAR_27 = &VAR_22->vdev;

 FUNC_7(&VAR_22->q_lock);

 VAR_28 = &VAR_22->vb2_q;
 VAR_28->drv_priv = VAR_22;
 VAR_28->mem_ops = &VAR_21;
 VAR_28->ops = &VAR_20;
 VAR_28->type = VAR_4;
 VAR_28->io_modes = VAR_8 | VAR_9 | VAR_10;
 VAR_28->timestamp_flags = VAR_3;
 VAR_28->buf_struct_size = sizeof(struct camss_buffer);
 VAR_28->dev = VAR_22->camss->dev;
 VAR_28->lock = &VAR_22->q_lock;
 VAR_29 = FUNC_9(VAR_28);
 if (VAR_29 < 0) {
  FUNC_2(VAR_23->dev, "Failed to init vb2 queue: %d\n", VAR_29);
  goto error_vb2_init;
 }

 VAR_26->flags = VAR_2;
 VAR_29 = FUNC_4(&VAR_27->entity, 1, VAR_26);
 if (VAR_29 < 0) {
  FUNC_2(VAR_23->dev, "Failed to init video entity: %d\n",
   VAR_29);
  goto error_media_init;
 }

 FUNC_7(&VAR_22->lock);

 if (VAR_22->camss->version == VAR_0) {
  if (VAR_25) {
   VAR_22->formats = VAR_13;
   VAR_22->nformats = FUNC_0(VAR_13);
  } else {
   VAR_22->formats = VAR_15;
   VAR_22->nformats = FUNC_0(VAR_15);
  }
 } else if (VAR_22->camss->version == VAR_1) {
  if (VAR_25) {
   VAR_22->formats = VAR_14;
   VAR_22->nformats = FUNC_0(VAR_14);
  } else {
   VAR_22->formats = VAR_16;
   VAR_22->nformats = FUNC_0(VAR_16);
  }
 } else {
  goto error_video_register;
 }

 VAR_29 = FUNC_5(VAR_22);
 if (VAR_29 < 0) {
  FUNC_2(VAR_23->dev, "Failed to init format: %d\n", VAR_29);
  goto error_video_register;
 }

 VAR_27->fops = &VAR_17;
 VAR_27->device_caps = VAR_7 | VAR_6 |
       VAR_5;
 VAR_27->ioctl_ops = &VAR_18;
 VAR_27->release = VAR_19;
 VAR_27->v4l2_dev = VAR_23;
 VAR_27->vfl_dir = VAR_11;
 VAR_27->queue = &VAR_22->vb2_q;
 VAR_27->lock = &VAR_22->lock;
 FUNC_8(VAR_27->name, VAR_24, sizeof(VAR_27->name));

 VAR_29 = FUNC_11(VAR_27, VAR_12, -1);
 if (VAR_29 < 0) {
  FUNC_2(VAR_23->dev, "Failed to register video device: %d\n",
   VAR_29);
  goto error_video_register;
 }

 FUNC_12(VAR_27, VAR_22);
 FUNC_1(&VAR_22->camss->ref_count);

 return 0;

error_video_register:
 FUNC_3(&VAR_27->entity);
 FUNC_6(&VAR_22->lock);
error_media_init:
 FUNC_10(&VAR_22->vb2_q);
error_vb2_init:
 FUNC_6(&VAR_22->q_lock);

 return VAR_29;
}
