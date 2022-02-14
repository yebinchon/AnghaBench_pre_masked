
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {int alloc_queue_pairs; struct i40e_ring** rx_rings; int num_rx_desc; int * netdev; scalar_t__ base_queue; int * xdp_rings; struct i40e_pf* back; int num_tx_desc; int * tx_rings; } ;
struct i40e_ring {int queue_index; int ring_active; int itr_setting; scalar_t__ dcb_tc; scalar_t__ size; int count; int * dev; int * netdev; struct i40e_vsi* vsi; scalar_t__ reg_idx; void* flags; } ;
struct i40e_pf {int hw_features; int rx_itr_default; TYPE_1__* pdev; int tx_itr_default; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (struct i40e_vsi*) ;
 struct i40e_ring* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct i40e_ring*) ;

__attribute__((used)) static int FUNC_4(struct i40e_vsi *VAR_4)
{
 int VAR_5, VAR_6 = FUNC_0(VAR_4) ? 3 : 2;
 struct i40e_pf *VAR_7 = VAR_4->back;
 struct i40e_ring *VAR_8;


 for (VAR_5 = 0; VAR_5 < VAR_4->alloc_queue_pairs; VAR_5++) {

  VAR_8 = FUNC_2(VAR_6, sizeof(struct i40e_ring), VAR_1);
  if (!VAR_8)
   goto err_out;

  VAR_8->queue_index = VAR_5;
  VAR_8->reg_idx = VAR_4->base_queue + VAR_5;
  VAR_8->ring_active = 0;
  VAR_8->vsi = VAR_4;
  VAR_8->netdev = VAR_4->netdev;
  VAR_8->dev = &VAR_7->pdev->dev;
  VAR_8->count = VAR_4->num_tx_desc;
  VAR_8->size = 0;
  VAR_8->dcb_tc = 0;
  if (VAR_4->back->hw_features & VAR_2)
   VAR_8->flags = VAR_3;
  VAR_8->itr_setting = VAR_7->tx_itr_default;
  VAR_4->tx_rings[VAR_5] = VAR_8++;

  if (!FUNC_0(VAR_4))
   goto setup_rx;

  VAR_8->queue_index = VAR_4->alloc_queue_pairs + VAR_5;
  VAR_8->reg_idx = VAR_4->base_queue + VAR_8->queue_index;
  VAR_8->ring_active = 0;
  VAR_8->vsi = VAR_4;
  VAR_8->netdev = ((void*)0);
  VAR_8->dev = &VAR_7->pdev->dev;
  VAR_8->count = VAR_4->num_tx_desc;
  VAR_8->size = 0;
  VAR_8->dcb_tc = 0;
  if (VAR_4->back->hw_features & VAR_2)
   VAR_8->flags = VAR_3;
  FUNC_3(VAR_8);
  VAR_8->itr_setting = VAR_7->tx_itr_default;
  VAR_4->xdp_rings[VAR_5] = VAR_8++;

setup_rx:
  VAR_8->queue_index = VAR_5;
  VAR_8->reg_idx = VAR_4->base_queue + VAR_5;
  VAR_8->ring_active = 0;
  VAR_8->vsi = VAR_4;
  VAR_8->netdev = VAR_4->netdev;
  VAR_8->dev = &VAR_7->pdev->dev;
  VAR_8->count = VAR_4->num_rx_desc;
  VAR_8->size = 0;
  VAR_8->dcb_tc = 0;
  VAR_8->itr_setting = VAR_7->rx_itr_default;
  VAR_4->rx_rings[VAR_5] = VAR_8;
 }

 return 0;

err_out:
 FUNC_1(VAR_4);
 return -VAR_0;
}
