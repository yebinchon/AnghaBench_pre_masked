
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct TYPE_4__ {int rx; int tx; int cmd_cnt; } ;
struct vport_filter_update_ramrod_data {struct eth_filter_cmd* filter_cmds; TYPE_2__ filter_cmd_hdr; } ;
struct TYPE_3__ {struct vport_filter_update_ramrod_data vport_filter_update; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct qed_hwfn {int dummy; } ;
struct qed_filter_ucast {int opcode; int type; int vni; int vlan; scalar_t__ mac; scalar_t__ is_tx_filter; scalar_t__ is_rx_filter; int vport_to_add_to; int vport_to_remove_from; } ;
struct eth_filter_cmd {scalar_t__ type; int action; void* vport_id; int vni; int vlan_id; int mac_lsb; int mac_mid; int mac_msb; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;
typedef enum eth_filter_action { ____Placeholder_eth_filter_action } eth_filter_action ;


 int FUNC_0 (struct qed_hwfn*,char*,int const) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int const VAR_16 ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct eth_filter_cmd*,struct eth_filter_cmd*,int) ;
 int FUNC_4 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (struct qed_hwfn*,int ,void**) ;
 int FUNC_7 (int *,int *,int *,void**) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_10 (struct qed_hwfn*) ;

__attribute__((used)) static int
FUNC_11(struct qed_hwfn *VAR_17,
   u16 VAR_18,
   struct qed_filter_ucast *VAR_19,
   struct vport_filter_update_ramrod_data **VAR_20,
   struct qed_spq_entry **VAR_21,
   enum spq_mode VAR_22,
   struct qed_spq_comp_cb *VAR_23)
{
 u8 VAR_24 = 0, VAR_25 = 0;
 struct vport_filter_update_ramrod_data *VAR_26;
 struct eth_filter_cmd *VAR_27;
 struct eth_filter_cmd *VAR_28;
 struct qed_sp_init_data VAR_29;
 enum eth_filter_action VAR_30;
 int VAR_31;

 VAR_31 = FUNC_6(VAR_17, VAR_19->vport_to_remove_from,
     &VAR_25);
 if (VAR_31)
  return VAR_31;

 VAR_31 = FUNC_6(VAR_17, VAR_19->vport_to_add_to,
     &VAR_24);
 if (VAR_31)
  return VAR_31;


 FUNC_4(&VAR_29, 0, sizeof(VAR_29));
 VAR_29.cid = FUNC_10(VAR_17);
 VAR_29.opaque_fid = VAR_18;
 VAR_29.comp_mode = VAR_22;
 VAR_29.p_comp_data = VAR_23;

 VAR_31 = FUNC_9(VAR_17, VAR_21,
     VAR_13,
     VAR_15, &VAR_29);
 if (VAR_31)
  return VAR_31;

 *VAR_20 = &(*VAR_21)->ramrod.vport_filter_update;
 VAR_26 = *VAR_20;
 VAR_26->filter_cmd_hdr.rx = VAR_19->is_rx_filter ? 1 : 0;
 VAR_26->filter_cmd_hdr.tx = VAR_19->is_tx_filter ? 1 : 0;

 switch (VAR_19->opcode) {
 case 130:
 case 131:
  VAR_26->filter_cmd_hdr.cmd_cnt = 2; break;
 default:
  VAR_26->filter_cmd_hdr.cmd_cnt = 1; break;
 }

 VAR_27 = &VAR_26->filter_cmds[0];
 VAR_28 = &VAR_26->filter_cmds[1];

 switch (VAR_19->type) {
 case 134:
  VAR_27->type = VAR_8; break;
 case 129:
  VAR_27->type = VAR_11; break;
 case 133:
  VAR_27->type = VAR_10; break;
 case 138:
  VAR_27->type = VAR_4; break;
 case 135:
  VAR_27->type = VAR_7; break;
 case 136:
  VAR_27->type = VAR_6; break;
 case 137:
  VAR_27->type = VAR_5;
  break;
 case 132:
  VAR_27->type = VAR_9; break;
 case 128:
  VAR_27->type = VAR_12; break;
 }

 if ((VAR_27->type == VAR_8) ||
     (VAR_27->type == VAR_10) ||
     (VAR_27->type == VAR_4) ||
     (VAR_27->type == VAR_6) ||
     (VAR_27->type == VAR_5) ||
     (VAR_27->type == VAR_9)) {
  FUNC_7(&VAR_27->mac_msb,
        &VAR_27->mac_mid,
        &VAR_27->mac_lsb,
        (u8 *)VAR_19->mac);
 }

 if ((VAR_27->type == VAR_11) ||
     (VAR_27->type == VAR_10) ||
     (VAR_27->type == VAR_7) ||
     (VAR_27->type == VAR_6))
  VAR_27->vlan_id = FUNC_1(VAR_19->vlan);

 if ((VAR_27->type == VAR_5) ||
     (VAR_27->type == VAR_9) ||
     (VAR_27->type == VAR_12))
  VAR_27->vni = FUNC_2(VAR_19->vni);

 if (VAR_19->opcode == 131) {
  VAR_28->type = VAR_27->type;
  VAR_28->mac_msb = VAR_27->mac_msb;
  VAR_28->mac_mid = VAR_27->mac_mid;
  VAR_28->mac_lsb = VAR_27->mac_lsb;
  VAR_28->vlan_id = VAR_27->vlan_id;
  VAR_28->vni = VAR_27->vni;

  VAR_27->action = VAR_2;

  VAR_27->vport_id = VAR_25;

  VAR_28->action = VAR_1;
  VAR_28->vport_id = VAR_24;
 } else if (VAR_19->opcode == 130) {
  VAR_27->vport_id = VAR_24;
  FUNC_3(VAR_28, VAR_27,
         sizeof(*VAR_28));
  VAR_27->action = VAR_3;
  VAR_28->action = VAR_1;
 } else {
  VAR_30 = FUNC_5(VAR_19->opcode);

  if (VAR_30 == VAR_14) {
   FUNC_0(VAR_17,
      "%d is not supported yet\n",
      VAR_19->opcode);
   FUNC_8(VAR_17, *VAR_21);
   return -VAR_0;
  }

  VAR_27->action = VAR_30;
  VAR_27->vport_id = (VAR_19->opcode ==
         VAR_16) ?
        VAR_25 :
        VAR_24;
 }

 return 0;
}
