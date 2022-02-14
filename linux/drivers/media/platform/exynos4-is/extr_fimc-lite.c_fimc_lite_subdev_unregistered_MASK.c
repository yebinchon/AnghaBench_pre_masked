
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_5__ {int entity; } ;
struct TYPE_4__ {int * pipe; TYPE_2__ vdev; } ;
struct fimc_lite {int lock; TYPE_1__ ve; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fimc_lite* FUNC_3 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct v4l2_subdev *VAR_0)
{
 struct fimc_lite *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(&VAR_1->lock);

 if (FUNC_4(&VAR_1->ve.vdev)) {
  FUNC_5(&VAR_1->ve.vdev);
  FUNC_0(&VAR_1->ve.vdev.entity);
  VAR_1->ve.pipe = ((void*)0);
 }

 FUNC_2(&VAR_1->lock);
}
