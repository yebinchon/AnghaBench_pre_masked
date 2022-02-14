
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int node_teid; } ;
struct ice_sched_node {size_t tc_num; struct ice_sched_node* sibling; TYPE_2__ info; } ;
struct ice_port_info {struct ice_sched_node*** sib_head; struct ice_hw* hw; } ;
struct TYPE_13__ {int sq_last_status; } ;
struct ice_hw {TYPE_6__ adminq; } ;
struct TYPE_8__ {void* num_elems; int parent_teid; } ;
struct ice_aqc_add_elem {TYPE_7__* generic; TYPE_1__ hdr; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_11__ {void* bw_alloc; void* bw_profile_idx; } ;
struct TYPE_10__ {void* bw_alloc; void* bw_profile_idx; } ;
struct TYPE_12__ {int valid_sections; TYPE_4__ eir_bw; TYPE_3__ cir_bw; scalar_t__ generic; int elem_type; } ;
struct TYPE_14__ {int node_teid; TYPE_5__ data; int parent_teid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,struct ice_aqc_add_elem*) ;
 struct ice_aqc_add_elem* FUNC_2 (int ,size_t,int ) ;
 int VAR_10 ;
 int FUNC_3 (struct ice_hw*,int,struct ice_aqc_add_elem*,size_t,int*,int *) ;
 int FUNC_4 (struct ice_hw*,int ,char*,int) ;
 int FUNC_5 (struct ice_hw*) ;
 int FUNC_6 (struct ice_port_info*,size_t,TYPE_7__*) ;
 struct ice_sched_node* FUNC_7 (struct ice_sched_node*,int) ;
 struct ice_sched_node* FUNC_8 (struct ice_port_info*,struct ice_sched_node*,size_t) ;
 int FUNC_9 (int ) ;
 size_t FUNC_10 (struct ice_aqc_add_elem*,int ,int) ;

__attribute__((used)) static enum ice_status
FUNC_11(struct ice_port_info *VAR_11, struct ice_sched_node *VAR_12,
      struct ice_sched_node *VAR_13, u8 VAR_14, u16 VAR_15,
      u16 *VAR_16, u32 *VAR_17)
{
 struct ice_sched_node *VAR_18, *VAR_19;
 struct ice_aqc_add_elem *VAR_20;
 u16 VAR_21, VAR_22 = 0;
 enum ice_status VAR_23 = 0;
 struct ice_hw *VAR_24 = VAR_11->hw;
 size_t VAR_25;
 u32 VAR_26;

 VAR_25 = FUNC_10(VAR_20, VAR_10, VAR_15 - 1);
 VAR_20 = FUNC_2(FUNC_5(VAR_24), VAR_25, VAR_0);
 if (!VAR_20)
  return VAR_7;

 VAR_20->hdr.parent_teid = VAR_13->info.node_teid;
 VAR_20->hdr.num_elems = FUNC_0(VAR_15);
 for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
  VAR_20->generic[VAR_21].parent_teid = VAR_13->info.node_teid;
  VAR_20->generic[VAR_21].data.elem_type = VAR_1;
  VAR_20->generic[VAR_21].data.valid_sections =
   VAR_4 | VAR_2 |
   VAR_3;
  VAR_20->generic[VAR_21].data.generic = 0;
  VAR_20->generic[VAR_21].data.cir_bw.bw_profile_idx =
   FUNC_0(VAR_9);
  VAR_20->generic[VAR_21].data.cir_bw.bw_alloc =
   FUNC_0(VAR_8);
  VAR_20->generic[VAR_21].data.eir_bw.bw_profile_idx =
   FUNC_0(VAR_9);
  VAR_20->generic[VAR_21].data.eir_bw.bw_alloc =
   FUNC_0(VAR_8);
 }

 VAR_23 = FUNC_3(VAR_24, 1, VAR_20, VAR_25,
     &VAR_22, ((void*)0));
 if (VAR_23 || VAR_22 != 1) {
  FUNC_4(VAR_24, VAR_5, "add node failed FW Error %d\n",
     VAR_24->adminq.sq_last_status);
  FUNC_1(FUNC_5(VAR_24), VAR_20);
  return VAR_6;
 }

 *VAR_16 = VAR_15;

 for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
  VAR_23 = FUNC_6(VAR_11, VAR_14, &VAR_20->generic[VAR_21]);
  if (VAR_23) {
   FUNC_4(VAR_24, VAR_5,
      "add nodes in SW DB failed status =%d\n",
      VAR_23);
   break;
  }

  VAR_26 = FUNC_9(VAR_20->generic[VAR_21].node_teid);
  VAR_19 = FUNC_7(VAR_13, VAR_26);
  if (!VAR_19) {
   FUNC_4(VAR_24, VAR_5,
      "Node is missing for teid =%d\n", VAR_26);
   break;
  }

  VAR_19->sibling = ((void*)0);
  VAR_19->tc_num = VAR_12->tc_num;



  VAR_18 = FUNC_8(VAR_11, VAR_12, VAR_14);
  if (VAR_18 && VAR_18 != VAR_19) {
   while (VAR_18->sibling)
    VAR_18 = VAR_18->sibling;
   VAR_18->sibling = VAR_19;
  }


  if (!VAR_11->sib_head[VAR_12->tc_num][VAR_14])
   VAR_11->sib_head[VAR_12->tc_num][VAR_14] = VAR_19;

  if (VAR_21 == 0)
   *VAR_17 = VAR_26;
 }

 FUNC_1(FUNC_5(VAR_24), VAR_20);
 return VAR_23;
}
