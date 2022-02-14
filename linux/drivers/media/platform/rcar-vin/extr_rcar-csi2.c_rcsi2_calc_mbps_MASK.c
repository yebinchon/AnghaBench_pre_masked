
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct v4l2_subdev {int name; int ctrl_handler; } ;
struct v4l2_ctrl {int dummy; } ;
struct rcar_csi2 {int lanes; int dev; struct v4l2_subdev* remote; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int,int) ;
 struct v4l2_ctrl* FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_4(struct rcar_csi2 *VAR_3, unsigned int VAR_4)
{
 struct v4l2_subdev *VAR_5;
 struct v4l2_ctrl *VAR_6;
 u64 VAR_7;

 if (!VAR_3->remote)
  return -VAR_1;

 VAR_5 = VAR_3->remote;


 VAR_6 = FUNC_2(VAR_5->ctrl_handler, VAR_2);
 if (!VAR_6) {
  FUNC_0(VAR_3->dev, "no pixel rate control in subdev %s\n",
   VAR_5->name);
  return -VAR_0;
 }






 VAR_7 = FUNC_3(VAR_6) * VAR_4;
 FUNC_1(VAR_7, VAR_3->lanes * 1000000);

 return VAR_7;
}
