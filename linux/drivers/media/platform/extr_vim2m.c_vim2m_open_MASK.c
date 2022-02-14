
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct vim2m_dev {int dev_mutex; int num_inst; int m2m_dev; } ;
struct TYPE_11__ {int m2m_ctx; struct v4l2_ctrl_handler* ctrl_handler; } ;
struct v4l2_ctrl_handler {int error; } ;
struct vim2m_ctx {TYPE_4__ fh; int work_run; int irqlock; int vb_mutex; int colorspace; TYPE_1__* q_data; struct v4l2_ctrl_handler hdl; struct vim2m_dev* dev; } ;
struct file {TYPE_4__* private_data; } ;
struct TYPE_12__ {int depth; } ;
struct TYPE_10__ {int def; } ;
struct TYPE_9__ {int width; int height; int sizeimage; TYPE_8__* fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct vim2m_dev*,int,char*,struct vim2m_ctx*,int ) ;
 TYPE_8__* VAR_10 ;
 int FUNC_5 (struct vim2m_ctx*) ;
 struct vim2m_ctx* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct v4l2_ctrl_handler*) ;
 int FUNC_12 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_13 (struct v4l2_ctrl_handler*) ;
 int FUNC_14 (struct v4l2_ctrl_handler*,TYPE_2__*,int *) ;
 int FUNC_15 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int ) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 int FUNC_19 (int ,struct vim2m_ctx*,int *) ;
 int FUNC_20 (struct file*) ;
 struct vim2m_dev* FUNC_21 (struct file*) ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;
 TYPE_2__ VAR_14 ;

__attribute__((used)) static int FUNC_22(struct file *VAR_15)
{
 struct vim2m_dev *VAR_16 = FUNC_21(VAR_15);
 struct vim2m_ctx *VAR_17 = ((void*)0);
 struct v4l2_ctrl_handler *VAR_18;
 int VAR_19 = 0;

 if (FUNC_8(&VAR_16->dev_mutex))
  return -VAR_1;
 VAR_17 = FUNC_6(sizeof(*VAR_17), VAR_2);
 if (!VAR_17) {
  VAR_19 = -VAR_0;
  goto open_unlock;
 }

 FUNC_18(&VAR_17->fh, FUNC_20(VAR_15));
 VAR_15->private_data = &VAR_17->fh;
 VAR_17->dev = VAR_16;
 VAR_18 = &VAR_17->hdl;
 FUNC_12(VAR_18, 4);
 FUNC_15(VAR_18, &VAR_12, VAR_3, 0, 1, 1, 0);
 FUNC_15(VAR_18, &VAR_12, VAR_4, 0, 1, 1, 0);

 VAR_14.def = VAR_8;
 FUNC_14(VAR_18, &VAR_14, ((void*)0));
 FUNC_14(VAR_18, &VAR_13, ((void*)0));
 if (VAR_18->error) {
  VAR_19 = VAR_18->error;
  FUNC_11(VAR_18);
  FUNC_5(VAR_17);
  goto open_unlock;
 }
 VAR_17->fh.ctrl_handler = VAR_18;
 FUNC_13(VAR_18);

 VAR_17->q_data[VAR_7].fmt = &VAR_10[0];
 VAR_17->q_data[VAR_7].width = 640;
 VAR_17->q_data[VAR_7].height = 480;
 VAR_17->q_data[VAR_7].sizeimage =
  VAR_17->q_data[VAR_7].width *
  VAR_17->q_data[VAR_7].height *
  (VAR_17->q_data[VAR_7].fmt->depth >> 3);
 VAR_17->q_data[VAR_6] = VAR_17->q_data[VAR_7];
 VAR_17->colorspace = VAR_5;

 VAR_17->fh.m2m_ctx = FUNC_19(VAR_16->m2m_dev, VAR_17, &VAR_11);

 FUNC_7(&VAR_17->vb_mutex);
 FUNC_10(&VAR_17->irqlock);
 FUNC_0(&VAR_17->work_run, VAR_9);

 if (FUNC_1(VAR_17->fh.m2m_ctx)) {
  VAR_19 = FUNC_2(VAR_17->fh.m2m_ctx);

  FUNC_11(VAR_18);
  FUNC_17(&VAR_17->fh);
  FUNC_5(VAR_17);
  goto open_unlock;
 }

 FUNC_16(&VAR_17->fh);
 FUNC_3(&VAR_16->num_inst);

 FUNC_4(VAR_16, 1, "Created instance: %p, m2m_ctx: %p\n",
  VAR_17, VAR_17->fh.m2m_ctx);

open_unlock:
 FUNC_9(&VAR_16->dev_mutex);
 return VAR_19;
}
