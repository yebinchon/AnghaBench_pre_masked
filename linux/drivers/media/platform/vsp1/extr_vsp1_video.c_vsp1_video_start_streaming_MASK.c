
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsp1_video {TYPE_2__* rwpf; } ;
struct vsp1_pipeline {scalar_t__ stream_count; scalar_t__ num_inputs; int irqlock; int lock; } ;
struct vb2_queue {int dummy; } ;
struct TYPE_3__ {struct vsp1_pipeline* pipe; } ;
struct TYPE_4__ {TYPE_1__ entity; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vsp1_video* FUNC_4 (struct vb2_queue*) ;
 scalar_t__ FUNC_5 (struct vsp1_pipeline*) ;
 int FUNC_6 (struct vsp1_pipeline*) ;
 int FUNC_7 (struct vsp1_pipeline*) ;
 int FUNC_8 (struct vsp1_video*) ;
 int FUNC_9 (struct vsp1_pipeline*) ;

__attribute__((used)) static int FUNC_10(struct vb2_queue *VAR_0, unsigned int VAR_1)
{
 struct vsp1_video *VAR_2 = FUNC_4(VAR_0);
 struct vsp1_pipeline *VAR_3 = VAR_2->rwpf->entity.pipe;
 bool VAR_4 = 0;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_0(&VAR_3->lock);
 if (VAR_3->stream_count == VAR_3->num_inputs) {
  VAR_6 = FUNC_9(VAR_3);
  if (VAR_6 < 0) {
   FUNC_8(VAR_2);
   FUNC_6(VAR_3);
   FUNC_1(&VAR_3->lock);
   return VAR_6;
  }

  VAR_4 = 1;
 }

 VAR_3->stream_count++;
 FUNC_1(&VAR_3->lock);
 if (!VAR_4)
  return 0;

 FUNC_2(&VAR_3->irqlock, VAR_5);
 if (FUNC_5(VAR_3))
  FUNC_7(VAR_3);
 FUNC_3(&VAR_3->irqlock, VAR_5);

 return 0;
}
