
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ice_sched_node {scalar_t__ num_children; struct ice_sched_node* sibling; } ;
struct ice_hw {int sw_entry_point_layer; scalar_t__* max_children; int port_info; } ;


 struct ice_sched_node* FUNC_0 (int ,struct ice_sched_node*,int) ;
 int FUNC_1 (struct ice_hw*) ;

__attribute__((used)) static void
FUNC_2(struct ice_hw *VAR_0,
     struct ice_sched_node *VAR_1, u16 *VAR_2)
{
 struct ice_sched_node *VAR_3;
 u8 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_0);
 for (VAR_5 = VAR_4; VAR_5 >= VAR_0->sw_entry_point_layer; VAR_5--)



  if (!VAR_1->num_children || VAR_5 == VAR_4) {
   VAR_2[VAR_5]++;
  } else {



   VAR_3 = FUNC_0(VAR_0->port_info, VAR_1,
       (u8)VAR_5);

   while (VAR_3) {
    if (VAR_3->num_children < VAR_0->max_children[VAR_5])
     break;
    VAR_3 = VAR_3->sibling;
   }





   if (VAR_3)
    break;

   VAR_2[VAR_5]++;
  }
}
