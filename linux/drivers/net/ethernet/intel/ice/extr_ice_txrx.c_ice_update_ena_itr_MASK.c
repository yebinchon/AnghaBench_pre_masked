
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ice_vsi {TYPE_1__* back; int state; } ;
struct ice_ring_container {int target_itr; int itr_setting; int current_itr; int itr_idx; } ;
struct ice_q_vector {scalar_t__ itr_countdown; int reg_idx; struct ice_vsi* vsi; struct ice_ring_container rx; struct ice_ring_container tx; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ice_q_vector*,struct ice_ring_container*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ice_q_vector *VAR_6)
{
 struct ice_ring_container *VAR_7 = &VAR_6->tx;
 struct ice_ring_container *VAR_8 = &VAR_6->rx;
 struct ice_vsi *VAR_9 = VAR_6->vsi;
 u32 VAR_10;





 if (VAR_6->itr_countdown == VAR_0) {
  VAR_10 = FUNC_1(VAR_8->itr_idx, VAR_3);
  FUNC_4(&VAR_9->back->hw, FUNC_0(VAR_6->reg_idx), VAR_10);

  VAR_8->target_itr = VAR_8->itr_setting;

  VAR_8->current_itr = VAR_3 |
   (VAR_8->itr_setting & VAR_1);

  VAR_6->itr_countdown = 0;
  return;
 }


 FUNC_2(VAR_6, VAR_7);
 FUNC_2(VAR_6, VAR_8);
 if (VAR_8->target_itr < VAR_8->current_itr) {

  VAR_10 = FUNC_1(VAR_8->itr_idx, VAR_8->target_itr);
  VAR_8->current_itr = VAR_8->target_itr;
  VAR_6->itr_countdown = VAR_4;
 } else if ((VAR_7->target_itr < VAR_7->current_itr) ||
     ((VAR_8->target_itr - VAR_8->current_itr) <
      (VAR_7->target_itr - VAR_7->current_itr))) {



  VAR_10 = FUNC_1(VAR_7->itr_idx, VAR_7->target_itr);
  VAR_7->current_itr = VAR_7->target_itr;
  VAR_6->itr_countdown = VAR_4;
 } else if (VAR_8->current_itr != VAR_8->target_itr) {

  VAR_10 = FUNC_1(VAR_8->itr_idx, VAR_8->target_itr);
  VAR_8->current_itr = VAR_8->target_itr;
  VAR_6->itr_countdown = VAR_4;
 } else {

  VAR_10 = FUNC_1(VAR_2, 0);
  if (VAR_6->itr_countdown)
   VAR_6->itr_countdown--;
 }

 if (!FUNC_3(VAR_5, VAR_6->vsi->state))
  FUNC_4(&VAR_6->vsi->back->hw,
       FUNC_0(VAR_6->reg_idx),
       VAR_10);
}
