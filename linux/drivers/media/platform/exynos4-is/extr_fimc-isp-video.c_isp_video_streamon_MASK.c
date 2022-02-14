
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct media_entity {int dummy; } ;
struct TYPE_4__ {struct media_entity entity; } ;
struct exynos_video_entity {TYPE_2__* pipe; TYPE_1__ vdev; } ;
struct TYPE_6__ {int streaming; struct exynos_video_entity ve; } ;
struct fimc_isp {TYPE_3__ video_capture; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_5__ {int mp; } ;


 int FUNC_0 (struct fimc_isp*) ;
 int FUNC_1 (struct media_entity*,int *) ;
 int FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct file*,void*,int) ;
 struct fimc_isp* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, void *VAR_1,
          enum v4l2_buf_type VAR_2)
{
 struct fimc_isp *VAR_3 = FUNC_4(VAR_0);
 struct exynos_video_entity *VAR_4 = &VAR_3->video_capture.ve;
 struct media_entity *VAR_5 = &VAR_4->vdev.entity;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, &VAR_4->pipe->mp);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 < 0)
  goto p_stop;

 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_6 < 0)
  goto p_stop;

 VAR_3->video_capture.streaming = 1;
 return 0;
p_stop:
 FUNC_2(VAR_5);
 return VAR_6;
}
