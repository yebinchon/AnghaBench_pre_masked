
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnet_port {size_t q_index; TYPE_1__* vp; } ;
struct TYPE_2__ {int * q_used; int nports; } ;



void FUNC_0(struct vnet_port *VAR_0)
{
 VAR_0->vp->nports--;
 VAR_0->vp->q_used[VAR_0->q_index]--;
 VAR_0->q_index = 0;
}
