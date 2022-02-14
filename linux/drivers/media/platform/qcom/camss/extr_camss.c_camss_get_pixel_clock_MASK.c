
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int ctrl_handler; } ;
struct v4l2_ctrl {int dummy; } ;
struct media_entity {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct media_entity* FUNC_0 (struct media_entity*) ;
 struct v4l2_subdev* FUNC_1 (struct media_entity*) ;
 struct v4l2_ctrl* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct v4l2_ctrl*) ;

int FUNC_4(struct media_entity *VAR_3, u32 *VAR_4)
{
 struct media_entity *VAR_5;
 struct v4l2_subdev *VAR_6;
 struct v4l2_ctrl *VAR_7;

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_5);

 VAR_7 = FUNC_2(VAR_6->ctrl_handler, VAR_2);

 if (!VAR_7)
  return -VAR_0;

 *VAR_4 = FUNC_3(VAR_7);

 return 0;
}
