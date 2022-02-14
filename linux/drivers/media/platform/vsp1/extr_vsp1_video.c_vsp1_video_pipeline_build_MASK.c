
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct media_device* mdev; } ;
struct media_entity {TYPE_2__ graph_obj; } ;
struct TYPE_7__ {struct media_entity entity; } ;
struct vsp1_video {TYPE_6__* vsp1; TYPE_1__ video; } ;
struct TYPE_9__ {size_t index; } ;
struct vsp1_rwpf {TYPE_4__* video; TYPE_3__ entity; } ;
struct vsp1_pipeline {scalar_t__ num_inputs; struct vsp1_rwpf* output; struct vsp1_rwpf** inputs; struct vsp1_entity* hgt; struct vsp1_entity* hgo; struct vsp1_entity* brx; struct vsp1_entity* lif; int entities; } ;
struct vsp1_entity {int type; struct vsp1_pipeline* pipe; int list_pipe; } ;
struct v4l2_subdev {int dummy; } ;
struct media_graph {int dummy; } ;
struct media_device {int dummy; } ;
struct TYPE_12__ {TYPE_5__* info; } ;
struct TYPE_11__ {unsigned int rpf_count; } ;
struct TYPE_10__ {scalar_t__ pipe_index; } ;


 int VAR_0 ;







 int FUNC_0 (struct media_entity*) ;
 int FUNC_1 (int *,int *) ;
 struct v4l2_subdev* FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct media_graph*) ;
 int FUNC_4 (struct media_graph*,struct media_device*) ;
 struct media_entity* FUNC_5 (struct media_graph*) ;
 int FUNC_6 (struct media_graph*,struct media_entity*) ;
 struct vsp1_rwpf* FUNC_7 (struct v4l2_subdev*) ;
 struct vsp1_entity* FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (struct vsp1_pipeline*,struct vsp1_rwpf*,struct vsp1_rwpf*) ;

__attribute__((used)) static int FUNC_10(struct vsp1_pipeline *VAR_1,
         struct vsp1_video *VAR_2)
{
 struct media_graph VAR_3;
 struct media_entity *VAR_4 = &VAR_2->video.entity;
 struct media_device *VAR_5 = VAR_4->graph_obj.mdev;
 unsigned int VAR_6;
 int VAR_7;


 VAR_7 = FUNC_4(&VAR_3, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_6(&VAR_3, VAR_4);

 while ((VAR_4 = FUNC_5(&VAR_3))) {
  struct v4l2_subdev *VAR_8;
  struct vsp1_rwpf *VAR_9;
  struct vsp1_entity *VAR_10;

  if (!FUNC_0(VAR_4))
   continue;

  VAR_8 = FUNC_2(VAR_4);
  VAR_10 = FUNC_8(VAR_8);
  FUNC_1(&VAR_10->list_pipe, &VAR_1->entities);
  VAR_10->pipe = VAR_1;

  switch (VAR_10->type) {
  case 129:
   VAR_9 = FUNC_7(VAR_8);
   VAR_1->inputs[VAR_9->entity.index] = VAR_9;
   VAR_9->video->pipe_index = ++VAR_1->num_inputs;
   break;

  case 128:
   VAR_9 = FUNC_7(VAR_8);
   VAR_1->output = VAR_9;
   VAR_9->video->pipe_index = 0;
   break;

  case 130:
   VAR_1->lif = VAR_10;
   break;

  case 133:
  case 134:
   VAR_1->brx = VAR_10;
   break;

  case 132:
   VAR_1->hgo = VAR_10;
   break;

  case 131:
   VAR_1->hgt = VAR_10;
   break;

  default:
   break;
  }
 }

 FUNC_3(&VAR_3);


 if (VAR_1->num_inputs == 0 || !VAR_1->output)
  return -VAR_0;





 for (VAR_6 = 0; VAR_6 < VAR_2->vsp1->info->rpf_count; ++VAR_6) {
  if (!VAR_1->inputs[VAR_6])
   continue;

  VAR_7 = FUNC_9(VAR_1, VAR_1->inputs[VAR_6],
             VAR_1->output);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return 0;
}
