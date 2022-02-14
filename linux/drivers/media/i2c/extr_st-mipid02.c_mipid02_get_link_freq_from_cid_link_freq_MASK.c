
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int ctrl_handler; } ;
struct v4l2_querymenu {int value; int index; int id; } ;
struct v4l2_ctrl {int dummy; } ;
struct mipid02_dev {int dummy; } ;


 int VAR_0 ;
 struct v4l2_ctrl* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (int ,struct v4l2_querymenu*) ;

__attribute__((used)) static u32 FUNC_3(struct mipid02_dev *VAR_1,
          struct v4l2_subdev *VAR_2)
{
 struct v4l2_querymenu VAR_3 = {.id = VAR_0, };
 struct v4l2_ctrl *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2->ctrl_handler, VAR_0);
 if (!VAR_4)
  return 0;
 VAR_3.index = FUNC_1(VAR_4);

 VAR_5 = FUNC_2(VAR_2->ctrl_handler, &VAR_3);
 if (VAR_5)
  return 0;

 return VAR_3.value;
}
