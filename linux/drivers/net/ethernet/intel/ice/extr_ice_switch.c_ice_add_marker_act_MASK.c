
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ice_hw {int dummy; } ;
struct TYPE_6__ {int vsi_list_id; int hw_vsi_id; } ;
struct TYPE_10__ {scalar_t__ lkup_type; int const fltr_rule_id; TYPE_1__ fwd_id; } ;
struct ice_fltr_mgmt_list_entry {int vsi_count; int lg_act_idx; int sw_marker_id; TYPE_5__ fltr_info; } ;
struct TYPE_8__ {void* index; void* act; } ;
struct TYPE_7__ {void** act; void* size; void* index; } ;
struct TYPE_9__ {TYPE_3__ lkup_tx_rx; TYPE_2__ lg_act; } ;
struct ice_aqc_sw_rules_elem {TYPE_4__ pdata; void* type; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_0 (int const) ;
 int VAR_19 ;
 void* FUNC_1 (int const) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,struct ice_aqc_sw_rules_elem*) ;
 struct ice_aqc_sw_rules_elem* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct ice_hw*,struct ice_aqc_sw_rules_elem*,int,int,int ,int *) ;
 int VAR_20 ;
 int FUNC_6 (struct ice_hw*,TYPE_5__*,struct ice_aqc_sw_rules_elem*,int ) ;
 int FUNC_7 (struct ice_hw*) ;

__attribute__((used)) static enum ice_status
FUNC_8(struct ice_hw *VAR_21, struct ice_fltr_mgmt_list_entry *VAR_22,
     u16 VAR_23, u16 VAR_24)
{
 struct ice_aqc_sw_rules_elem *VAR_25, *VAR_26;





 const u16 VAR_27 = 3;
 enum ice_status VAR_28;
 u16 VAR_29;
 u16 VAR_30;
 u32 VAR_31;
 u16 VAR_32;

 if (VAR_22->fltr_info.lkup_type != VAR_18)
  return VAR_3;






 VAR_29 = (u16)FUNC_0(VAR_27);
 VAR_30 = VAR_29 + VAR_19;
 VAR_25 = FUNC_4(FUNC_7(VAR_21), VAR_30, VAR_0);
 if (!VAR_25)
  return VAR_2;

 VAR_26 = (struct ice_aqc_sw_rules_elem *)((u8 *)VAR_25 + VAR_29);


 VAR_25->type = FUNC_1(VAR_1);
 VAR_25->pdata.lg_act.index = FUNC_1(VAR_24);
 VAR_25->pdata.lg_act.size = FUNC_1(VAR_27);




 VAR_32 = (VAR_22->vsi_count > 1) ? VAR_22->fltr_info.fwd_id.vsi_list_id :
  VAR_22->fltr_info.fwd_id.hw_vsi_id;

 VAR_31 = VAR_11 | VAR_10;
 VAR_31 |= (VAR_32 << VAR_14) &
  VAR_13;
 if (VAR_22->vsi_count > 1)
  VAR_31 |= VAR_12;
 VAR_25->pdata.lg_act.act[0] = FUNC_2(VAR_31);


 VAR_31 = VAR_4;

 VAR_31 |= (1 << VAR_9) & VAR_8;
 VAR_25->pdata.lg_act.act[1] = FUNC_2(VAR_31);

 VAR_31 = (VAR_7 <<
        VAR_6) & VAR_5;


 VAR_31 |= VAR_4;
 VAR_31 |= (VAR_23 << VAR_9) &
  VAR_8;

 VAR_25->pdata.lg_act.act[2] = FUNC_2(VAR_31);


 FUNC_6(VAR_21, &VAR_22->fltr_info, VAR_26,
    VAR_20);


 VAR_26->pdata.lkup_tx_rx.act =
  FUNC_2(VAR_15 |
       ((VAR_24 << VAR_17) &
        VAR_16));





 VAR_26->pdata.lkup_tx_rx.index =
  FUNC_1(VAR_22->fltr_info.fltr_rule_id);

 VAR_28 = FUNC_5(VAR_21, VAR_25, VAR_30, 2,
     VAR_20, ((void*)0));
 if (!VAR_28) {
  VAR_22->lg_act_idx = VAR_24;
  VAR_22->sw_marker_id = VAR_23;
 }

 FUNC_3(FUNC_7(VAR_21), VAR_25);
 return VAR_28;
}
