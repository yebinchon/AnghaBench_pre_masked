
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsp1_video {int pipe_index; int queue; TYPE_2__* rwpf; int irqlock; int irqqueue; } ;
struct vsp1_vb2_buffer {int mem; int queue; } ;
struct vsp1_pipeline {int buffers_ready; int irqlock; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct TYPE_3__ {struct vsp1_pipeline* pipe; } ;
struct TYPE_4__ {int mem; TYPE_1__ entity; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct vb2_buffer*) ;
 struct vsp1_vb2_buffer* FUNC_5 (struct vb2_v4l2_buffer*) ;
 struct vsp1_video* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct vsp1_pipeline*) ;
 int FUNC_9 (struct vsp1_pipeline*) ;

__attribute__((used)) static void FUNC_10(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_4(VAR_0);
 struct vsp1_video *VAR_2 = FUNC_6(VAR_0->vb2_queue);
 struct vsp1_pipeline *VAR_3 = VAR_2->rwpf->entity.pipe;
 struct vsp1_vb2_buffer *VAR_4 = FUNC_5(VAR_1);
 unsigned long VAR_5;
 bool VAR_6;

 FUNC_2(&VAR_2->irqlock, VAR_5);
 VAR_6 = FUNC_1(&VAR_2->irqqueue);
 FUNC_0(&VAR_4->queue, &VAR_2->irqqueue);
 FUNC_3(&VAR_2->irqlock, VAR_5);

 if (!VAR_6)
  return;

 FUNC_2(&VAR_3->irqlock, VAR_5);

 VAR_2->rwpf->mem = VAR_4->mem;
 VAR_3->buffers_ready |= 1 << VAR_2->pipe_index;

 if (FUNC_7(&VAR_2->queue) &&
     FUNC_8(VAR_3))
  FUNC_9(VAR_3);

 FUNC_3(&VAR_3->irqlock, VAR_5);
}
