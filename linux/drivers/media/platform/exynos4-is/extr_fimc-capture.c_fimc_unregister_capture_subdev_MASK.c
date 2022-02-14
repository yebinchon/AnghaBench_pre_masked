
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int entity; } ;
struct TYPE_2__ {struct v4l2_subdev subdev; } ;
struct fimc_dev {TYPE_1__ vid_cap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,int *) ;

void FUNC_3(struct fimc_dev *VAR_0)
{
 struct v4l2_subdev *VAR_1 = &VAR_0->vid_cap.subdev;

 FUNC_1(VAR_1);
 FUNC_0(&VAR_1->entity);
 FUNC_2(VAR_1, ((void*)0));
}
