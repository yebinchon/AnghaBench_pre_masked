
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct pxp_dev {int dev_mutex; int num_inst; int m2m_dev; } ;
struct TYPE_6__ {int m2m_ctx; struct v4l2_ctrl_handler* ctrl_handler; } ;
struct pxp_ctx {TYPE_2__ fh; int colorspace; TYPE_1__* q_data; struct v4l2_ctrl_handler hdl; struct pxp_dev* dev; } ;
struct file {TYPE_2__* private_data; } ;
struct TYPE_5__ {int width; int height; int sizeimage; int bytesperline; int * fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pxp_dev*,char*,struct pxp_ctx*,int ) ;
 int * VAR_9 ;
 int FUNC_4 (struct pxp_ctx*) ;
 struct pxp_ctx* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int VAR_10 ;
 int FUNC_9 (int *,int,int) ;
 int VAR_11 ;
 int FUNC_10 (struct v4l2_ctrl_handler*) ;
 int FUNC_11 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_12 (struct v4l2_ctrl_handler*) ;
 int FUNC_13 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (int ,struct pxp_ctx*,int *) ;
 int FUNC_18 (struct file*) ;
 struct pxp_dev* FUNC_19 (struct file*) ;

__attribute__((used)) static int FUNC_20(struct file *VAR_12)
{
 struct pxp_dev *VAR_13 = FUNC_19(VAR_12);
 struct pxp_ctx *VAR_14 = ((void*)0);
 struct v4l2_ctrl_handler *VAR_15;
 int VAR_16 = 0;

 if (FUNC_6(&VAR_13->dev_mutex))
  return -VAR_1;
 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_2);
 if (!VAR_14) {
  VAR_16 = -VAR_0;
  goto open_unlock;
 }

 FUNC_16(&VAR_14->fh, FUNC_18(VAR_12));
 VAR_12->private_data = &VAR_14->fh;
 VAR_14->dev = VAR_13;
 VAR_15 = &VAR_14->hdl;
 FUNC_11(VAR_15, 4);
 FUNC_13(VAR_15, &VAR_10, VAR_4, 0, 1, 1, 0);
 FUNC_13(VAR_15, &VAR_10, VAR_5, 0, 1, 1, 0);
 FUNC_13(VAR_15, &VAR_10, VAR_3,
     0, 255, 1, 255);
 if (VAR_15->error) {
  VAR_16 = VAR_15->error;
  FUNC_10(VAR_15);
  FUNC_4(VAR_14);
  goto open_unlock;
 }
 VAR_14->fh.ctrl_handler = VAR_15;
 FUNC_12(VAR_15);

 VAR_14->q_data[VAR_8].fmt = &VAR_9[0];
 VAR_14->q_data[VAR_8].width = 640;
 VAR_14->q_data[VAR_8].height = 480;
 VAR_14->q_data[VAR_8].bytesperline =
  FUNC_8(&VAR_9[0], 640);
 VAR_14->q_data[VAR_8].sizeimage =
  FUNC_9(&VAR_9[0], 640, 480);
 VAR_14->q_data[VAR_7] = VAR_14->q_data[VAR_8];
 VAR_14->colorspace = VAR_6;

 VAR_14->fh.m2m_ctx = FUNC_17(VAR_13->m2m_dev, VAR_14, &VAR_11);

 if (FUNC_0(VAR_14->fh.m2m_ctx)) {
  VAR_16 = FUNC_1(VAR_14->fh.m2m_ctx);

  FUNC_10(VAR_15);
  FUNC_15(&VAR_14->fh);
  FUNC_4(VAR_14);
  goto open_unlock;
 }

 FUNC_14(&VAR_14->fh);
 FUNC_2(&VAR_13->num_inst);

 FUNC_3(VAR_13, "Created instance: %p, m2m_ctx: %p\n",
  VAR_14, VAR_14->fh.m2m_ctx);

open_unlock:
 FUNC_7(&VAR_13->dev_mutex);
 return VAR_16;
}
