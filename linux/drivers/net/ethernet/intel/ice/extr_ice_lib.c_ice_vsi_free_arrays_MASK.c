
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi {int * rxq_map; int * txq_map; int * rx_rings; int * tx_rings; int * q_vectors; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct ice_vsi *VAR_0)
{
 struct ice_pf *VAR_1 = VAR_0->back;


 if (VAR_0->q_vectors) {
  FUNC_0(&VAR_1->pdev->dev, VAR_0->q_vectors);
  VAR_0->q_vectors = ((void*)0);
 }
 if (VAR_0->tx_rings) {
  FUNC_0(&VAR_1->pdev->dev, VAR_0->tx_rings);
  VAR_0->tx_rings = ((void*)0);
 }
 if (VAR_0->rx_rings) {
  FUNC_0(&VAR_1->pdev->dev, VAR_0->rx_rings);
  VAR_0->rx_rings = ((void*)0);
 }
 if (VAR_0->txq_map) {
  FUNC_0(&VAR_1->pdev->dev, VAR_0->txq_map);
  VAR_0->txq_map = ((void*)0);
 }
 if (VAR_0->rxq_map) {
  FUNC_0(&VAR_1->pdev->dev, VAR_0->rxq_map);
  VAR_0->rxq_map = ((void*)0);
 }
}
