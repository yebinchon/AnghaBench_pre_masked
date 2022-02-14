
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int entity; } ;
struct vsp1_video {int pipe_index; TYPE_4__ video; TYPE_3__* vsp1; int irqlock; TYPE_2__* rwpf; } ;
struct vsp1_pipeline {int buffers_ready; scalar_t__ stream_count; scalar_t__ num_inputs; int lock; } ;
struct vb2_queue {int dummy; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_5__ {struct vsp1_pipeline* pipe; } ;
struct TYPE_6__ {TYPE_1__ entity; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct vsp1_video* FUNC_6 (struct vb2_queue*) ;
 int FUNC_7 (struct vsp1_pipeline*) ;
 int FUNC_8 (struct vsp1_pipeline*) ;
 int FUNC_9 (struct vsp1_pipeline*) ;
 int FUNC_10 (struct vsp1_video*) ;

__attribute__((used)) static void FUNC_11(struct vb2_queue *VAR_1)
{
 struct vsp1_video *VAR_2 = FUNC_6(VAR_1);
 struct vsp1_pipeline *VAR_3 = VAR_2->rwpf->entity.pipe;
 unsigned long VAR_4;
 int VAR_5;





 FUNC_4(&VAR_2->irqlock, VAR_4);
 VAR_3->buffers_ready &= ~(1 << VAR_2->pipe_index);
 FUNC_5(&VAR_2->irqlock, VAR_4);

 FUNC_2(&VAR_3->lock);
 if (--VAR_3->stream_count == VAR_3->num_inputs) {

  VAR_5 = FUNC_7(VAR_3);
  if (VAR_5 == -VAR_0)
   FUNC_0(VAR_2->vsp1->dev, "pipeline stop timeout\n");

  FUNC_8(VAR_3);
 }
 FUNC_3(&VAR_3->lock);

 FUNC_1(&VAR_2->video.entity);
 FUNC_10(VAR_2);
 FUNC_9(VAR_3);
}
