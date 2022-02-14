
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {scalar_t__ max_cgds; scalar_t__ flattened_layers; scalar_t__ num_tx_sched_phys_layers; scalar_t__ num_tx_sched_layers; scalar_t__ port_info; int * layer_info; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ice_hw*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct ice_hw *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->layer_info) {
  FUNC_0(FUNC_1(VAR_0), VAR_0->layer_info);
  VAR_0->layer_info = ((void*)0);
 }

 if (VAR_0->port_info)
  FUNC_2(VAR_0->port_info);

 VAR_0->num_tx_sched_layers = 0;
 VAR_0->num_tx_sched_phys_layers = 0;
 VAR_0->flattened_layers = 0;
 VAR_0->max_cgds = 0;
}
