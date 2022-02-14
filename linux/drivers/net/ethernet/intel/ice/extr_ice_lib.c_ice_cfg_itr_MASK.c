
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_ring_container {void* current_itr; int itr_idx; void* target_itr; void* next_update; scalar_t__ itr_setting; } ;
struct ice_q_vector {int reg_idx; struct ice_ring_container tx; scalar_t__ num_ring_tx; struct ice_ring_container rx; scalar_t__ num_ring_rx; } ;
struct ice_hw {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ice_hw*) ;
 void* VAR_3 ;
 int FUNC_4 (struct ice_hw*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct ice_hw *VAR_4, struct ice_q_vector *VAR_5)
{
 FUNC_3(VAR_4);

 if (VAR_5->num_ring_rx) {
  struct ice_ring_container *VAR_6 = &VAR_5->rx;


  if (!VAR_6->itr_setting)
   VAR_6->itr_setting = VAR_0;

  VAR_6->target_itr = FUNC_2(VAR_6->itr_setting);
  VAR_6->next_update = VAR_3 + 1;
  VAR_6->current_itr = VAR_6->target_itr;
  FUNC_4(VAR_4, FUNC_0(VAR_6->itr_idx, VAR_5->reg_idx),
       FUNC_1(VAR_6->current_itr) >> VAR_2);
 }

 if (VAR_5->num_ring_tx) {
  struct ice_ring_container *VAR_7 = &VAR_5->tx;


  if (!VAR_7->itr_setting)
   VAR_7->itr_setting = VAR_1;

  VAR_7->target_itr = FUNC_2(VAR_7->itr_setting);
  VAR_7->next_update = VAR_3 + 1;
  VAR_7->current_itr = VAR_7->target_itr;
  FUNC_4(VAR_4, FUNC_0(VAR_7->itr_idx, VAR_5->reg_idx),
       FUNC_1(VAR_7->current_itr) >> VAR_2);
 }
}
