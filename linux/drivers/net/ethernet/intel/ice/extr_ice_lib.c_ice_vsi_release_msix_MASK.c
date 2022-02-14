
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct ice_vsi {int num_q_vectors; int * rxq_map; int * txq_map; struct ice_q_vector** q_vectors; struct ice_pf* back; } ;
struct ice_q_vector {int num_ring_tx; int num_ring_rx; int reg_idx; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {struct ice_hw hw; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ice_hw*) ;
 int FUNC_4 (struct ice_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ice_vsi *VAR_2)
{
 struct ice_pf *VAR_3 = VAR_2->back;
 struct ice_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_2->num_q_vectors; VAR_7++) {
  struct ice_q_vector *VAR_9 = VAR_2->q_vectors[VAR_7];
  u16 VAR_10 = VAR_9->reg_idx;

  FUNC_4(VAR_4, FUNC_0(VAR_0, VAR_10), 0);
  FUNC_4(VAR_4, FUNC_0(VAR_1, VAR_10), 0);
  for (VAR_8 = 0; VAR_8 < VAR_9->num_ring_tx; VAR_8++) {
   FUNC_4(VAR_4, FUNC_2(VAR_2->txq_map[VAR_5]), 0);
   VAR_5++;
  }

  for (VAR_8 = 0; VAR_8 < VAR_9->num_ring_rx; VAR_8++) {
   FUNC_4(VAR_4, FUNC_1(VAR_2->rxq_map[VAR_6]), 0);
   VAR_6++;
  }
 }

 FUNC_3(VAR_4);
}
