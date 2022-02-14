
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct i40e_vsi {struct i40e_ring** rx_rings; struct i40e_ring** tx_rings; } ;
struct i40e_ring {int * ch; } ;
struct i40e_channel {int num_queue_pairs; size_t base_queue; } ;



__attribute__((used)) static void FUNC_0(struct i40e_vsi *VAR_0, struct i40e_channel *VAR_1)
{
 struct i40e_ring *VAR_2, *VAR_3;
 u16 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_queue_pairs; VAR_5++) {
  VAR_4 = VAR_1->base_queue + VAR_5;
  VAR_2 = VAR_0->tx_rings[VAR_4];
  VAR_2->ch = ((void*)0);
  VAR_3 = VAR_0->rx_rings[VAR_4];
  VAR_3->ch = ((void*)0);
 }
}
