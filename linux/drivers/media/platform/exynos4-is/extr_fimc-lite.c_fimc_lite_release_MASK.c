
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
struct fimc_lite {int streaming; int lock; int state; TYPE_4__* pdev; TYPE_5__ ve; int out_path; } ;
struct file {int dummy; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int graph_mutex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (struct fimc_lite*,int) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (struct media_entity*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct file*) ;
 struct fimc_lite* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_4)
{
 struct fimc_lite *VAR_5 = FUNC_10(VAR_4);
 struct media_entity *VAR_6 = &VAR_5->ve.vdev.entity;

 FUNC_6(&VAR_5->lock);

 if (FUNC_9(VAR_4) &&
     FUNC_1(&VAR_5->out_path) == VAR_0) {
  if (VAR_5->streaming) {
   FUNC_5(VAR_6);
   VAR_5->streaming = 0;
  }
  FUNC_3(VAR_5, 0);
  FUNC_4(&VAR_5->ve, VAR_3);
  FUNC_2(VAR_1, &VAR_5->state);

  FUNC_6(&VAR_6->graph_obj.mdev->graph_mutex);
  VAR_6->use_count--;
  FUNC_7(&VAR_6->graph_obj.mdev->graph_mutex);
 }

 FUNC_0(VAR_4, ((void*)0));
 FUNC_8(&VAR_5->pdev->dev);
 FUNC_2(VAR_2, &VAR_5->state);

 FUNC_7(&VAR_5->lock);
 return 0;
}
