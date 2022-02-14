
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsp1_pipeline {scalar_t__ state; scalar_t__ buffers_ready; TYPE_2__* output; } ;
struct vsp1_device {int dummy; } ;
struct TYPE_3__ {int index; struct vsp1_device* vsp1; } ;
struct TYPE_4__ {TYPE_1__ entity; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vsp1_device*,int ,int ) ;

void FUNC_2(struct vsp1_pipeline *VAR_3)
{
 struct vsp1_device *VAR_4 = VAR_3->output->entity.vsp1;

 if (VAR_3->state == VAR_2) {
  FUNC_1(VAR_4, FUNC_0(VAR_3->output->entity.index),
      VAR_0);
  VAR_3->state = VAR_1;
 }

 VAR_3->buffers_ready = 0;
}
