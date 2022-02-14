
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int level; } ;
struct dim_channel {int done_sw_buffers_number; TYPE_1__ state; } ;
struct dim_ch_state_t {int ready; int done_buffers; } ;



struct dim_ch_state_t *FUNC_0(struct dim_channel *VAR_0,
          struct dim_ch_state_t *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return ((void*)0);

 VAR_1->ready = VAR_0->state.level < 2;
 VAR_1->done_buffers = VAR_0->done_sw_buffers_number;

 return VAR_1;
}
