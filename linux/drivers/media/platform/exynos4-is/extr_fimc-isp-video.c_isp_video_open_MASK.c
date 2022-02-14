
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* mdev; } ;
struct media_entity {TYPE_5__ graph_obj; int use_count; } ;
struct TYPE_7__ {struct media_entity entity; } ;
struct exynos_video_entity {TYPE_2__ vdev; } ;
struct TYPE_6__ {struct exynos_video_entity ve; } ;
struct fimc_isp {int video_lock; TYPE_3__* pdev; TYPE_1__ video_capture; } ;
struct file {int dummy; } ;
struct TYPE_9__ {int graph_mutex; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct exynos_video_entity*,int ,struct media_entity*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 struct fimc_isp* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2)
{
 struct fimc_isp *VAR_3 = FUNC_8(VAR_2);
 struct exynos_video_entity *VAR_4 = &VAR_3->video_capture.ve;
 struct media_entity *VAR_5 = &VAR_4->vdev.entity;
 int VAR_6;

 if (FUNC_2(&VAR_3->video_lock))
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_2);
 if (VAR_6 < 0)
  goto unlock;

 VAR_6 = FUNC_4(&VAR_3->pdev->dev);
 if (VAR_6 < 0)
  goto rel_fh;

 if (FUNC_5(VAR_2)) {
  FUNC_1(&VAR_5->graph_obj.mdev->graph_mutex);

  VAR_6 = FUNC_0(VAR_4, VAR_1, VAR_5, 1);


  if (VAR_6 == 0)
   VAR_5->use_count++;

  FUNC_3(&VAR_5->graph_obj.mdev->graph_mutex);
 }
 if (!VAR_6)
  goto unlock;
rel_fh:
 FUNC_7(VAR_2);
unlock:
 FUNC_3(&VAR_3->video_lock);
 return VAR_6;
}
