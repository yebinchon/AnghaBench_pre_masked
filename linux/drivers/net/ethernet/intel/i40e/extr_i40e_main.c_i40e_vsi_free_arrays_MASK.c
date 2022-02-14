
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int * xdp_rings; int * rx_rings; int * tx_rings; int * q_vectors; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct i40e_vsi *VAR_0, bool VAR_1)
{

 if (VAR_1) {
  FUNC_0(VAR_0->q_vectors);
  VAR_0->q_vectors = ((void*)0);
 }
 FUNC_0(VAR_0->tx_rings);
 VAR_0->tx_rings = ((void*)0);
 VAR_0->rx_rings = ((void*)0);
 VAR_0->xdp_rings = ((void*)0);
}
