
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct mtk_vcodec_ctx {struct v4l2_ctrl_handler ctrl_hdl; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,int) ;
 struct v4l2_ctrl_ops VAR_17 ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int ,int ,int ) ;

int FUNC_5(struct mtk_vcodec_ctx *VAR_18)
{
 const struct v4l2_ctrl_ops *VAR_19 = &VAR_17;
 struct v4l2_ctrl_handler *VAR_20 = &VAR_18->ctrl_hdl;

 FUNC_1(VAR_20, VAR_0);

 FUNC_3(VAR_20, VAR_19, VAR_1,
   1, 4000000, 1, 4000000);
 FUNC_3(VAR_20, VAR_19, VAR_2,
   0, 2, 1, 0);
 FUNC_3(VAR_20, VAR_19, VAR_4,
   0, 1, 1, 1);
 FUNC_3(VAR_20, VAR_19, VAR_8,
   0, 51, 1, 51);
 FUNC_3(VAR_20, VAR_19, VAR_6,
   0, 65535, 1, 0);
 FUNC_3(VAR_20, VAR_19, VAR_5,
   0, 65535, 1, 0);
 FUNC_3(VAR_20, VAR_19, VAR_11,
   0, 1, 1, 0);
 FUNC_3(VAR_20, VAR_19, VAR_3,
   0, 0, 0, 0);
 FUNC_4(VAR_20, VAR_19,
   VAR_10,
   VAR_15,
   0, VAR_16);
 FUNC_4(VAR_20, VAR_19, VAR_9,
   VAR_14,
   0, VAR_14);
 FUNC_4(VAR_20, VAR_19, VAR_7,
   VAR_13,
   0, VAR_12);
 if (VAR_20->error) {
  FUNC_0("Init control handler fail %d",
    VAR_20->error);
  return VAR_20->error;
 }

 FUNC_2(&VAR_18->ctrl_hdl);

 return 0;
}
