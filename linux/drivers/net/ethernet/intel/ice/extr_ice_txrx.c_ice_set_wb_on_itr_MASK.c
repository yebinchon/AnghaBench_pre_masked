
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_vsi {TYPE_1__* back; } ;
struct ice_q_vector {scalar_t__ itr_countdown; int reg_idx; scalar_t__ num_ring_tx; scalar_t__ num_ring_rx; struct ice_vsi* vsi; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ice_q_vector *VAR_4)
{
 struct ice_vsi *VAR_5 = VAR_4->vsi;


 if (VAR_4->itr_countdown == VAR_0)
  return;

 if (VAR_4->num_ring_rx)
  FUNC_2(&VAR_5->back->hw, FUNC_0(VAR_4->reg_idx),
       FUNC_1(VAR_3,
       VAR_1));

 if (VAR_4->num_ring_tx)
  FUNC_2(&VAR_5->back->hw, FUNC_0(VAR_4->reg_idx),
       FUNC_1(VAR_3,
       VAR_2));

 VAR_4->itr_countdown = VAR_0;
}
