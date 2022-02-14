
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int list_pipe; } ;
struct vsp1_rwpf {TYPE_7__ entity; } ;
struct vsp1_pipeline {int entities; TYPE_4__* lif; TYPE_3__* output; int frame_end; } ;
struct vsp1_drm_pipeline {int * uif; int wait_queue; struct vsp1_pipeline pipe; } ;
struct vsp1_device {struct vsp1_rwpf** rpf; TYPE_6__* info; TYPE_5__** uif; TYPE_1__** lif; TYPE_3__** wpf; TYPE_8__* drm; int dev; } ;
struct TYPE_16__ {struct vsp1_drm_pipeline* pipe; int lock; } ;
struct TYPE_14__ {unsigned int lif_count; unsigned int uif_count; unsigned int rpf_count; } ;
struct TYPE_13__ {int entity; } ;
struct TYPE_12__ {int list_pipe; struct vsp1_pipeline* pipe; } ;
struct TYPE_10__ {int list_pipe; scalar_t__ sink_pad; TYPE_4__* sink; struct vsp1_pipeline* pipe; } ;
struct TYPE_11__ {TYPE_2__ entity; } ;
struct TYPE_9__ {TYPE_4__ entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_8__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct vsp1_pipeline*) ;

int FUNC_6(struct vsp1_device *VAR_3)
{
 unsigned int VAR_4;

 VAR_3->drm = FUNC_1(VAR_3->dev, sizeof(*VAR_3->drm), VAR_1);
 if (!VAR_3->drm)
  return -VAR_0;

 FUNC_4(&VAR_3->drm->lock);


 for (VAR_4 = 0; VAR_4 < VAR_3->info->lif_count; ++VAR_4) {
  struct vsp1_drm_pipeline *VAR_5 = &VAR_3->drm->pipe[VAR_4];
  struct vsp1_pipeline *VAR_6 = &VAR_5->pipe;

  FUNC_2(&VAR_5->wait_queue);

  FUNC_5(VAR_6);

  VAR_6->frame_end = VAR_2;





  VAR_6->output = VAR_3->wpf[VAR_4];
  VAR_6->lif = &VAR_3->lif[VAR_4]->entity;

  VAR_6->output->entity.pipe = VAR_6;
  VAR_6->output->entity.sink = VAR_6->lif;
  VAR_6->output->entity.sink_pad = 0;
  FUNC_3(&VAR_6->output->entity.list_pipe, &VAR_6->entities);

  VAR_6->lif->pipe = VAR_6;
  FUNC_3(&VAR_6->lif->list_pipe, &VAR_6->entities);





  if (VAR_4 < VAR_3->info->uif_count)
   VAR_5->uif = &VAR_3->uif[VAR_4]->entity;
 }


 for (VAR_4 = 0; VAR_4 < VAR_3->info->rpf_count; ++VAR_4) {
  struct vsp1_rwpf *VAR_7 = VAR_3->rpf[VAR_4];

  FUNC_0(&VAR_7->entity.list_pipe);
 }

 return 0;
}
