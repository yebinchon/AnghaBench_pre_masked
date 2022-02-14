
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct __vxge_hw_channel {size_t compl_index; size_t length; TYPE_1__* stats; int ** work_arr; } ;
struct TYPE_2__ {int total_compl_cnt; } ;



void FUNC_0(struct __vxge_hw_channel *VAR_0)
{
 VAR_0->work_arr[VAR_0->compl_index] = ((void*)0);


 if (++VAR_0->compl_index == VAR_0->length)
  VAR_0->compl_index = 0;

 VAR_0->stats->total_compl_cnt++;
}
