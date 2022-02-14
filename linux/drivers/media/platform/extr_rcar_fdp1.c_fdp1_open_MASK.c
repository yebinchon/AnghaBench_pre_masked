
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int dummy; } ;
struct v4l2_ctrl {int flags; } ;
struct file {TYPE_1__* private_data; } ;
struct fdp1_dev {int dev_mutex; int dev; int m2m_dev; } ;
struct TYPE_8__ {int m2m_ctx; TYPE_3__* ctrl_handler; } ;
struct TYPE_9__ {int error; } ;
struct fdp1_ctx {int translen; TYPE_1__ fh; TYPE_3__ hdl; scalar_t__ sequence; int fields_queue; struct fdp1_dev* fdp1; } ;
typedef int format ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct fdp1_dev*,char*,struct fdp1_ctx*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct fdp1_ctx*,struct v4l2_pix_format_mplane*,int ) ;
 int FUNC_6 (struct fdp1_ctx*) ;
 struct fdp1_ctx* FUNC_7 (int,int ) ;
 int FUNC_8 (struct v4l2_pix_format_mplane*,int ,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int VAR_12 ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (TYPE_3__*) ;
 struct v4l2_ctrl* FUNC_15 (TYPE_3__*,int *,int ,int,int,int,int) ;
 int FUNC_16 (TYPE_3__*,int *,int ,int ,int ,int ,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 (int ,struct fdp1_ctx*,int *) ;
 int FUNC_20 (struct file*) ;
 struct fdp1_dev* FUNC_21 (struct file*) ;

__attribute__((used)) static int FUNC_22(struct file *VAR_13)
{
 struct fdp1_dev *VAR_14 = FUNC_21(VAR_13);
 struct v4l2_pix_format_mplane VAR_15;
 struct fdp1_ctx *VAR_16 = ((void*)0);
 struct v4l2_ctrl *VAR_17;
 int VAR_18 = 0;

 if (FUNC_9(&VAR_14->dev_mutex))
  return -VAR_1;

 VAR_16 = FUNC_7(sizeof(*VAR_16), VAR_4);
 if (!VAR_16) {
  VAR_18 = -VAR_0;
  goto done;
 }

 FUNC_18(&VAR_16->fh, FUNC_20(VAR_13));
 VAR_13->private_data = &VAR_16->fh;
 VAR_16->fdp1 = VAR_14;


 FUNC_1(&VAR_16->fields_queue);

 VAR_16->translen = 1;
 VAR_16->sequence = 0;



 FUNC_13(&VAR_16->hdl, 3);
 FUNC_16(&VAR_16->hdl, &VAR_11,
         VAR_7,
         VAR_3, FUNC_0(0), VAR_2,
         VAR_10);

 VAR_17 = FUNC_15(&VAR_16->hdl, &VAR_11,
     VAR_8, 1, 2, 1, 1);
 if (VAR_17)
  VAR_17->flags |= VAR_9;

 FUNC_15(&VAR_16->hdl, &VAR_11,
     VAR_6, 0, 255, 1, 255);

 if (VAR_16->hdl.error) {
  VAR_18 = VAR_16->hdl.error;
  FUNC_12(&VAR_16->hdl);
  FUNC_6(VAR_16);
  goto done;
 }

 VAR_16->fh.ctrl_handler = &VAR_16->hdl;
 FUNC_14(&VAR_16->hdl);


 FUNC_8(&VAR_15, 0, sizeof(VAR_15));
 FUNC_5(VAR_16, &VAR_15, VAR_5);

 VAR_16->fh.m2m_ctx = FUNC_19(VAR_14->m2m_dev, VAR_16, &VAR_12);

 if (FUNC_2(VAR_16->fh.m2m_ctx)) {
  VAR_18 = FUNC_3(VAR_16->fh.m2m_ctx);

  FUNC_12(&VAR_16->hdl);
  FUNC_6(VAR_16);
  goto done;
 }


 FUNC_11(VAR_14->dev);

 FUNC_17(&VAR_16->fh);

 FUNC_4(VAR_14, "Created instance: %p, m2m_ctx: %p\n",
  VAR_16, VAR_16->fh.m2m_ctx);

done:
 FUNC_10(&VAR_14->dev_mutex);
 return VAR_18;
}
