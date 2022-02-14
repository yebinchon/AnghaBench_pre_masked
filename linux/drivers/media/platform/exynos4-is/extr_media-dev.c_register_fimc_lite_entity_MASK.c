
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int grp_id; } ;
struct fimc_md {int v4l2_dev; struct fimc_lite** fimc_lite; } ;
struct fimc_lite {size_t index; struct v4l2_subdev subdev; } ;
struct exynos_media_pipeline {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct exynos_media_pipeline* FUNC_1 (struct fimc_md*) ;
 int FUNC_2 (int *,struct v4l2_subdev*) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (struct v4l2_subdev*,struct exynos_media_pipeline*) ;

__attribute__((used)) static int FUNC_5(struct fimc_md *VAR_4,
         struct fimc_lite *VAR_5)
{
 struct v4l2_subdev *VAR_6;
 struct exynos_media_pipeline *VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_5->index >= VAR_2 ||
      VAR_4->fimc_lite[VAR_5->index]))
  return -VAR_0;

 VAR_6 = &VAR_5->subdev;
 VAR_6->grp_id = VAR_3;

 VAR_7 = FUNC_1(VAR_4);
 if (!VAR_7)
  return -VAR_1;

 FUNC_4(VAR_6, VAR_7);

 VAR_8 = FUNC_2(&VAR_4->v4l2_dev, VAR_6);
 if (!VAR_8)
  VAR_4->fimc_lite[VAR_5->index] = VAR_5;
 else
  FUNC_3(&VAR_4->v4l2_dev, "Failed to register FIMC.LITE%d\n",
    VAR_5->index);
 return VAR_8;
}
