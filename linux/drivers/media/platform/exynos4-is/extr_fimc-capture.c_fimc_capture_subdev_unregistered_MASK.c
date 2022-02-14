
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int entity; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int * pipe; struct video_device vdev; } ;
struct TYPE_4__ {int * ctx; TYPE_1__ ve; } ;
struct fimc_dev {int lock; TYPE_2__ vid_cap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fimc_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct fimc_dev* FUNC_6 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_7 (struct video_device*) ;
 int FUNC_8 (struct video_device*) ;

__attribute__((used)) static void FUNC_9(struct v4l2_subdev *VAR_0)
{
 struct fimc_dev *VAR_1 = FUNC_6(VAR_0);
 struct video_device *VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_4(&VAR_1->lock);

 FUNC_1(VAR_1);
 VAR_2 = &VAR_1->vid_cap.ve.vdev;

 if (FUNC_7(VAR_2)) {
  FUNC_8(VAR_2);
  FUNC_3(&VAR_2->entity);
  FUNC_0(VAR_1->vid_cap.ctx);
  VAR_1->vid_cap.ve.pipe = ((void*)0);
 }
 FUNC_2(VAR_1->vid_cap.ctx);
 VAR_1->vid_cap.ctx = ((void*)0);

 FUNC_5(&VAR_1->lock);
}
