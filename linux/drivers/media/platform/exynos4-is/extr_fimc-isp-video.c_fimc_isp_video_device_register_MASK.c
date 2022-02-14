
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct video_device {int type; int io_modes; int buf_struct_size; int minor; int device_caps; int name; int entity; int * lock; int release; struct v4l2_device* v4l2_dev; int * ioctl_ops; int * fops; struct video_device* queue; int * dev; int timestamp_flags; struct fimc_isp* drv_priv; int * mem_ops; int * ops; } ;
struct vb2_queue {int type; int io_modes; int buf_struct_size; int minor; int device_caps; int name; int entity; int * lock; int release; struct v4l2_device* v4l2_dev; int * ioctl_ops; int * fops; struct vb2_queue* queue; int * dev; int timestamp_flags; struct fimc_isp* drv_priv; int * mem_ops; int * ops; } ;
struct v4l2_device {int dummy; } ;
struct isp_video_buf {int dummy; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {struct video_device vdev; } ;
struct TYPE_6__ {int colorspace; int pixelformat; int height; int width; } ;
struct fimc_is_video {TYPE_4__ pad; TYPE_3__ ve; scalar_t__ reqbufs_count; TYPE_1__ pixfmt; TYPE_5__* format; int active_buf_q; int pending_buf_q; struct video_device vb_queue; } ;
struct fimc_isp {int video_lock; TYPE_2__* pdev; struct fimc_is_video video_capture; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_10__ {int fourcc; } ;
struct TYPE_7__ {int dev; } ;


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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_5__* FUNC_1 (int *,int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,TYPE_4__*) ;
 int FUNC_4 (struct video_device*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct v4l2_device*,char*,int ,int ) ;
 int VAR_15 ;
 int FUNC_8 (struct video_device*) ;
 int FUNC_9 (struct video_device*) ;
 int VAR_16 ;
 int FUNC_10 (struct video_device*,int ,int) ;
 int FUNC_11 (struct video_device*,struct fimc_isp*) ;

int FUNC_12(struct fimc_isp *VAR_17,
       struct v4l2_device *VAR_18,
       enum v4l2_buf_type VAR_19)
{
 struct vb2_queue *VAR_20 = &VAR_17->video_capture.vb_queue;
 struct fimc_is_video *VAR_21;
 struct video_device *VAR_22;
 int VAR_23;

 if (VAR_19 == VAR_5)
  VAR_21 = &VAR_17->video_capture;
 else
  return -VAR_0;

 FUNC_5(&VAR_17->video_lock);
 FUNC_0(&VAR_21->pending_buf_q);
 FUNC_0(&VAR_21->active_buf_q);
 VAR_21->format = FUNC_1(((void*)0), ((void*)0), 0);
 VAR_21->pixfmt.width = VAR_2;
 VAR_21->pixfmt.height = VAR_1;
 VAR_21->pixfmt.pixelformat = VAR_21->format->fourcc;
 VAR_21->pixfmt.colorspace = VAR_8;
 VAR_21->reqbufs_count = 0;

 FUNC_4(VAR_20, 0, sizeof(*VAR_20));
 VAR_20->type = VAR_19;
 VAR_20->io_modes = VAR_9 | VAR_10;
 VAR_20->ops = &VAR_12;
 VAR_20->mem_ops = &VAR_15;
 VAR_20->buf_struct_size = sizeof(struct isp_video_buf);
 VAR_20->drv_priv = VAR_17;
 VAR_20->timestamp_flags = VAR_4;
 VAR_20->lock = &VAR_17->video_lock;
 VAR_20->dev = &VAR_17->pdev->dev;

 VAR_23 = FUNC_8(VAR_20);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_22 = &VAR_21->ve.vdev;
 FUNC_4(VAR_22, 0, sizeof(*VAR_22));
 FUNC_6(VAR_22->name, "fimc-is-isp.capture", sizeof(VAR_22->name));
 VAR_22->queue = VAR_20;
 VAR_22->fops = &VAR_13;
 VAR_22->ioctl_ops = &VAR_14;
 VAR_22->v4l2_dev = VAR_18;
 VAR_22->minor = -1;
 VAR_22->release = VAR_16;
 VAR_22->lock = &VAR_17->video_lock;
 VAR_22->device_caps = VAR_6 | VAR_7;

 VAR_21->pad.flags = VAR_3;
 VAR_23 = FUNC_3(&VAR_22->entity, 1, &VAR_21->pad);
 if (VAR_23 < 0)
  return VAR_23;

 FUNC_11(VAR_22, VAR_17);

 VAR_23 = FUNC_10(VAR_22, VAR_11, -1);
 if (VAR_23 < 0) {
  FUNC_2(&VAR_22->entity);
  return VAR_23;
 }

 FUNC_7(VAR_18, "Registered %s as /dev/%s\n",
    VAR_22->name, FUNC_9(VAR_22));

 return 0;
}
