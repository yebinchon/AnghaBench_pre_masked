
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int entity; } ;
struct TYPE_2__ {int handler; } ;
struct fimc_isp {TYPE_1__ ctrls; struct v4l2_subdev subdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,int *) ;

void FUNC_4(struct fimc_isp *VAR_0)
{
 struct v4l2_subdev *VAR_1 = &VAR_0->subdev;

 FUNC_2(VAR_1);
 FUNC_0(&VAR_1->entity);
 FUNC_1(&VAR_0->ctrls.handler);
 FUNC_3(VAR_1, ((void*)0));
}
