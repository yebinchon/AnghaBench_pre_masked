
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct media_device* mdev; } ;
struct media_entity {int use_count; TYPE_2__ graph_obj; } ;
struct media_device {int graph_mutex; } ;
struct TYPE_5__ {struct media_entity entity; } ;
struct TYPE_8__ {TYPE_1__ vdev; } ;
struct fimc_is_video {TYPE_4__ ve; scalar_t__ streaming; } ;
struct fimc_isp {int video_lock; TYPE_3__* pdev; struct fimc_is_video video_capture; } ;
struct file {int dummy; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (struct media_entity*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 struct fimc_isp* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_1)
{
 struct fimc_isp *VAR_2 = FUNC_7(VAR_1);
 struct fimc_is_video *VAR_3 = &VAR_2->video_capture;
 struct media_entity *VAR_4 = &VAR_3->ve.vdev.entity;
 struct media_device *VAR_5 = VAR_4->graph_obj.mdev;

 FUNC_2(&VAR_2->video_lock);

 if (FUNC_5(VAR_1) && VAR_3->streaming) {
  FUNC_1(VAR_4);
  VAR_3->streaming = 0;
 }

 FUNC_6(VAR_1);

 if (FUNC_5(VAR_1)) {
  FUNC_0(&VAR_3->ve, VAR_0);

  FUNC_2(&VAR_5->graph_mutex);
  VAR_4->use_count--;
  FUNC_3(&VAR_5->graph_mutex);
 }

 FUNC_4(&VAR_2->pdev->dev);
 FUNC_3(&VAR_2->video_lock);

 return 0;
}
