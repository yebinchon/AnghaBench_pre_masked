
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_ring {size_t queue_index; TYPE_1__* vsi; } ;
struct TYPE_2__ {struct i40e_ring** xdp_rings; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct i40e_ring*) ;
 int FUNC_1 () ;

void FUNC_2(struct i40e_ring *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 & VAR_0)
  FUNC_1();

 if (VAR_3 & VAR_1) {
  struct i40e_ring *VAR_4 =
   VAR_2->vsi->xdp_rings[VAR_2->queue_index];

  FUNC_0(VAR_4);
 }
}
