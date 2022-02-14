
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct mutex {int dummy; } ;
struct ice_switch_info {TYPE_2__* recp_list; } ;
struct ice_hw {struct ice_switch_info* switch_info; } ;
struct TYPE_10__ {scalar_t__ fltr_act; } ;
struct ice_fltr_mgmt_list_entry {scalar_t__ vsi_count; int list_entry; TYPE_5__ fltr_info; TYPE_3__* vsi_list_info; } ;
struct TYPE_6__ {int hw_vsi_id; } ;
struct TYPE_9__ {int vsi_handle; TYPE_1__ fwd_id; } ;
struct ice_fltr_list_entry {TYPE_4__ fltr_info; } ;
struct ice_aqc_sw_rules_elem {scalar_t__ vsi_count; int list_entry; TYPE_5__ fltr_info; TYPE_3__* vsi_list_info; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_8__ {int ref_cnt; } ;
struct TYPE_7__ {struct mutex filt_rule_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct ice_fltr_mgmt_list_entry*) ;
 struct ice_fltr_mgmt_list_entry* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ice_hw*,struct ice_fltr_mgmt_list_entry*,int ,int,int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (struct ice_hw*,TYPE_5__*,struct ice_fltr_mgmt_list_entry*,int ) ;
 struct ice_fltr_mgmt_list_entry* FUNC_4 (struct ice_hw*,size_t,TYPE_4__*) ;
 int FUNC_5 (struct ice_hw*,int ) ;
 int FUNC_6 (struct ice_hw*) ;
 int FUNC_7 (struct ice_hw*,int ) ;
 int FUNC_8 (struct ice_hw*,int ,struct ice_fltr_mgmt_list_entry*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mutex*) ;
 int FUNC_11 (struct mutex*) ;

__attribute__((used)) static enum ice_status
FUNC_12(struct ice_hw *VAR_7, u8 VAR_8,
    struct ice_fltr_list_entry *VAR_9)
{
 struct ice_switch_info *VAR_10 = VAR_7->switch_info;
 struct ice_fltr_mgmt_list_entry *VAR_11;
 struct mutex *VAR_12;
 enum ice_status VAR_13 = 0;
 bool VAR_14 = 0;
 u16 VAR_15;

 if (!FUNC_7(VAR_7, VAR_9->fltr_info.vsi_handle))
  return VAR_3;
 VAR_9->fltr_info.fwd_id.hw_vsi_id =
  FUNC_5(VAR_7, VAR_9->fltr_info.vsi_handle);

 VAR_12 = &VAR_10->recp_list[VAR_8].filt_rule_lock;
 FUNC_10(VAR_12);
 VAR_11 = FUNC_4(VAR_7, VAR_8, &VAR_9->fltr_info);
 if (!VAR_11) {
  VAR_13 = VAR_1;
  goto exit;
 }

 if (VAR_11->fltr_info.fltr_act != VAR_4) {
  VAR_14 = 1;
 } else if (!VAR_11->vsi_list_info) {
  VAR_13 = VAR_1;
  goto exit;
 } else if (VAR_11->vsi_list_info->ref_cnt > 1) {





  VAR_11->vsi_list_info->ref_cnt--;
  VAR_14 = 1;
 } else {





  VAR_15 = VAR_9->fltr_info.vsi_handle;
  VAR_13 = FUNC_8(VAR_7, VAR_15, VAR_11);
  if (VAR_13)
   goto exit;

  if (VAR_11->vsi_count == 0)
   VAR_14 = 1;
 }

 if (VAR_14) {

  struct ice_aqc_sw_rules_elem *VAR_16;

  VAR_16 = FUNC_1(FUNC_6(VAR_7),
          VAR_5,
          VAR_0);
  if (!VAR_16) {
   VAR_13 = VAR_2;
   goto exit;
  }

  FUNC_3(VAR_7, &VAR_11->fltr_info, VAR_16,
     VAR_6);

  VAR_13 = FUNC_2(VAR_7, VAR_16,
      VAR_5, 1,
      VAR_6, ((void*)0));


  FUNC_0(FUNC_6(VAR_7), VAR_16);

  if (VAR_13)
   goto exit;

  FUNC_9(&VAR_11->list_entry);
  FUNC_0(FUNC_6(VAR_7), VAR_11);
 }
exit:
 FUNC_11(VAR_12);
 return VAR_13;
}
