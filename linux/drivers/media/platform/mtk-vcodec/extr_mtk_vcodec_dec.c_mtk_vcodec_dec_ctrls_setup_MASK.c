
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_ctrl {int flags; } ;
struct TYPE_5__ {int error; } ;
struct mtk_vcodec_ctx {TYPE_1__ ctrl_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 struct v4l2_ctrl* FUNC_3 (TYPE_1__*,int *,int ,int ,int,int,int) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int ,int ,int ) ;

int FUNC_5(struct mtk_vcodec_ctx *VAR_5)
{
 struct v4l2_ctrl *VAR_6;

 FUNC_1(&VAR_5->ctrl_hdl, 1);

 VAR_6 = FUNC_3(&VAR_5->ctrl_hdl,
    &VAR_4,
    VAR_0,
    0, 32, 1, 1);
 VAR_6->flags |= VAR_2;
 FUNC_4(&VAR_5->ctrl_hdl,
    &VAR_4,
    VAR_1,
    VAR_3,
    0, VAR_3);

 if (VAR_5->ctrl_hdl.error) {
  FUNC_0("Adding control failed %d",
    VAR_5->ctrl_hdl.error);
  return VAR_5->ctrl_hdl.error;
 }

 FUNC_2(&VAR_5->ctrl_hdl);
 return 0;
}
