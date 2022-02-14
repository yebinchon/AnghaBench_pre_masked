
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int use_count; } ;
struct TYPE_4__ {TYPE_3__ entity; } ;
struct exynos_video_entity {TYPE_1__ vdev; } ;
struct fimc_vid_cap {int inh_sensor_ctrls; int ctx; scalar_t__ user_subdev_api; struct exynos_video_entity ve; } ;
struct fimc_dev {int lock; TYPE_2__* pdev; int state; struct fimc_vid_cap vid_cap; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct fimc_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct fimc_dev*) ;
 int FUNC_6 (struct exynos_video_entity*) ;
 int FUNC_7 (struct exynos_video_entity*) ;
 int FUNC_8 (struct exynos_video_entity*,int ,TYPE_3__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_3 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct file*) ;
 int FUNC_16 (struct file*) ;
 int FUNC_17 (struct file*) ;
 struct fimc_dev* FUNC_18 (struct file*) ;

__attribute__((used)) static int FUNC_19(struct file *VAR_4)
{
 struct fimc_dev *VAR_5 = FUNC_18(VAR_4);
 struct fimc_vid_cap *VAR_6 = &VAR_5->vid_cap;
 struct exynos_video_entity *VAR_7 = &VAR_6->ve;
 int VAR_8 = -VAR_0;

 FUNC_1("pid: %d, state: 0x%lx", FUNC_14(VAR_2), VAR_5->state);

 FUNC_9(&VAR_5->lock);

 if (FUNC_5(VAR_5))
  goto unlock;

 FUNC_13(VAR_1, &VAR_5->state);
 VAR_8 = FUNC_11(&VAR_5->pdev->dev);
 if (VAR_8 < 0)
  goto unlock;

 VAR_8 = FUNC_16(VAR_4);
 if (VAR_8) {
  FUNC_12(&VAR_5->pdev->dev);
  goto unlock;
 }

 if (FUNC_15(VAR_4)) {
  FUNC_6(VAR_7);

  VAR_8 = FUNC_8(VAR_7, VAR_3, &VAR_7->vdev.entity, 1);

  if (VAR_8 == 0 && VAR_6->user_subdev_api && VAR_6->inh_sensor_ctrls) {




   FUNC_4(VAR_6->ctx);

   VAR_8 = FUNC_3(VAR_6->ctx);
   if (VAR_8 == 0)
    VAR_6->inh_sensor_ctrls = 0;
  }
  if (VAR_8 == 0)
   VAR_7->vdev.entity.use_count++;

  FUNC_7(VAR_7);

  if (VAR_8 == 0)
   VAR_8 = FUNC_2(VAR_5);

  if (VAR_8 < 0) {
   FUNC_0(VAR_1, &VAR_5->state);
   FUNC_12(&VAR_5->pdev->dev);
   FUNC_17(VAR_4);
  }
 }
unlock:
 FUNC_10(&VAR_5->lock);
 return VAR_8;
}
