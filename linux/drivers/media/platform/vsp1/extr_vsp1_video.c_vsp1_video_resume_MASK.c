
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct vsp1_pipeline* pipe; } ;
struct vsp1_rwpf {TYPE_1__ entity; } ;
struct vsp1_pipeline {int configured; int irqlock; } ;
struct vsp1_device {struct vsp1_rwpf** wpf; TYPE_2__* info; } ;
struct TYPE_4__ {unsigned int wpf_count; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (struct vsp1_pipeline*) ;
 int FUNC_3 (struct vsp1_pipeline*) ;

void FUNC_4(struct vsp1_device *VAR_0)
{
 unsigned long VAR_1;
 unsigned int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->info->wpf_count; ++VAR_2) {
  struct vsp1_rwpf *VAR_3 = VAR_0->wpf[VAR_2];
  struct vsp1_pipeline *VAR_4;

  if (VAR_3 == ((void*)0))
   continue;

  VAR_4 = VAR_3->entity.pipe;
  if (VAR_4 == ((void*)0))
   continue;





  VAR_4->configured = 0;

  FUNC_0(&VAR_4->irqlock, VAR_1);
  if (FUNC_2(VAR_4))
   FUNC_3(VAR_4);
  FUNC_1(&VAR_4->irqlock, VAR_1);
 }
}
