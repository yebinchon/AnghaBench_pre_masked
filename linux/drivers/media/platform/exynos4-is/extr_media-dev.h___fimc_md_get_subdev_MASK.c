
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct fimc_pipeline {struct v4l2_subdev** subdevs; } ;
struct exynos_media_pipeline {int dummy; } ;


 unsigned int VAR_0 ;
 struct fimc_pipeline* FUNC_0 (struct exynos_media_pipeline*) ;

__attribute__((used)) static inline struct v4l2_subdev *FUNC_1(
    struct exynos_media_pipeline *VAR_1,
    unsigned int VAR_2)
{
 struct fimc_pipeline *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3 || VAR_2 >= VAR_0)
  return ((void*)0);
 else
  return VAR_3->subdevs[VAR_2];
}
