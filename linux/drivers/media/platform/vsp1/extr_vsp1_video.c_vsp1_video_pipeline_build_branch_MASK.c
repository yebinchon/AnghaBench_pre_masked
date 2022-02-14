
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int entity; } ;
struct vsp1_entity {scalar_t__ type; size_t source_pad; struct media_pad* pads; TYPE_3__ subdev; TYPE_1__* vsp1; } ;
struct vsp1_rwpf {size_t brx_input; struct vsp1_entity entity; } ;
struct vsp1_pipeline {struct vsp1_entity* uds_input; struct vsp1_entity* uds; } ;
struct vsp1_brx {struct vsp1_entity entity; TYPE_2__* inputs; } ;
struct media_pad {size_t index; int entity; } ;
struct media_entity_enum {int dummy; } ;
struct TYPE_5__ {struct vsp1_rwpf* rpf; } ;
struct TYPE_4__ {int media_dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct media_entity_enum*) ;
 int FUNC_2 (struct media_entity_enum*,int *) ;
 scalar_t__ FUNC_3 (struct media_entity_enum*,int *) ;
 int FUNC_4 (int ) ;
 struct vsp1_brx* FUNC_5 (TYPE_3__*) ;
 struct vsp1_entity* FUNC_6 (int ) ;
 struct media_pad* FUNC_7 (struct media_pad*) ;

__attribute__((used)) static int FUNC_8(struct vsp1_pipeline *VAR_6,
         struct vsp1_rwpf *VAR_7,
         struct vsp1_rwpf *VAR_8)
{
 struct media_entity_enum VAR_9;
 struct vsp1_entity *VAR_10;
 struct media_pad *VAR_11;
 struct vsp1_brx *VAR_12 = ((void*)0);
 int VAR_13;

 VAR_13 = FUNC_2(&VAR_9, &VAR_7->entity.vsp1->media_dev);
 if (VAR_13 < 0)
  return VAR_13;






 VAR_11 = FUNC_7(&VAR_7->entity.pads[VAR_1]);

 while (1) {
  if (VAR_11 == ((void*)0)) {
   VAR_13 = -VAR_0;
   goto out;
  }


  if (!FUNC_0(VAR_11->entity)) {
   VAR_13 = -VAR_0;
   goto out;
  }

  VAR_10 = FUNC_6(
   FUNC_4(VAR_11->entity));





  if (VAR_10->type == VAR_3 ||
      VAR_10->type == VAR_2) {

   if (VAR_12) {
    VAR_13 = -VAR_0;
    goto out;
   }

   VAR_12 = FUNC_5(&VAR_10->subdev);
   VAR_12->inputs[VAR_11->index].rpf = VAR_7;
   VAR_7->brx_input = VAR_11->index;
  }


  if (VAR_10->type == VAR_5)
   break;


  if (FUNC_3(&VAR_9,
         &VAR_10->subdev.entity)) {
   VAR_13 = -VAR_0;
   goto out;
  }


  if (VAR_10->type == VAR_4) {
   if (VAR_6->uds) {
    VAR_13 = -VAR_0;
    goto out;
   }

   VAR_6->uds = VAR_10;
   VAR_6->uds_input = VAR_12 ? &VAR_12->entity : &VAR_7->entity;
  }


  VAR_11 = &VAR_10->pads[VAR_10->source_pad];
  VAR_11 = FUNC_7(VAR_11);
 }


 if (VAR_10 != &VAR_8->entity)
  VAR_13 = -VAR_0;

out:
 FUNC_1(&VAR_9);

 return VAR_13;
}
