
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net_r_vector {int * xdp_ring; int * tx_ring; int * rx_ring; } ;
struct nfp_net_dp {int num_rx_rings; int num_stack_tx_rings; int num_tx_rings; int * tx_rings; int * rx_rings; } ;



__attribute__((used)) static void
FUNC_0(struct nfp_net_dp *VAR_0,
       struct nfp_net_r_vector *VAR_1, int VAR_2)
{
 VAR_1->rx_ring = VAR_2 < VAR_0->num_rx_rings ? &VAR_0->rx_rings[VAR_2] : ((void*)0);
 VAR_1->tx_ring =
  VAR_2 < VAR_0->num_stack_tx_rings ? &VAR_0->tx_rings[VAR_2] : ((void*)0);

 VAR_1->xdp_ring = VAR_2 < VAR_0->num_tx_rings - VAR_0->num_stack_tx_rings ?
  &VAR_0->tx_rings[VAR_0->num_stack_tx_rings + VAR_2] : ((void*)0);
}
