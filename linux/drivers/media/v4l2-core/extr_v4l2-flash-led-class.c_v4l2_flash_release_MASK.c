
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; int ctrl_handler; int fwnode; } ;
struct v4l2_flash {struct v4l2_subdev sd; } ;


 scalar_t__ FUNC_0 (struct v4l2_flash*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct v4l2_flash *VAR_0)
{
 struct v4l2_subdev *VAR_1;

 if (FUNC_0(VAR_0))
  return;

 VAR_1 = &VAR_0->sd;

 FUNC_3(VAR_1);

 FUNC_1(VAR_1->fwnode);

 FUNC_4(VAR_1->ctrl_handler);
 FUNC_2(&VAR_1->entity);
}
