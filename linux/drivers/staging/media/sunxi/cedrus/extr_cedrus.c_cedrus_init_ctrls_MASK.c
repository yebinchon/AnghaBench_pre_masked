
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct v4l2_ctrl {int dummy; } ;
struct cedrus_dev {int v4l2_dev; } ;
struct TYPE_3__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct cedrus_ctx {TYPE_1__ fh; struct v4l2_ctrl** ctrls; struct v4l2_ctrl_handler hdl; } ;
typedef int ctrl ;
struct TYPE_4__ {int cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (struct v4l2_ctrl**) ;
 struct v4l2_ctrl** FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*) ;
 struct v4l2_ctrl* FUNC_5 (struct v4l2_ctrl_handler*,int *,int *) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct cedrus_dev *VAR_4, struct cedrus_ctx *VAR_5)
{
 struct v4l2_ctrl_handler *VAR_6 = &VAR_5->hdl;
 struct v4l2_ctrl *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 FUNC_3(VAR_6, VAR_0);
 if (VAR_6->error) {
  FUNC_6(&VAR_4->v4l2_dev,
    "Failed to initialize control handler\n");
  return VAR_6->error;
 }

 VAR_8 = sizeof(VAR_7) * VAR_0 + 1;

 VAR_5->ctrls = FUNC_1(VAR_8, VAR_2);
 if (!VAR_5->ctrls)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_7 = FUNC_5(VAR_6, &VAR_3[VAR_9].cfg,
         ((void*)0));
  if (VAR_6->error) {
   FUNC_6(&VAR_4->v4l2_dev,
     "Failed to create new custom control\n");

   FUNC_2(VAR_6);
   FUNC_0(VAR_5->ctrls);
   return VAR_6->error;
  }

  VAR_5->ctrls[VAR_9] = VAR_7;
 }

 VAR_5->fh.ctrl_handler = VAR_6;
 FUNC_4(VAR_6);

 return 0;
}
