
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int grp_id; } ;
struct fimc_md {int v4l2_dev; int user_subdev_api; struct fimc_dev** fimc; int * pmf; } ;
struct TYPE_4__ {int user_subdev_api; struct v4l2_subdev subdev; } ;
struct fimc_dev {size_t id; TYPE_2__ vid_cap; TYPE_1__* pdev; } ;
struct exynos_media_pipeline {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct exynos_media_pipeline* FUNC_1 (struct fimc_md*) ;
 int FUNC_2 (int *,struct v4l2_subdev*) ;
 int FUNC_3 (int *,char*,size_t,int) ;
 int FUNC_4 (struct v4l2_subdev*,struct exynos_media_pipeline*) ;

__attribute__((used)) static int FUNC_5(struct fimc_md *VAR_4, struct fimc_dev *VAR_5)
{
 struct v4l2_subdev *VAR_6;
 struct exynos_media_pipeline *VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_5->id >= VAR_2 || VAR_4->fimc[VAR_5->id]))
  return -VAR_0;

 VAR_6 = &VAR_5->vid_cap.subdev;
 VAR_6->grp_id = VAR_3;

 VAR_7 = FUNC_1(VAR_4);
 if (!VAR_7)
  return -VAR_1;

 FUNC_4(VAR_6, VAR_7);

 VAR_8 = FUNC_2(&VAR_4->v4l2_dev, VAR_6);
 if (!VAR_8) {
  if (!VAR_4->pmf && VAR_5->pdev)
   VAR_4->pmf = &VAR_5->pdev->dev;
  VAR_4->fimc[VAR_5->id] = VAR_5;
  VAR_5->vid_cap.user_subdev_api = VAR_4->user_subdev_api;
 } else {
  FUNC_3(&VAR_4->v4l2_dev, "Failed to register FIMC.%d (%d)\n",
    VAR_5->id, VAR_8);
 }
 return VAR_8;
}
