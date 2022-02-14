
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int index; struct vsp1_pipeline* pipe; } ;
struct vsp1_rwpf {TYPE_2__ entity; } ;
struct vsp1_pipeline {scalar_t__ state; int wq; int irqlock; } ;
struct vsp1_device {int dev; struct vsp1_rwpf** wpf; TYPE_1__* info; } ;
struct TYPE_3__ {unsigned int wpf_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct vsp1_pipeline*) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(struct vsp1_device *VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;
 int VAR_5;






 for (VAR_4 = 0; VAR_4 < VAR_2->info->wpf_count; ++VAR_4) {
  struct vsp1_rwpf *VAR_6 = VAR_2->wpf[VAR_4];
  struct vsp1_pipeline *VAR_7;

  if (VAR_6 == ((void*)0))
   continue;

  VAR_7 = VAR_6->entity.pipe;
  if (VAR_7 == ((void*)0))
   continue;

  FUNC_2(&VAR_7->irqlock, VAR_3);
  if (VAR_7->state == VAR_0)
   VAR_7->state = VAR_1;
  FUNC_3(&VAR_7->irqlock, VAR_3);
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->info->wpf_count; ++VAR_4) {
  struct vsp1_rwpf *VAR_8 = VAR_2->wpf[VAR_4];
  struct vsp1_pipeline *VAR_9;

  if (VAR_8 == ((void*)0))
   continue;

  VAR_9 = VAR_8->entity.pipe;
  if (VAR_9 == ((void*)0))
   continue;

  VAR_5 = FUNC_5(VAR_9->wq, FUNC_4(VAR_9),
      FUNC_1(500));
  if (VAR_5 == 0)
   FUNC_0(VAR_2->dev, "pipeline %u stop timeout\n",
     VAR_8->entity.index);
 }
}
