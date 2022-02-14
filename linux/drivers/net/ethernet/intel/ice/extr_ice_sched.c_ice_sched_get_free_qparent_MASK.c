
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {struct ice_sched_node** vsi_node; } ;
struct ice_vsi_ctx {TYPE_1__ sched; } ;
struct ice_sched_node {scalar_t__ num_children; size_t owner; struct ice_sched_node* sibling; } ;
struct ice_port_info {TYPE_2__* hw; } ;
struct TYPE_6__ {scalar_t__* max_children; } ;


 struct ice_vsi_ctx* FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct ice_sched_node*,struct ice_sched_node*) ;
 struct ice_sched_node* FUNC_2 (struct ice_port_info*,struct ice_sched_node*,size_t) ;
 size_t FUNC_3 (TYPE_2__*) ;

struct ice_sched_node *
FUNC_4(struct ice_port_info *VAR_0, u16 VAR_1, u8 VAR_2,
      u8 VAR_3)
{
 struct ice_sched_node *VAR_4, *VAR_5 = ((void*)0);
 struct ice_vsi_ctx *VAR_6;
 u16 VAR_7;
 u8 VAR_8;

 VAR_8 = FUNC_3(VAR_0->hw);
 VAR_7 = VAR_0->hw->max_children[VAR_8];

 VAR_6 = FUNC_0(VAR_0->hw, VAR_1);
 if (!VAR_6)
  return ((void*)0);
 VAR_4 = VAR_6->sched.vsi_node[VAR_2];

 if (!VAR_4)
  goto lan_q_exit;


 VAR_5 = FUNC_2(VAR_0, VAR_4, VAR_8);
 while (VAR_5) {

  if (FUNC_1(VAR_0->hw, VAR_4, VAR_5))
   if (VAR_5->num_children < VAR_7 &&
       VAR_5->owner == VAR_3)
    break;
  VAR_5 = VAR_5->sibling;
 }

lan_q_exit:
 return VAR_5;
}
