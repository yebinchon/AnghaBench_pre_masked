
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ice_hw {scalar_t__ num_tx_sched_layers; scalar_t__ sw_entry_point_layer; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct ice_hw *VAR_1)
{






 if (VAR_1->num_tx_sched_layers > VAR_0 + 1) {
  u8 VAR_2 = VAR_1->num_tx_sched_layers - VAR_0;

  if (VAR_2 > VAR_1->sw_entry_point_layer)
   return VAR_2;
 }
 return VAR_1->sw_entry_point_layer;
}
