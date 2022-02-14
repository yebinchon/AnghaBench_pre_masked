
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vsp1_pipeline {int state; int irqlock; int wq; TYPE_3__* output; TYPE_3__** inputs; } ;
struct vsp1_device {TYPE_2__* info; } ;
typedef enum vsp1_pipeline_state { ____Placeholder_vsp1_pipeline_state } vsp1_pipeline_state ;
struct TYPE_4__ {struct vsp1_device* vsp1; } ;
struct TYPE_6__ {TYPE_1__ entity; } ;
struct TYPE_5__ {unsigned int rpf_count; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct vsp1_pipeline*) ;
 int FUNC_4 (struct vsp1_pipeline*,TYPE_3__*) ;
 int FUNC_5 (struct vsp1_pipeline*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct vsp1_pipeline *VAR_3,
       unsigned int VAR_4)
{
 struct vsp1_device *VAR_5 = VAR_3->output->entity.vsp1;
 enum vsp1_pipeline_state VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;


 FUNC_0(!(VAR_4 & VAR_0));

 FUNC_1(&VAR_3->irqlock, VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_5->info->rpf_count; ++VAR_8) {
  if (!VAR_3->inputs[VAR_8])
   continue;

  FUNC_4(VAR_3, VAR_3->inputs[VAR_8]);
 }

 FUNC_4(VAR_3, VAR_3->output);

 VAR_6 = VAR_3->state;
 VAR_3->state = VAR_1;





 if (VAR_6 == VAR_2)
  FUNC_6(&VAR_3->wq);
 else if (FUNC_3(VAR_3))
  FUNC_5(VAR_3);

 FUNC_2(&VAR_3->irqlock, VAR_7);
}
