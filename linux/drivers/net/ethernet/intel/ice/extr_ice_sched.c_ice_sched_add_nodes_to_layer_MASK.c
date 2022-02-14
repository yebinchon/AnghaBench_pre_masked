
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ice_sched_node {size_t tx_sched_layer; scalar_t__ num_children; struct ice_sched_node* sibling; } ;
struct ice_port_info {struct ice_hw* hw; } ;
struct ice_hw {scalar_t__ sw_entry_point_layer; scalar_t__* max_children; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ice_port_info*,struct ice_sched_node*,struct ice_sched_node*,scalar_t__,scalar_t__,scalar_t__*,int *) ;

__attribute__((used)) static enum ice_status
FUNC_1(struct ice_port_info *VAR_2,
        struct ice_sched_node *VAR_3,
        struct ice_sched_node *VAR_4, u8 VAR_5,
        u16 VAR_6, u32 *VAR_7,
        u16 *VAR_8)
{
 u32 *VAR_9 = VAR_7;
 u16 VAR_10, VAR_11;
 enum ice_status VAR_12 = 0;
 struct ice_hw *VAR_13 = VAR_2->hw;
 u16 VAR_14 = 0;
 u32 VAR_15;

 *VAR_8 = 0;

 if (!VAR_6)
  return VAR_12;

 if (!VAR_4 || VAR_5 < VAR_13->sw_entry_point_layer)
  return VAR_1;


 VAR_11 = VAR_13->max_children[VAR_4->tx_sched_layer];


 if ((VAR_4->num_children + VAR_6) > VAR_11) {

  if (VAR_4 == VAR_3)
   return VAR_0;


  if (VAR_4->num_children < VAR_11) {
   VAR_10 = VAR_11 - VAR_4->num_children;



   VAR_12 = FUNC_1(VAR_2, VAR_3,
             VAR_4, VAR_5,
             VAR_10,
             VAR_7,
             &VAR_14);
   if (VAR_12)
    return VAR_12;

   *VAR_8 += VAR_14;
  }




  if (VAR_14)
   VAR_9 = &VAR_15;

  VAR_10 = VAR_6 - VAR_14;


  VAR_4 = VAR_4->sibling;






  VAR_12 = FUNC_1(VAR_2, VAR_3, VAR_4,
            VAR_5, VAR_10,
            VAR_9,
            &VAR_14);
  *VAR_8 += VAR_14;
  return VAR_12;
 }

 VAR_12 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_8, VAR_7);
 return VAR_12;
}
