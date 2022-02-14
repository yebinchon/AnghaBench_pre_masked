
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__* max_lanq; struct ice_sched_node** vsi_node; } ;
struct ice_vsi_ctx {TYPE_1__ sched; } ;
struct TYPE_4__ {int node_teid; } ;
struct ice_sched_node {int in_use; TYPE_2__ info; } ;
struct ice_port_info {struct ice_hw* hw; } ;
struct ice_hw {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ice_hw*,int ,char*,int ) ;
 struct ice_vsi_ctx* FUNC_1 (struct ice_hw*,int ) ;
 int FUNC_2 (struct ice_port_info*,int ,size_t) ;
 struct ice_sched_node* FUNC_3 (struct ice_port_info*,size_t) ;
 struct ice_sched_node* FUNC_4 (struct ice_hw*,struct ice_sched_node*,int ) ;
 int FUNC_5 (struct ice_hw*,int,int *,int) ;
 int FUNC_6 (struct ice_port_info*,int ,size_t,int ,size_t) ;
 int FUNC_7 (int ) ;

enum ice_status
FUNC_8(struct ice_port_info *VAR_3, u16 VAR_4, u8 VAR_5, u16 VAR_6,
    u8 VAR_7, bool VAR_8)
{
 struct ice_sched_node *VAR_9, *VAR_10;
 struct ice_vsi_ctx *VAR_11;
 enum ice_status VAR_12 = 0;
 struct ice_hw *VAR_13 = VAR_3->hw;

 FUNC_0(VAR_3->hw, VAR_0, "add/config VSI %d\n", VAR_4);
 VAR_10 = FUNC_3(VAR_3, VAR_5);
 if (!VAR_10)
  return VAR_2;
 VAR_11 = FUNC_1(VAR_13, VAR_4);
 if (!VAR_11)
  return VAR_2;
 VAR_9 = FUNC_4(VAR_13, VAR_10, VAR_4);


 if (!VAR_8) {
  if (VAR_9 && VAR_9->in_use) {
   u32 VAR_14 = FUNC_7(VAR_9->info.node_teid);

   VAR_12 = FUNC_5(VAR_13, 1, &VAR_14,
        1);
   if (!VAR_12)
    VAR_9->in_use = 0;
  }
  return VAR_12;
 }


 if (!VAR_9) {
  VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_5);
  if (VAR_12)
   return VAR_12;

  VAR_9 = FUNC_4(VAR_13, VAR_10, VAR_4);
  if (!VAR_9)
   return VAR_1;

  VAR_11->sched.vsi_node[VAR_5] = VAR_9;
  VAR_9->in_use = 1;




  VAR_11->sched.max_lanq[VAR_5] = 0;
 }


 VAR_12 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);
 if (VAR_12)
  return VAR_12;


 if (!VAR_9->in_use) {
  u32 VAR_15 = FUNC_7(VAR_9->info.node_teid);

  VAR_12 = FUNC_5(VAR_13, 1, &VAR_15, 0);
  if (!VAR_12)
   VAR_9->in_use = 1;
 }

 return VAR_12;
}
