
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ice_sched_node {scalar_t__ vsi_handle; struct ice_sched_node** children; } ;
struct ice_port_info {TYPE_1__* hw; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_2__ {size_t sw_entry_point_layer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_port_info*,struct ice_sched_node*,struct ice_sched_node*,size_t,scalar_t__,int *,scalar_t__*) ;
 struct ice_sched_node* FUNC_1 (struct ice_sched_node*,int ) ;
 size_t FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static enum ice_status
FUNC_3(struct ice_port_info *VAR_2, u16 VAR_3,
    struct ice_sched_node *VAR_4, u16 *VAR_5)
{
 struct ice_sched_node *VAR_6 = VAR_4;
 enum ice_status VAR_7;
 u32 VAR_8;
 u16 VAR_9 = 0;
 u8 VAR_10, VAR_11;

 if (!VAR_2)
  return VAR_1;

 VAR_11 = FUNC_2(VAR_2->hw);
 for (VAR_10 = VAR_2->hw->sw_entry_point_layer; VAR_10 <= VAR_11; VAR_10++) {
  VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_6,
            VAR_10, VAR_5[VAR_10],
            &VAR_8,
            &VAR_9);
  if (VAR_7 || VAR_5[VAR_10] != VAR_9)
   return VAR_0;




  if (VAR_9)
   VAR_6 = FUNC_1(VAR_4,
            VAR_8);
  else
   VAR_6 = VAR_6->children[0];

  if (!VAR_6)
   return VAR_0;

  if (VAR_10 == VAR_11)
   VAR_6->vsi_handle = VAR_3;
 }

 return 0;
}
