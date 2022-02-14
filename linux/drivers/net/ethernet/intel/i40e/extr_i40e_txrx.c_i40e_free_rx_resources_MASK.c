
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_ring {int * desc; int dma; int size; int dev; int * rx_bi; int * xdp_prog; int xdp_rxq; TYPE_1__* vsi; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct i40e_ring*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct i40e_ring *VAR_1)
{
 FUNC_1(VAR_1);
 if (VAR_1->vsi->type == VAR_0)
  FUNC_3(&VAR_1->xdp_rxq);
 VAR_1->xdp_prog = ((void*)0);
 FUNC_2(VAR_1->rx_bi);
 VAR_1->rx_bi = ((void*)0);

 if (VAR_1->desc) {
  FUNC_0(VAR_1->dev, VAR_1->size,
      VAR_1->desc, VAR_1->dma);
  VAR_1->desc = ((void*)0);
 }
}
