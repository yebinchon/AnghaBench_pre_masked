
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_pipeline {int sequence; int (* frame_end ) (struct vsp1_pipeline*,unsigned int) ;scalar_t__ hgt; scalar_t__ hgo; TYPE_1__* output; } ;
struct TYPE_2__ {int dlm; } ;


 int FUNC_0 (struct vsp1_pipeline*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct vsp1_pipeline *VAR_0)
{
 unsigned int VAR_1;

 if (VAR_0 == ((void*)0))
  return;






 VAR_1 = FUNC_1(VAR_0->output->dlm);

 if (VAR_0->hgo)
  FUNC_2(VAR_0->hgo);

 if (VAR_0->hgt)
  FUNC_3(VAR_0->hgt);





 if (VAR_0->frame_end)
  VAR_0->frame_end(VAR_0, VAR_1);

 VAR_0->sequence++;
}
