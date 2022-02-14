
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int alloc_queue_pairs; int ** xdp_rings; int ** rx_rings; int ** tx_rings; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct i40e_vsi *VAR_1)
{
 int VAR_2;

 if (VAR_1->tx_rings && VAR_1->tx_rings[0]) {
  for (VAR_2 = 0; VAR_2 < VAR_1->alloc_queue_pairs; VAR_2++) {
   FUNC_0(VAR_1->tx_rings[VAR_2], VAR_0);
   VAR_1->tx_rings[VAR_2] = ((void*)0);
   VAR_1->rx_rings[VAR_2] = ((void*)0);
   if (VAR_1->xdp_rings)
    VAR_1->xdp_rings[VAR_2] = ((void*)0);
  }
 }
}
