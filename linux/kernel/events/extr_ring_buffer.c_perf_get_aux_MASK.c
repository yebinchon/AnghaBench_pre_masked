
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_output_handle {TYPE_1__* rb; int event; } ;
struct TYPE_2__ {void* aux_priv; } ;



void *FUNC_0(struct perf_output_handle *VAR_0)
{

 if (!VAR_0->event)
  return ((void*)0);

 return VAR_0->rb->aux_priv;
}
