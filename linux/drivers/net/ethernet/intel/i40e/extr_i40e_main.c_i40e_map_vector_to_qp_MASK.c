
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40e_vsi {struct i40e_ring** xdp_rings; struct i40e_ring** rx_rings; struct i40e_ring** tx_rings; struct i40e_q_vector** q_vectors; } ;
struct i40e_ring {struct i40e_ring* next; struct i40e_q_vector* q_vector; } ;
struct TYPE_4__ {int count; struct i40e_ring* ring; } ;
struct TYPE_3__ {int count; struct i40e_ring* ring; } ;
struct i40e_q_vector {TYPE_2__ rx; TYPE_1__ tx; } ;


 scalar_t__ FUNC_0 (struct i40e_vsi*) ;

__attribute__((used)) static void FUNC_1(struct i40e_vsi *VAR_0, int VAR_1, int VAR_2)
{
 struct i40e_q_vector *VAR_3 = VAR_0->q_vectors[VAR_1];
 struct i40e_ring *VAR_4 = VAR_0->tx_rings[VAR_2];
 struct i40e_ring *VAR_5 = VAR_0->rx_rings[VAR_2];

 VAR_4->q_vector = VAR_3;
 VAR_4->next = VAR_3->tx.ring;
 VAR_3->tx.ring = VAR_4;
 VAR_3->tx.count++;


 if (FUNC_0(VAR_0)) {
  struct i40e_ring *VAR_6 = VAR_0->xdp_rings[VAR_2];

  VAR_6->q_vector = VAR_3;
  VAR_6->next = VAR_3->tx.ring;
  VAR_3->tx.ring = VAR_6;
  VAR_3->tx.count++;
 }

 VAR_5->q_vector = VAR_3;
 VAR_5->next = VAR_3->rx.ring;
 VAR_3->rx.ring = VAR_5;
 VAR_3->rx.count++;
}
