
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_12__ {int io_modes; int buf_struct_size; int min_buffers_needed; int * dev; int * lock; scalar_t__ gfp_flags; struct tw5864_input* drv_priv; int * mem_ops; int * ops; int timestamp_flags; int type; } ;
struct TYPE_11__ {struct v4l2_ctrl_handler* ctrl_handler; TYPE_5__* queue; int * lock; int * v4l2_dev; } ;
struct tw5864_input {int qp; int gop; int frame_interval; int lock; TYPE_5__ vidq; int std; int v4l2_std; TYPE_2__ vdev; struct tw5864_dev* root; int md_threshold_grid_ctrl; int active; int slock; struct v4l2_ctrl_handler hdl; } ;
struct tw5864_dev {TYPE_1__* pci; int v4l2_dev; } ;
struct tw5864_buf {int dummy; } ;
struct TYPE_13__ {int min; int max; int step; int def; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_21 ;
 TYPE_7__ VAR_22 ;
 int VAR_23 ;
 TYPE_2__ VAR_24 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct v4l2_ctrl_handler*) ;
 int FUNC_9 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_10 (struct v4l2_ctrl_handler*) ;
 int FUNC_11 (struct v4l2_ctrl_handler*,TYPE_7__*,int *) ;
 int FUNC_12 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_13 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;
 int VAR_25 ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int ,int) ;
 int FUNC_18 (TYPE_2__*,struct tw5864_input*) ;

__attribute__((used)) static int FUNC_19(struct tw5864_input *VAR_26, int VAR_27)
{
 struct tw5864_dev *VAR_28 = VAR_26->root;
 int VAR_29;
 struct v4l2_ctrl_handler *VAR_30 = &VAR_26->hdl;

 FUNC_5(&VAR_26->lock);
 FUNC_6(&VAR_26->slock);


 FUNC_0(&VAR_26->active);
 VAR_26->vidq.type = VAR_5;
 VAR_26->vidq.timestamp_flags = VAR_4;
 VAR_26->vidq.io_modes = VAR_18 | VAR_19 | VAR_17;
 VAR_26->vidq.ops = &VAR_23;
 VAR_26->vidq.mem_ops = &VAR_25;
 VAR_26->vidq.drv_priv = VAR_26;
 VAR_26->vidq.gfp_flags = 0;
 VAR_26->vidq.buf_struct_size = sizeof(struct tw5864_buf);
 VAR_26->vidq.lock = &VAR_26->lock;
 VAR_26->vidq.min_buffers_needed = 2;
 VAR_26->vidq.dev = &VAR_26->root->pci->dev;
 VAR_29 = FUNC_14(&VAR_26->vidq);
 if (VAR_29)
  goto free_mutex;

 VAR_26->vdev = VAR_24;
 VAR_26->vdev.v4l2_dev = &VAR_26->root->v4l2_dev;
 VAR_26->vdev.lock = &VAR_26->lock;
 VAR_26->vdev.queue = &VAR_26->vidq;
 FUNC_18(&VAR_26->vdev, VAR_26);


 FUNC_9(VAR_30, 6);
 FUNC_12(VAR_30, &VAR_21,
     VAR_6, -128, 127, 1, 0);
 FUNC_12(VAR_30, &VAR_21,
     VAR_7, 0, 255, 1, 100);
 FUNC_12(VAR_30, &VAR_21,
     VAR_13, 0, 255, 1, 128);
 FUNC_12(VAR_30, &VAR_21, VAR_10, -128, 127, 1, 0);
 FUNC_12(VAR_30, &VAR_21, VAR_11,
     1, VAR_1, 1, VAR_0);
 FUNC_12(VAR_30, &VAR_21,
     VAR_12, 28, 51, 1, VAR_2);
 FUNC_13(VAR_30, &VAR_21,
          VAR_9,
          VAR_15, 0,
          VAR_14);
 FUNC_12(VAR_30, &VAR_21,
     VAR_8,
     VAR_22.min, VAR_22.max,
     VAR_22.step, VAR_22.def);
 VAR_26->md_threshold_grid_ctrl =
  FUNC_11(VAR_30, &VAR_22, ((void*)0));
 if (VAR_30->error) {
  VAR_29 = VAR_30->error;
  goto free_v4l2_hdl;
 }
 VAR_26->vdev.ctrl_handler = VAR_30;
 FUNC_10(VAR_30);

 VAR_26->qp = VAR_2;
 VAR_26->gop = VAR_0;
 VAR_26->frame_interval = 1;

 VAR_29 = FUNC_17(&VAR_26->vdev, VAR_20, VAR_27);
 if (VAR_29)
  goto free_v4l2_hdl;

 FUNC_3(&VAR_26->root->pci->dev, "Registered video device %s\n",
   FUNC_16(&VAR_26->vdev));





 VAR_26->v4l2_std = VAR_16;
 VAR_26->std = VAR_3;

 FUNC_7(FUNC_1(VAR_27), 0x07);

 FUNC_7(FUNC_2(VAR_27), 0xff);

 return 0;

free_v4l2_hdl:
 FUNC_8(VAR_30);
 FUNC_15(&VAR_26->vidq);
free_mutex:
 FUNC_4(&VAR_26->lock);

 return VAR_29;
}
