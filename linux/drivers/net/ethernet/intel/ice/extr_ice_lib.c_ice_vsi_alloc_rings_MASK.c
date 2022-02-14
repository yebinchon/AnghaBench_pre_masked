
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi {int alloc_txq; int alloc_rxq; struct ice_ring** rx_rings; int num_rx_desc; int netdev; int * rxq_map; struct ice_ring** tx_rings; int num_tx_desc; int * txq_map; struct ice_pf* back; } ;
struct ice_ring {int q_index; int ring_active; int count; int * dev; int netdev; struct ice_vsi* vsi; int reg_idx; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_vsi*) ;
 struct ice_ring* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct ice_vsi *VAR_2)
{
 struct ice_pf *VAR_3 = VAR_2->back;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2->alloc_txq; VAR_4++) {
  struct ice_ring *VAR_5;


  VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);

  if (!VAR_5)
   goto err_out;

  VAR_5->q_index = VAR_4;
  VAR_5->reg_idx = VAR_2->txq_map[VAR_4];
  VAR_5->ring_active = 0;
  VAR_5->vsi = VAR_2;
  VAR_5->dev = &VAR_3->pdev->dev;
  VAR_5->count = VAR_2->num_tx_desc;
  VAR_2->tx_rings[VAR_4] = VAR_5;
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->alloc_rxq; VAR_4++) {
  struct ice_ring *VAR_6;


  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   goto err_out;

  VAR_6->q_index = VAR_4;
  VAR_6->reg_idx = VAR_2->rxq_map[VAR_4];
  VAR_6->ring_active = 0;
  VAR_6->vsi = VAR_2;
  VAR_6->netdev = VAR_2->netdev;
  VAR_6->dev = &VAR_3->pdev->dev;
  VAR_6->count = VAR_2->num_rx_desc;
  VAR_2->rx_rings[VAR_4] = VAR_6;
 }

 return 0;

err_out:
 FUNC_0(VAR_2);
 return -VAR_0;
}
