
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct fimc_md {struct fimc_is* fimc_is; int v4l2_dev; } ;
struct TYPE_2__ {struct v4l2_subdev subdev; } ;
struct fimc_is {TYPE_1__ isp; } ;
struct exynos_media_pipeline {int dummy; } ;


 int VAR_0 ;
 struct exynos_media_pipeline* FUNC_0 (struct fimc_md*) ;
 int FUNC_1 (int *,struct v4l2_subdev*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct v4l2_subdev*,struct exynos_media_pipeline*) ;

__attribute__((used)) static int FUNC_4(struct fimc_md *VAR_1, struct fimc_is *VAR_2)
{
 struct v4l2_subdev *VAR_3 = &VAR_2->isp.subdev;
 struct exynos_media_pipeline *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_3, VAR_4);

 VAR_5 = FUNC_1(&VAR_1->v4l2_dev, VAR_3);
 if (VAR_5) {
  FUNC_2(&VAR_1->v4l2_dev,
    "Failed to register FIMC-ISP (%d)\n", VAR_5);
  return VAR_5;
 }

 VAR_1->fimc_is = VAR_2;
 return 0;
}
