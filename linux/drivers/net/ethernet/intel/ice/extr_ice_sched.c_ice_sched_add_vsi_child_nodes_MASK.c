
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ice_sched_node {size_t owner; struct ice_sched_node** children; struct ice_sched_node* sibling; } ;
struct ice_port_info {struct ice_hw* hw; } ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_port_info*,struct ice_sched_node*,struct ice_sched_node*,size_t,scalar_t__,int *,scalar_t__*) ;
 struct ice_sched_node* FUNC_1 (struct ice_sched_node*,int ) ;
 size_t FUNC_2 (struct ice_hw*) ;
 size_t FUNC_3 (struct ice_hw*) ;
 struct ice_sched_node* FUNC_4 (struct ice_hw*,struct ice_sched_node*,scalar_t__) ;

__attribute__((used)) static enum ice_status
FUNC_5(struct ice_port_info *VAR_1, u16 VAR_2,
         struct ice_sched_node *VAR_3, u16 *VAR_4,
         u8 VAR_5)
{
 struct ice_sched_node *VAR_6, *VAR_7;
 struct ice_hw *VAR_8 = VAR_1->hw;
 enum ice_status VAR_9;
 u32 VAR_10;
 u16 VAR_11 = 0;
 u8 VAR_12, VAR_13, VAR_14;

 VAR_13 = FUNC_2(VAR_8);
 VAR_14 = FUNC_3(VAR_8);
 VAR_6 = FUNC_4(VAR_8, VAR_3, VAR_2);
 for (VAR_12 = VAR_14 + 1; VAR_12 <= VAR_13; VAR_12++) {
  if (!VAR_6)
   return VAR_0;

  VAR_9 = FUNC_0(VAR_1, VAR_3, VAR_6, VAR_12,
            VAR_4[VAR_12],
            &VAR_10,
            &VAR_11);
  if (VAR_9 || VAR_4[VAR_12] != VAR_11)
   return VAR_0;




  if (VAR_11) {
   VAR_6 = FUNC_1(VAR_3,
            VAR_10);
   VAR_7 = VAR_6;
   while (VAR_7) {
    VAR_7->owner = VAR_5;
    VAR_7 = VAR_7->sibling;
   }
  } else {
   VAR_6 = VAR_6->children[0];
  }
 }

 return 0;
}
