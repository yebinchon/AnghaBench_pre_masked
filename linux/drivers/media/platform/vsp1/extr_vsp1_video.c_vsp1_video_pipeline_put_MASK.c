
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vsp1_pipeline {int kref; TYPE_3__* output; } ;
struct media_device {int graph_mutex; } ;
struct TYPE_5__ {TYPE_1__* vsp1; } ;
struct TYPE_6__ {TYPE_2__ entity; } ;
struct TYPE_4__ {struct media_device media_dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct vsp1_pipeline *VAR_1)
{
 struct media_device *VAR_2 = &VAR_1->output->entity.vsp1->media_dev;

 FUNC_1(&VAR_2->graph_mutex);
 FUNC_0(&VAR_1->kref, VAR_0);
 FUNC_2(&VAR_2->graph_mutex);
}
