
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ctrl_handler {int dummy; } ;
struct cal_dev {int * cc; TYPE_1__* pdev; } ;
struct TYPE_5__ {struct v4l2_ctrl_handler* ctrl_handler; int name; } ;
struct cal_ctx {int csi2_port; TYPE_2__ v4l2_dev; int cc; struct v4l2_ctrl_handler ctrl_handler; struct cal_dev* dev; } ;
struct TYPE_4__ {int dev; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cal_ctx*,char*) ;
 struct cal_ctx* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct cal_ctx*,int) ;
 int FUNC_3 (int ,int,char*,char*,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*) ;
 int FUNC_5 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static struct cal_ctx *FUNC_8(struct cal_dev *VAR_3, int VAR_4)
{
 struct cal_ctx *VAR_5;
 struct v4l2_ctrl_handler *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(&VAR_3->pdev->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return ((void*)0);


 VAR_5->dev = VAR_3;

 FUNC_3(VAR_5->v4l2_dev.name, sizeof(VAR_5->v4l2_dev.name),
   "%s-%03d", VAR_0, VAR_4);
 VAR_7 = FUNC_6(&VAR_3->pdev->dev, &VAR_5->v4l2_dev);
 if (VAR_7)
  goto err_exit;

 VAR_6 = &VAR_5->ctrl_handler;
 VAR_7 = FUNC_5(VAR_6, 11);
 if (VAR_7) {
  FUNC_0(VAR_5, "Failed to init ctrl handler\n");
  goto unreg_dev;
 }
 VAR_5->v4l2_dev.ctrl_handler = VAR_6;


 VAR_5->cc = VAR_3->cc[VAR_4];


 VAR_5->csi2_port = VAR_4 + 1;

 VAR_7 = FUNC_2(VAR_5, VAR_4);
 if (VAR_7) {
  VAR_7 = -VAR_1;
  goto free_hdl;
 }
 return VAR_5;

free_hdl:
 FUNC_4(VAR_6);
unreg_dev:
 FUNC_7(&VAR_5->v4l2_dev);
err_exit:
 return ((void*)0);
}
