
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct camif_dev {int ctrl_handler; struct v4l2_subdev subdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int * FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,int *) ;

void FUNC_5(struct camif_dev *VAR_0)
{
 struct v4l2_subdev *VAR_1 = &VAR_0->subdev;


 if (FUNC_3(VAR_1) == ((void*)0))
  return;

 FUNC_2(VAR_1);
 FUNC_0(&VAR_1->entity);
 FUNC_1(&VAR_0->ctrl_handler);
 FUNC_4(VAR_1, ((void*)0));
}
