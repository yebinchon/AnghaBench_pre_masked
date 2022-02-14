
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ice_sched_node {scalar_t__ vsi_handle; struct ice_sched_node* sibling; } ;
struct ice_hw {int port_info; } ;


 struct ice_sched_node* FUNC_0 (int ,struct ice_sched_node*,int ) ;
 int FUNC_1 (struct ice_hw*) ;

__attribute__((used)) static struct ice_sched_node *
FUNC_2(struct ice_hw *VAR_0, struct ice_sched_node *VAR_1,
         u16 VAR_2)
{
 struct ice_sched_node *VAR_3;
 u8 VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_0->port_info, VAR_1, VAR_4);


 while (VAR_3) {
  if (VAR_3->vsi_handle == VAR_2)
   return VAR_3;
  VAR_3 = VAR_3->sibling;
 }

 return VAR_3;
}
