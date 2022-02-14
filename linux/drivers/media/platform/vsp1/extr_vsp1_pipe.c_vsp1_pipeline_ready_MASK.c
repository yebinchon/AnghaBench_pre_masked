
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_pipeline {int num_inputs; unsigned int buffers_ready; int lif; } ;



bool FUNC_0(struct vsp1_pipeline *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = ((1 << VAR_0->num_inputs) - 1) << 1;
 if (!VAR_0->lif)
  VAR_1 |= 1 << 0;

 return VAR_0->buffers_ready == VAR_1;
}
