
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ice_sw_recipe {int filt_rules; } ;
struct ice_hw {TYPE_3__* switch_info; } ;
struct TYPE_8__ {int lkup_type; void* fltr_rule_id; } ;
struct TYPE_5__ {int index; } ;
struct TYPE_6__ {TYPE_1__ lkup_tx_rx; } ;
struct ice_fltr_mgmt_list_entry {int vsi_count; int list_entry; TYPE_4__ fltr_info; TYPE_2__ pdata; int counter_index; int sw_marker_id; int lg_act_idx; } ;
struct ice_fltr_list_entry {TYPE_4__ fltr_info; } ;
struct ice_aqc_sw_rules_elem {int vsi_count; int list_entry; TYPE_4__ fltr_info; TYPE_2__ pdata; int counter_index; int sw_marker_id; int lg_act_idx; } ;
typedef enum ice_sw_lkup_type { ____Placeholder_ice_sw_lkup_type } ice_sw_lkup_type ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_7__ {struct ice_sw_recipe* recp_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct ice_fltr_mgmt_list_entry*) ;
 struct ice_fltr_mgmt_list_entry* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct ice_hw*,struct ice_fltr_mgmt_list_entry*,int,int,int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (struct ice_hw*,TYPE_4__*,struct ice_fltr_mgmt_list_entry*,int ) ;
 int FUNC_4 (struct ice_hw*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static enum ice_status
FUNC_7(struct ice_hw *VAR_7,
   struct ice_fltr_list_entry *VAR_8)
{
 struct ice_fltr_mgmt_list_entry *VAR_9;
 struct ice_aqc_sw_rules_elem *VAR_10;
 enum ice_sw_lkup_type VAR_11;
 struct ice_sw_recipe *VAR_12;
 enum ice_status VAR_13;

 VAR_10 = FUNC_1(FUNC_4(VAR_7),
         VAR_5, VAR_0);
 if (!VAR_10)
  return VAR_1;
 VAR_9 = FUNC_1(FUNC_4(VAR_7), sizeof(*VAR_9),
    VAR_0);
 if (!VAR_9) {
  VAR_13 = VAR_1;
  goto ice_create_pkt_fwd_rule_exit;
 }

 VAR_9->fltr_info = VAR_8->fltr_info;


 VAR_9->vsi_count = 1;
 VAR_9->lg_act_idx = VAR_3;
 VAR_9->sw_marker_id = VAR_4;
 VAR_9->counter_index = VAR_2;

 FUNC_3(VAR_7, &VAR_9->fltr_info, VAR_10,
    VAR_6);

 VAR_13 = FUNC_2(VAR_7, VAR_10, VAR_5, 1,
     VAR_6, ((void*)0));
 if (VAR_13) {
  FUNC_0(FUNC_4(VAR_7), VAR_9);
  goto ice_create_pkt_fwd_rule_exit;
 }

 VAR_8->fltr_info.fltr_rule_id =
  FUNC_5(VAR_10->pdata.lkup_tx_rx.index);
 VAR_9->fltr_info.fltr_rule_id =
  FUNC_5(VAR_10->pdata.lkup_tx_rx.index);




 VAR_11 = VAR_9->fltr_info.lkup_type;
 VAR_12 = &VAR_7->switch_info->recp_list[VAR_11];
 FUNC_6(&VAR_9->list_entry, &VAR_12->filt_rules);

ice_create_pkt_fwd_rule_exit:
 FUNC_0(FUNC_4(VAR_7), VAR_10);
 return VAR_13;
}
