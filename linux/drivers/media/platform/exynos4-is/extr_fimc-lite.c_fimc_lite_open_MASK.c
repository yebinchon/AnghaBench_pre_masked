
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* mdev; } ;
struct media_entity {TYPE_3__ graph_obj; int use_count; } ;
struct TYPE_6__ {struct media_entity entity; } ;
struct TYPE_10__ {TYPE_1__ vdev; } ;
struct fimc_lite {int lock; int state; TYPE_4__* pdev; TYPE_5__ ve; int out_path; } ;
struct file {int dummy; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int graph_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct fimc_lite*) ;
 int FUNC_3 (TYPE_5__*,int ,struct media_entity*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (struct file*) ;
 int FUNC_11 (struct file*) ;
 struct fimc_lite* FUNC_12 (struct file*) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_4)
{
 struct fimc_lite *VAR_5 = FUNC_12(VAR_4);
 struct media_entity *VAR_6 = &VAR_5->ve.vdev.entity;
 int VAR_7;

 FUNC_4(&VAR_5->lock);
 if (FUNC_0(&VAR_5->out_path) != VAR_1) {
  VAR_7 = -VAR_0;
  goto unlock;
 }

 FUNC_8(VAR_2, &VAR_5->state);
 VAR_7 = FUNC_6(&VAR_5->pdev->dev);
 if (VAR_7 < 0)
  goto unlock;

 VAR_7 = FUNC_10(VAR_4);
 if (VAR_7 < 0)
  goto err_pm;

 if (!FUNC_9(VAR_4) ||
     FUNC_0(&VAR_5->out_path) != VAR_1)
  goto unlock;

 FUNC_4(&VAR_6->graph_obj.mdev->graph_mutex);

 VAR_7 = FUNC_3(&VAR_5->ve, VAR_3, VAR_6, 1);


 if (VAR_7 == 0)
  VAR_6->use_count++;

 FUNC_5(&VAR_6->graph_obj.mdev->graph_mutex);

 if (!VAR_7) {
  FUNC_2(VAR_5);
  goto unlock;
 }

 FUNC_11(VAR_4);
err_pm:
 FUNC_7(&VAR_5->pdev->dev);
 FUNC_1(VAR_2, &VAR_5->state);
unlock:
 FUNC_5(&VAR_5->lock);
 return VAR_7;
}
