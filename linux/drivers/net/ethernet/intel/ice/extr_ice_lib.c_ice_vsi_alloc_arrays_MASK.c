
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi {scalar_t__ type; void* tx_rings; void* rx_rings; void* txq_map; void* rxq_map; void* q_vectors; int num_q_vectors; int alloc_rxq; int alloc_txq; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *,void*) ;

__attribute__((used)) static int FUNC_2(struct ice_vsi *VAR_3)
{
 struct ice_pf *VAR_4 = VAR_3->back;


 VAR_3->tx_rings = FUNC_0(&VAR_4->pdev->dev, VAR_3->alloc_txq,
         sizeof(*VAR_3->tx_rings), VAR_1);
 if (!VAR_3->tx_rings)
  return -VAR_0;

 VAR_3->rx_rings = FUNC_0(&VAR_4->pdev->dev, VAR_3->alloc_rxq,
         sizeof(*VAR_3->rx_rings), VAR_1);
 if (!VAR_3->rx_rings)
  goto err_rings;

 VAR_3->txq_map = FUNC_0(&VAR_4->pdev->dev, VAR_3->alloc_txq,
        sizeof(*VAR_3->txq_map), VAR_1);

 if (!VAR_3->txq_map)
  goto err_txq_map;

 VAR_3->rxq_map = FUNC_0(&VAR_4->pdev->dev, VAR_3->alloc_rxq,
        sizeof(*VAR_3->rxq_map), VAR_1);
 if (!VAR_3->rxq_map)
  goto err_rxq_map;



 if (VAR_3->type == VAR_2)
  return 0;


 VAR_3->q_vectors = FUNC_0(&VAR_4->pdev->dev, VAR_3->num_q_vectors,
          sizeof(*VAR_3->q_vectors), VAR_1);
 if (!VAR_3->q_vectors)
  goto err_vectors;

 return 0;

err_vectors:
 FUNC_1(&VAR_4->pdev->dev, VAR_3->rxq_map);
err_rxq_map:
 FUNC_1(&VAR_4->pdev->dev, VAR_3->txq_map);
err_txq_map:
 FUNC_1(&VAR_4->pdev->dev, VAR_3->rx_rings);
err_rings:
 FUNC_1(&VAR_4->pdev->dev, VAR_3->tx_rings);
 return -VAR_0;
}
