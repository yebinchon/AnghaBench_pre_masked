
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mutex {int dummy; } ;
struct ice_vsi_list_map_info {int ref_cnt; int vsi_map; } ;
struct ice_switch_info {TYPE_3__* recp_list; } ;
struct ice_hw {struct ice_switch_info* switch_info; } ;
struct TYPE_8__ {scalar_t__ vsi_list_id; int hw_vsi_id; } ;
struct TYPE_5__ {scalar_t__ vlan_id; } ;
struct TYPE_6__ {TYPE_1__ vlan; } ;
struct ice_fltr_info {scalar_t__ vsi_handle; scalar_t__ src_id; int lkup_type; scalar_t__ fltr_act; TYPE_4__ fwd_id; int fltr_rule_id; int src; TYPE_2__ l_data; } ;
struct ice_fltr_mgmt_list_entry {int vsi_count; struct ice_vsi_list_map_info* vsi_list_info; struct ice_fltr_info fltr_info; } ;
struct ice_fltr_list_entry {struct ice_fltr_info fltr_info; } ;
typedef enum ice_sw_lkup_type { ____Placeholder_ice_sw_lkup_type } ice_sw_lkup_type ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_7__ {struct mutex filt_rule_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ice_hw*,struct ice_fltr_mgmt_list_entry*,struct ice_fltr_info*,struct ice_fltr_info*) ;
 int FUNC_2 (struct ice_hw*,struct ice_fltr_list_entry*) ;
 void* FUNC_3 (struct ice_hw*,scalar_t__*,int,scalar_t__) ;
 int FUNC_4 (struct ice_hw*,scalar_t__*,int,scalar_t__*,int) ;
 int FUNC_5 (struct ice_hw*,int ,char*) ;
 struct ice_fltr_mgmt_list_entry* FUNC_6 (struct ice_hw*,size_t,struct ice_fltr_info*) ;
 struct ice_vsi_list_map_info* FUNC_7 (struct ice_hw*,size_t,scalar_t__,scalar_t__*) ;
 int FUNC_8 (struct ice_hw*,scalar_t__) ;
 int FUNC_9 (struct ice_hw*,scalar_t__) ;
 int FUNC_10 (struct ice_hw*,struct ice_fltr_info*) ;
 int FUNC_11 (struct mutex*) ;
 int FUNC_12 (struct mutex*) ;

__attribute__((used)) static enum ice_status
FUNC_13(struct ice_hw *VAR_11, struct ice_fltr_list_entry *VAR_12)
{
 struct ice_switch_info *VAR_13 = VAR_11->switch_info;
 struct ice_fltr_mgmt_list_entry *VAR_14;
 struct ice_fltr_info *VAR_15, *VAR_16;
 enum ice_sw_lkup_type VAR_17;
 u16 VAR_18 = 0, VAR_19;
 struct mutex *VAR_20;
 enum ice_status VAR_21 = 0;

 if (!FUNC_9(VAR_11, VAR_12->fltr_info.vsi_handle))
  return VAR_4;

 VAR_12->fltr_info.fwd_id.hw_vsi_id =
  FUNC_8(VAR_11, VAR_12->fltr_info.vsi_handle);
 VAR_15 = &VAR_12->fltr_info;


 if (VAR_15->l_data.vlan.vlan_id > VAR_7)
  return VAR_4;

 if (VAR_15->src_id != VAR_9)
  return VAR_4;

 VAR_15->src = VAR_15->fwd_id.hw_vsi_id;
 VAR_17 = VAR_15->lkup_type;
 VAR_19 = VAR_15->vsi_handle;
 VAR_20 = &VAR_13->recp_list[VAR_10].filt_rule_lock;
 FUNC_11(VAR_20);
 VAR_14 = FUNC_6(VAR_11, VAR_10, VAR_15);
 if (!VAR_14) {
  struct ice_vsi_list_map_info *VAR_22 = ((void*)0);

  if (VAR_15->fltr_act == VAR_5) {





   VAR_22 = FUNC_7(VAR_11, VAR_10,
          VAR_19,
          &VAR_18);
   if (!VAR_22) {
    VAR_21 = FUNC_4(VAR_11,
          &VAR_19,
          1,
          &VAR_18,
          VAR_17);
    if (VAR_21)
     goto exit;
   }

   VAR_15->fltr_act = VAR_6;
   VAR_15->fwd_id.vsi_list_id = VAR_18;
  }

  VAR_21 = FUNC_2(VAR_11, VAR_12);
  if (!VAR_21) {
   VAR_14 = FUNC_6(VAR_11, VAR_10,
        VAR_15);
   if (!VAR_14) {
    VAR_21 = VAR_3;
    goto exit;
   }

   if (VAR_22) {
    VAR_14->vsi_list_info = VAR_22;
    VAR_22->ref_cnt++;
   } else {
    VAR_14->vsi_list_info =
     FUNC_3(VAR_11, &VAR_19,
        1, VAR_18);
   }
  }
 } else if (VAR_14->vsi_list_info->ref_cnt == 1) {



  VAR_16 = &VAR_14->fltr_info;
  VAR_21 = FUNC_1(VAR_11, VAR_14, VAR_16,
       VAR_15);
 } else {





  struct ice_fltr_info VAR_23;
  u16 VAR_24[2];
  u16 VAR_25;




  if (VAR_14->vsi_count > 1 &&
      VAR_14->vsi_list_info->ref_cnt > 1) {
   FUNC_5(VAR_11, VAR_0,
      "Invalid configuration: Optimization to reuse VSI list with more than one VSI is not being done yet\n");
   VAR_21 = VAR_2;
   goto exit;
  }

  VAR_25 =
   FUNC_0(VAR_14->vsi_list_info->vsi_map,
           VAR_8);


  if (VAR_25 == VAR_19) {
   VAR_21 = VAR_1;
   goto exit;
  }

  VAR_24[0] = VAR_25;
  VAR_24[1] = VAR_19;
  VAR_21 = FUNC_4(VAR_11, &VAR_24[0], 2,
        &VAR_18, VAR_17);
  if (VAR_21)
   goto exit;

  VAR_23 = VAR_14->fltr_info;
  VAR_23.fltr_rule_id = VAR_14->fltr_info.fltr_rule_id;
  VAR_23.fwd_id.vsi_list_id = VAR_18;
  VAR_23.fltr_act = VAR_6;



  VAR_21 = FUNC_10(VAR_11, &VAR_23);
  if (VAR_21)
   goto exit;




  VAR_14->vsi_list_info->ref_cnt--;


  VAR_14->fltr_info.fwd_id.vsi_list_id = VAR_18;
  VAR_14->vsi_list_info =
   FUNC_3(VAR_11, &VAR_24[0], 2,
      VAR_18);
  VAR_14->vsi_count++;
 }

exit:
 FUNC_12(VAR_20);
 return VAR_21;
}
