
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int function; } ;
struct video_device {int minor; int device_caps; int io_modes; int buf_struct_size; TYPE_7__ entity; int * ctrl_handler; int name; int * dev; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct fimc_ctx* drv_priv; int type; struct video_device* queue; int release; struct v4l2_device* v4l2_dev; int * ioctl_ops; int * fops; } ;
struct vb2_queue {int minor; int device_caps; int io_modes; int buf_struct_size; TYPE_7__ entity; int * ctrl_handler; int name; int * dev; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct fimc_ctx* drv_priv; int type; struct vb2_queue* queue; int release; struct v4l2_device* v4l2_dev; int * ioctl_ops; int * fops; } ;
struct v4l2_device {int dummy; } ;
struct TYPE_17__ {int flags; } ;
struct TYPE_14__ {int code; void* height; void* width; } ;
struct TYPE_10__ {struct video_device vdev; } ;
struct fimc_vid_cap {TYPE_8__ vd_pad; TYPE_5__ wb_fmt; TYPE_5__ ci_fmt; int active_buf_q; int pending_buf_q; struct fimc_ctx* ctx; scalar_t__ reqbufs_count; scalar_t__ active_buf_cnt; struct video_device vbq; TYPE_1__ ve; } ;
struct fimc_vid_buffer {int dummy; } ;
struct fimc_fmt {int mbus_code; } ;
struct fimc_dev {int id; TYPE_3__* pdev; int lock; struct fimc_vid_cap vid_cap; } ;
struct TYPE_15__ {int handler; } ;
struct TYPE_13__ {struct fimc_fmt* fmt; void* height; void* width; } ;
struct TYPE_11__ {struct fimc_fmt* fmt; } ;
struct fimc_ctx {TYPE_6__ ctrls; TYPE_4__ s_frame; TYPE_2__ d_frame; int state; int out_path; int in_path; struct fimc_dev* fimc_dev; } ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct fimc_ctx*) ;
 int FUNC_2 (struct fimc_ctx*) ;
 void* FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (struct fimc_ctx*) ;
 struct fimc_ctx* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,int,TYPE_8__*) ;
 int FUNC_8 (struct video_device*,int ,int) ;
 int FUNC_9 (int ,int,char*,int) ;
 int FUNC_10 (struct v4l2_device*,char*,int ,int ) ;
 int VAR_22 ;
 int FUNC_11 (struct video_device*) ;
 int FUNC_12 (struct video_device*) ;
 int VAR_23 ;
 int FUNC_13 (struct video_device*,int ,int) ;
 int FUNC_14 (struct video_device*,struct fimc_dev*) ;

__attribute__((used)) static int FUNC_15(struct fimc_dev *VAR_24,
     struct v4l2_device *VAR_25)
{
 struct video_device *VAR_26 = &VAR_24->vid_cap.ve.vdev;
 struct vb2_queue *VAR_27 = &VAR_24->vid_cap.vbq;
 struct fimc_ctx *VAR_28;
 struct fimc_vid_cap *VAR_29;
 struct fimc_fmt *VAR_30;
 int VAR_31 = -VAR_0;

 VAR_28 = FUNC_5(sizeof(*VAR_28), VAR_8);
 if (!VAR_28)
  return -VAR_0;

 VAR_28->fimc_dev = VAR_24;
 VAR_28->in_path = VAR_4;
 VAR_28->out_path = VAR_5;
 VAR_28->state = VAR_1;
 VAR_28->s_frame.fmt = FUNC_3(((void*)0), ((void*)0), VAR_6, 0);
 VAR_28->d_frame.fmt = VAR_28->s_frame.fmt;

 FUNC_8(VAR_26, 0, sizeof(*VAR_26));
 FUNC_9(VAR_26->name, sizeof(VAR_26->name), "fimc.%d.capture", VAR_24->id);

 VAR_26->fops = &VAR_19;
 VAR_26->ioctl_ops = &VAR_20;
 VAR_26->v4l2_dev = VAR_25;
 VAR_26->minor = -1;
 VAR_26->release = VAR_23;
 VAR_26->queue = VAR_27;
 VAR_26->lock = &VAR_24->lock;
 VAR_26->device_caps = VAR_13 | VAR_14;

 FUNC_14(VAR_26, VAR_24);
 VAR_29 = &VAR_24->vid_cap;
 VAR_29->active_buf_cnt = 0;
 VAR_29->reqbufs_count = 0;
 VAR_29->ctx = VAR_28;

 FUNC_0(&VAR_29->pending_buf_q);
 FUNC_0(&VAR_29->active_buf_q);

 FUNC_8(VAR_27, 0, sizeof(*VAR_27));
 VAR_27->type = VAR_12;
 VAR_27->io_modes = VAR_16 | VAR_17 | VAR_15;
 VAR_27->drv_priv = VAR_28;
 VAR_27->ops = &VAR_21;
 VAR_27->mem_ops = &VAR_22;
 VAR_27->buf_struct_size = sizeof(struct fimc_vid_buffer);
 VAR_27->timestamp_flags = VAR_11;
 VAR_27->lock = &VAR_24->lock;
 VAR_27->dev = &VAR_24->pdev->dev;

 VAR_31 = FUNC_11(VAR_27);
 if (VAR_31)
  goto err_free_ctx;


 VAR_30 = FUNC_3(((void*)0), ((void*)0), VAR_6, 0);
 VAR_29->ci_fmt.width = VAR_3;
 VAR_29->ci_fmt.height = VAR_2;
 VAR_29->ci_fmt.code = VAR_30->mbus_code;

 VAR_28->s_frame.width = VAR_3;
 VAR_28->s_frame.height = VAR_2;
 VAR_28->s_frame.fmt = VAR_30;

 VAR_30 = FUNC_3(((void*)0), ((void*)0), VAR_7, 0);
 VAR_29->wb_fmt = VAR_29->ci_fmt;
 VAR_29->wb_fmt.code = VAR_30->mbus_code;

 VAR_29->vd_pad.flags = VAR_10;
 VAR_26->entity.function = VAR_9;
 VAR_31 = FUNC_7(&VAR_26->entity, 1, &VAR_29->vd_pad);
 if (VAR_31)
  goto err_free_ctx;

 VAR_31 = FUNC_1(VAR_28);
 if (VAR_31)
  goto err_me_cleanup;

 VAR_31 = FUNC_13(VAR_26, VAR_18, -1);
 if (VAR_31)
  goto err_ctrl_free;

 FUNC_10(VAR_25, "Registered %s as /dev/%s\n",
    VAR_26->name, FUNC_12(VAR_26));

 VAR_26->ctrl_handler = &VAR_28->ctrls.handler;
 return 0;

err_ctrl_free:
 FUNC_2(VAR_28);
err_me_cleanup:
 FUNC_6(&VAR_26->entity);
err_free_ctx:
 FUNC_4(VAR_28);
 return VAR_31;
}
