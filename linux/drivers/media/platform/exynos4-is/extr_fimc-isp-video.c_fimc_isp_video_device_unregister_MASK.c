
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int entity; } ;
struct exynos_video_entity {int * pipe; TYPE_2__ vdev; } ;
struct TYPE_4__ {struct exynos_video_entity ve; } ;
struct fimc_isp {int video_lock; TYPE_1__ video_capture; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(struct fimc_isp *VAR_1,
          enum v4l2_buf_type VAR_2)
{
 struct exynos_video_entity *VAR_3;

 if (VAR_2 == VAR_0)
  VAR_3 = &VAR_1->video_capture.ve;
 else
  return;

 FUNC_1(&VAR_1->video_lock);

 if (FUNC_3(&VAR_3->vdev)) {
  FUNC_4(&VAR_3->vdev);
  FUNC_0(&VAR_3->vdev.entity);
  VAR_3->pipe = ((void*)0);
 }

 FUNC_2(&VAR_1->video_lock);
}
