
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct ice_hw {TYPE_4__* port_info; } ;
struct TYPE_5__ {void* hw_vsi_id; } ;
struct ice_fltr_info {int flag; void* fltr_rule_id; void* src; int src_id; TYPE_1__ fwd_id; int fltr_act; int lkup_type; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_7__ {TYPE_2__ lkup_tx_rx; } ;
struct ice_aqc_sw_rules_elem {TYPE_3__ pdata; } ;
typedef int f_info ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
typedef enum ice_adminq_opc { ____Placeholder_ice_adminq_opc } ice_adminq_opc ;
struct TYPE_8__ {void* dflt_rx_vsi_rule_id; void* dflt_rx_vsi_num; void* dflt_tx_vsi_rule_id; void* dflt_tx_vsi_num; void* lport; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (int ,struct ice_aqc_sw_rules_elem*) ;
 struct ice_aqc_sw_rules_elem* FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (struct ice_hw*,struct ice_aqc_sw_rules_elem*,void*,int,int,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct ice_hw*,struct ice_fltr_info*,struct ice_aqc_sw_rules_elem*,int) ;
 void* FUNC_4 (struct ice_hw*,void*) ;
 int FUNC_5 (struct ice_hw*) ;
 int FUNC_6 (struct ice_hw*,void*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct ice_fltr_info*,int ,int) ;

enum ice_status
FUNC_9(struct ice_hw *VAR_16, u16 VAR_17, bool VAR_18, u8 VAR_19)
{
 struct ice_aqc_sw_rules_elem *VAR_20;
 struct ice_fltr_info VAR_21;
 enum ice_adminq_opc VAR_22;
 enum ice_status VAR_23;
 u16 VAR_24;
 u16 VAR_25;

 if (!FUNC_6(VAR_16, VAR_17))
  return VAR_3;
 VAR_25 = FUNC_4(VAR_16, VAR_17);

 VAR_24 = VAR_18 ? VAR_12 :
       VAR_13;
 VAR_20 = FUNC_1(FUNC_5(VAR_16), VAR_24, VAR_0);
 if (!VAR_20)
  return VAR_2;

 FUNC_8(&VAR_21, 0, sizeof(VAR_21));

 VAR_21.lkup_type = VAR_11;
 VAR_21.flag = VAR_19;
 VAR_21.fltr_act = VAR_7;
 VAR_21.fwd_id.hw_vsi_id = VAR_25;

 if (VAR_21.flag & VAR_4) {
  VAR_21.src = VAR_16->port_info->lport;
  VAR_21.src_id = VAR_9;
  if (!VAR_18)
   VAR_21.fltr_rule_id =
    VAR_16->port_info->dflt_rx_vsi_rule_id;
 } else if (VAR_21.flag & VAR_5) {
  VAR_21.src_id = VAR_10;
  VAR_21.src = VAR_25;
  if (!VAR_18)
   VAR_21.fltr_rule_id =
    VAR_16->port_info->dflt_tx_vsi_rule_id;
 }

 if (VAR_18)
  VAR_22 = VAR_14;
 else
  VAR_22 = VAR_15;

 FUNC_3(VAR_16, &VAR_21, VAR_20, VAR_22);

 VAR_23 = FUNC_2(VAR_16, VAR_20, VAR_24, 1, VAR_22, ((void*)0));
 if (VAR_23 || !(VAR_21.flag & VAR_6))
  goto out;
 if (VAR_18) {
  u16 VAR_26 = FUNC_7(VAR_20->pdata.lkup_tx_rx.index);

  if (VAR_21.flag & VAR_5) {
   VAR_16->port_info->dflt_tx_vsi_num = VAR_25;
   VAR_16->port_info->dflt_tx_vsi_rule_id = VAR_26;
  } else if (VAR_21.flag & VAR_4) {
   VAR_16->port_info->dflt_rx_vsi_num = VAR_25;
   VAR_16->port_info->dflt_rx_vsi_rule_id = VAR_26;
  }
 } else {
  if (VAR_21.flag & VAR_5) {
   VAR_16->port_info->dflt_tx_vsi_num = VAR_1;
   VAR_16->port_info->dflt_tx_vsi_rule_id = VAR_8;
  } else if (VAR_21.flag & VAR_4) {
   VAR_16->port_info->dflt_rx_vsi_num = VAR_1;
   VAR_16->port_info->dflt_rx_vsi_rule_id = VAR_8;
  }
 }

out:
 FUNC_0(FUNC_5(VAR_16), VAR_20);
 return VAR_23;
}
