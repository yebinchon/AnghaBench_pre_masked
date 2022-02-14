
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct video_device {int minor; int io_modes; int buf_struct_size; int device_caps; int entity; int name; TYPE_3__* ctrl_handler; int dev; int * lock; int timestamp_flags; struct camif_vp* drv_priv; int * mem_ops; int * ops; int type; int release; TYPE_2__* v4l2_dev; int * ioctl_ops; int * fops; } ;
struct vb2_queue {int minor; int io_modes; int buf_struct_size; int device_caps; int entity; int name; TYPE_3__* ctrl_handler; int dev; int * lock; int timestamp_flags; struct camif_vp* drv_priv; int * mem_ops; int * ops; int type; int release; TYPE_2__* v4l2_dev; int * ioctl_ops; int * fops; } ;
struct v4l2_ctrl {struct camif_vp* priv; } ;
struct TYPE_9__ {int error; } ;
struct TYPE_10__ {int flags; } ;
struct camif_vp {scalar_t__ id; TYPE_3__ ctrl_handler; TYPE_6__ pad; TYPE_1__* camif; int active_buf_q; int pending_buf_q; scalar_t__ reqbufs_count; struct video_device vdev; struct video_device vb_queue; } ;
struct TYPE_8__ {int dev; } ;
struct camif_dev {TYPE_2__ v4l2_dev; int lock; struct camif_vp* vp; } ;
struct camif_buffer {int dummy; } ;
struct TYPE_7__ {int lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,TYPE_6__*) ;
 int FUNC_3 (struct video_device*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int,char*,char*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 struct v4l2_ctrl* FUNC_7 (TYPE_3__*,int *,int ,int ,int,int,int ) ;
 int FUNC_8 (TYPE_2__*,char*,int ,int ) ;
 int VAR_14 ;
 int FUNC_9 (struct video_device*) ;
 int FUNC_10 (struct video_device*) ;
 int FUNC_11 (struct video_device*) ;
 int VAR_15 ;
 int FUNC_12 (struct video_device*,int ,int) ;
 int FUNC_13 (struct video_device*,struct camif_vp*) ;

int FUNC_14(struct camif_dev *VAR_16, int VAR_17)
{
 struct camif_vp *VAR_18 = &VAR_16->vp[VAR_17];
 struct vb2_queue *VAR_19 = &VAR_18->vb_queue;
 struct video_device *VAR_20 = &VAR_18->vdev;
 struct v4l2_ctrl *VAR_21;
 int VAR_22;

 FUNC_3(VAR_20, 0, sizeof(*VAR_20));
 FUNC_4(VAR_20->name, sizeof(VAR_20->name), "camif-%s",
   VAR_18->id == 0 ? "codec" : "preview");

 VAR_20->fops = &VAR_10;
 VAR_20->ioctl_ops = &VAR_11;
 VAR_20->v4l2_dev = &VAR_16->v4l2_dev;
 VAR_20->minor = -1;
 VAR_20->release = VAR_15;
 VAR_20->lock = &VAR_16->lock;
 VAR_18->reqbufs_count = 0;

 FUNC_0(&VAR_18->pending_buf_q);
 FUNC_0(&VAR_18->active_buf_q);

 FUNC_3(VAR_19, 0, sizeof(*VAR_19));
 VAR_19->type = VAR_2;
 VAR_19->io_modes = VAR_7 | VAR_8;
 VAR_19->ops = &VAR_12;
 VAR_19->mem_ops = &VAR_14;
 VAR_19->buf_struct_size = sizeof(struct camif_buffer);
 VAR_19->drv_priv = VAR_18;
 VAR_19->timestamp_flags = VAR_1;
 VAR_19->lock = &VAR_18->camif->lock;
 VAR_19->dev = VAR_16->v4l2_dev.dev;

 VAR_22 = FUNC_9(VAR_19);
 if (VAR_22)
  goto err_vd_rel;

 VAR_18->pad.flags = VAR_0;
 VAR_22 = FUNC_2(&VAR_20->entity, 1, &VAR_18->pad);
 if (VAR_22)
  goto err_vd_rel;

 FUNC_13(VAR_20, VAR_18);

 FUNC_6(&VAR_18->ctrl_handler, 1);
 VAR_21 = FUNC_7(&VAR_18->ctrl_handler, &VAR_13,
     VAR_5, 0, 1, 1, 0);
 if (VAR_21)
  VAR_21->priv = VAR_18;
 VAR_21 = FUNC_7(&VAR_18->ctrl_handler, &VAR_13,
     VAR_6, 0, 1, 1, 0);
 if (VAR_21)
  VAR_21->priv = VAR_18;

 VAR_22 = VAR_18->ctrl_handler.error;
 if (VAR_22 < 0)
  goto err_me_cleanup;

 VAR_20->ctrl_handler = &VAR_18->ctrl_handler;
 VAR_20->device_caps = VAR_3 | VAR_4;

 VAR_22 = FUNC_12(VAR_20, VAR_9, -1);
 if (VAR_22)
  goto err_ctrlh_free;

 FUNC_8(&VAR_16->v4l2_dev, "registered %s as /dev/%s\n",
    VAR_20->name, FUNC_10(VAR_20));
 return 0;

err_ctrlh_free:
 FUNC_5(&VAR_18->ctrl_handler);
err_me_cleanup:
 FUNC_1(&VAR_20->entity);
err_vd_rel:
 FUNC_11(VAR_20);
 return VAR_22;
}
