
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct ice_vsi {int num_q_vectors; struct ice_q_vector** q_vectors; struct ice_pf* back; } ;
struct TYPE_4__ {int itr_idx; } ;
struct TYPE_3__ {int itr_idx; } ;
struct ice_q_vector {int num_ring_tx; int num_ring_rx; TYPE_2__ rx; TYPE_1__ tx; int intrl; int reg_idx; } ;
struct ice_hw {int intrl_gran; } ;
struct ice_pf {struct ice_hw hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_q_vector*) ;
 int FUNC_2 (struct ice_vsi*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct ice_vsi*,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ice_hw*,int ,int ) ;

void FUNC_6(struct ice_vsi *VAR_0)
{
 struct ice_pf *VAR_1 = VAR_0->back;
 struct ice_hw *VAR_2 = &VAR_1->hw;
 u32 VAR_3 = 0, VAR_4 = 0;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_q_vectors; VAR_5++) {
  struct ice_q_vector *VAR_7 = VAR_0->q_vectors[VAR_5];
  u16 VAR_8 = VAR_7->reg_idx;

  FUNC_1(VAR_2, VAR_7);

  FUNC_5(VAR_2, FUNC_0(VAR_8),
       FUNC_4(VAR_7->intrl, VAR_2->intrl_gran));
  for (VAR_6 = 0; VAR_6 < VAR_7->num_ring_tx; VAR_6++) {
   FUNC_3(VAR_0, VAR_3, VAR_8,
           VAR_7->tx.itr_idx);
   VAR_3++;
  }

  for (VAR_6 = 0; VAR_6 < VAR_7->num_ring_rx; VAR_6++) {
   FUNC_2(VAR_0, VAR_4, VAR_8,
           VAR_7->rx.itr_idx);
   VAR_4++;
  }
 }
}
