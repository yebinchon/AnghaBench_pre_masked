
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ use_count; } ;
struct video_device {TYPE_1__ entity; } ;
struct media_entity {int dummy; } ;
struct fimc_pipeline {int ** subdevs; } ;
struct exynos_video_entity {int pipe; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct media_entity*,int) ;
 struct video_device* FUNC_2 (struct media_entity*) ;
 int FUNC_3 (int **,int ,int) ;
 struct fimc_pipeline* FUNC_4 (int ) ;
 struct exynos_video_entity* FUNC_5 (struct video_device*) ;

__attribute__((used)) static int FUNC_6(struct media_entity *VAR_1, bool VAR_2)
{
 struct exynos_video_entity *VAR_3;
 struct fimc_pipeline *VAR_4;
 struct video_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5->entity.use_count == 0)
  return 0;

 VAR_3 = FUNC_5(VAR_5);
 VAR_4 = FUNC_4(VAR_3->pipe);




 if (!VAR_2 && VAR_4->subdevs[VAR_0] == ((void*)0))
  return 0;

 if (VAR_2)
  VAR_6 = FUNC_1(VAR_3->pipe, VAR_1, 1);
 else
  VAR_6 = FUNC_0(VAR_3->pipe);

 if (VAR_6 == 0 && !VAR_2)
  FUNC_3(VAR_4->subdevs, 0, sizeof(VAR_4->subdevs));

 return VAR_6;
}
