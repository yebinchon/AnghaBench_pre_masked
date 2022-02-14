
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct ice_hw {int dummy; } ;
struct ice_fltr_mgmt_list_entry {int vsi_count; scalar_t__ sw_marker_id; TYPE_2__* vsi_list_info; int lg_act_idx; } ;
struct TYPE_3__ {scalar_t__ hw_vsi_id; void* vsi_list_id; } ;
struct ice_fltr_info {scalar_t__ fltr_act; int lkup_type; TYPE_1__ fwd_id; void* vsi_handle; int fltr_rule_id; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_adminq_opc { ____Placeholder_ice_adminq_opc } ice_adminq_opc ;
struct TYPE_4__ {int vsi_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ice_hw*,struct ice_fltr_mgmt_list_entry*,scalar_t__,int ) ;
 int VAR_8 ;
 TYPE_2__* FUNC_1 (struct ice_hw*,void**,int,void*) ;
 int FUNC_2 (struct ice_hw*,void**,int,void**,int ) ;
 int FUNC_3 (struct ice_hw*,struct ice_fltr_info*) ;
 int FUNC_4 (struct ice_hw*,void**,int,void*,int,int,int ) ;
 int FUNC_5 (void*,int ) ;
 scalar_t__ FUNC_6 (void*,int ) ;

__attribute__((used)) static enum ice_status
FUNC_7(struct ice_hw *VAR_9,
   struct ice_fltr_mgmt_list_entry *VAR_10,
   struct ice_fltr_info *VAR_11,
   struct ice_fltr_info *VAR_12)
{
 enum ice_status VAR_13 = 0;
 u16 VAR_14 = 0;

 if ((VAR_11->fltr_act == VAR_3 ||
      VAR_11->fltr_act == VAR_4))
  return VAR_2;

 if ((VAR_12->fltr_act == VAR_3 ||
      VAR_12->fltr_act == VAR_4) &&
     (VAR_11->fltr_act == VAR_5 ||
      VAR_11->fltr_act == VAR_6))
  return VAR_2;

 if (VAR_10->vsi_count < 2 && !VAR_10->vsi_list_info) {




  struct ice_fltr_info VAR_15;
  u16 VAR_16[2];


  if (VAR_11->fwd_id.hw_vsi_id == VAR_12->fwd_id.hw_vsi_id)
   return VAR_0;

  VAR_16[0] = VAR_11->vsi_handle;
  VAR_16[1] = VAR_12->vsi_handle;
  VAR_13 = FUNC_2(VAR_9, &VAR_16[0], 2,
        &VAR_14,
        VAR_12->lkup_type);
  if (VAR_13)
   return VAR_13;

  VAR_15 = *VAR_12;
  VAR_15.fltr_rule_id = VAR_11->fltr_rule_id;
  VAR_15.fltr_act = VAR_6;
  VAR_15.fwd_id.vsi_list_id = VAR_14;



  VAR_13 = FUNC_3(VAR_9, &VAR_15);
  if (VAR_13)
   return VAR_13;

  VAR_11->fwd_id.vsi_list_id = VAR_14;
  VAR_11->fltr_act = VAR_6;
  VAR_10->vsi_list_info =
   FUNC_1(VAR_9, &VAR_16[0], 2,
      VAR_14);




  if (VAR_10->sw_marker_id != VAR_7)
   VAR_13 =
       FUNC_0(VAR_9, VAR_10,
            VAR_10->sw_marker_id,
            VAR_10->lg_act_idx);
 } else {
  u16 VAR_17 = VAR_12->vsi_handle;
  enum ice_adminq_opc VAR_18;

  if (!VAR_10->vsi_list_info)
   return VAR_1;


  if (FUNC_6(VAR_17, VAR_10->vsi_list_info->vsi_map))
   return 0;




  VAR_14 = VAR_11->fwd_id.vsi_list_id;
  VAR_18 = VAR_8;

  VAR_13 = FUNC_4(VAR_9, &VAR_17, 1,
        VAR_14, 0, VAR_18,
        VAR_12->lkup_type);

  if (!VAR_13)
   FUNC_5(VAR_17, VAR_10->vsi_list_info->vsi_map);
 }
 if (!VAR_13)
  VAR_10->vsi_count++;
 return VAR_13;
}
