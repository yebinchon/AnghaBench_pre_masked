
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


typedef int uint16_t ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mwifiex_private {TYPE_6__* adapter; int bss_mode; int tx_rate; } ;
struct mwifiex_hs_config_param {int dummy; } ;
struct host_cmd_ds_wmm_get_status {int dummy; } ;
struct host_cmd_ds_version_ext {int dummy; } ;
struct host_cmd_ds_tx_rate_query {int dummy; } ;
struct host_cmd_ds_set_bss_mode {int dummy; } ;
struct host_cmd_ds_remain_on_chan {int dummy; } ;
struct host_cmd_ds_pkt_aggr_ctrl {int dummy; } ;
struct host_cmd_ds_p2p_mode_cfg {int dummy; } ;
struct host_cmd_ds_mgmt_frame_reg {int dummy; } ;
struct TYPE_11__ {int con_type; } ;
struct TYPE_10__ {void* mode; void* action; } ;
struct TYPE_9__ {void* enable; void* action; } ;
struct TYPE_8__ {int mask; void* action; } ;
struct TYPE_12__ {int version_str_sel; } ;
struct TYPE_14__ {TYPE_4__ bss_mode; TYPE_3__ mode_cfg; TYPE_2__ pkt_aggr_ctrl; TYPE_1__ reg_mask; TYPE_5__ verext; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_7__ params; } ;
struct TYPE_13__ {int hw_status; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (int const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_7__*,void*,int) ;
 int FUNC_4 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_5 (struct host_cmd_ds_command*,void*) ;
 int FUNC_6 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_7 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_8 (struct host_cmd_ds_command*,void*) ;
 int FUNC_9 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_10 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_11 (struct host_cmd_ds_command*) ;
 int FUNC_12 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_13 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_14 (struct host_cmd_ds_command*) ;
 int FUNC_15 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_16 (struct host_cmd_ds_command*) ;
 int FUNC_17 (struct mwifiex_private*,struct host_cmd_ds_command*,int,struct mwifiex_hs_config_param*) ;
 int FUNC_18 (struct mwifiex_private*,struct host_cmd_ds_command*,int,int,void*) ;
 int FUNC_19 (struct mwifiex_private*,struct host_cmd_ds_command*,int) ;
 int FUNC_20 (struct mwifiex_private*,struct host_cmd_ds_command*,int) ;
 int FUNC_21 (struct host_cmd_ds_command*,void*) ;
 int FUNC_22 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_23 (struct mwifiex_private*,struct host_cmd_ds_command*,int,int,void*) ;
 int FUNC_24 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_25 (struct mwifiex_private*,struct host_cmd_ds_command*,int) ;
 int FUNC_26 (struct host_cmd_ds_command*,int,void*) ;
 int FUNC_27 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_28 (struct mwifiex_private*,struct host_cmd_ds_command*,int) ;
 int FUNC_29 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_30 (struct mwifiex_private*,struct host_cmd_ds_command*,int,int,void*) ;
 int FUNC_31 (struct host_cmd_ds_command*,int) ;
 int FUNC_32 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_33 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_34 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_35 (struct host_cmd_ds_command*,int,void*) ;
 int FUNC_36 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_37 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_38 (struct host_cmd_ds_command*,int,void*) ;
 int FUNC_39 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_40 (struct host_cmd_ds_command*,int,void*) ;
 int FUNC_41 (struct mwifiex_private*,struct host_cmd_ds_command*,int) ;
 int FUNC_42 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_43 (struct host_cmd_ds_command*,int,void*) ;
 int FUNC_44 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_45 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_46 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_47 (struct host_cmd_ds_command*,int,void*) ;
 int FUNC_48 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_49 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_50 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_51 (struct host_cmd_ds_command*,int,void*) ;
 int FUNC_52 (struct mwifiex_private*,struct host_cmd_ds_command*,int,void*) ;
 int FUNC_53 (TYPE_6__*,int ,char*,...) ;
 scalar_t__ FUNC_54 (struct mwifiex_private*,int) ;

int FUNC_55(struct mwifiex_private *VAR_14, uint16_t VAR_15,
       u16 VAR_16, u32 VAR_17,
       void *VAR_18, void *VAR_19)
{
 struct host_cmd_ds_command *VAR_20 = VAR_19;
 int VAR_21 = 0;

 if (FUNC_54(VAR_14, VAR_15)) {
  FUNC_53(VAR_14->adapter, VAR_5,
       "0x%x command not supported by firmware\n",
       VAR_15);
  return -VAR_4;
 }


 switch (VAR_15) {
 case 157:
  VAR_21 = FUNC_32(VAR_14, VAR_20);
  break;
 case 164:
  VAR_21 = FUNC_27(VAR_14, VAR_20, VAR_18);
  break;
 case 154:
  VAR_21 = FUNC_37(VAR_14, VAR_20, VAR_16,
           VAR_18);
  break;
 case 174:
  VAR_21 = FUNC_19(VAR_14, VAR_20,
           VAR_16);
  break;
 case 153:
  VAR_21 = FUNC_38(VAR_20, VAR_16,
          VAR_18);
  break;
 case 130:
  VAR_21 = FUNC_52(VAR_14, VAR_20, VAR_16,
           VAR_18);
  break;
 case 131:
  VAR_21 = FUNC_51(VAR_20, VAR_16,
            VAR_18);
  break;
 case 139:
  VAR_21 = FUNC_45(VAR_14, VAR_20, VAR_16,
           VAR_18);
  break;
 case 141:
  VAR_21 = FUNC_44(VAR_14, VAR_20, VAR_16,
          VAR_18);
  break;
 case 173:
  VAR_21 = FUNC_30(VAR_14, VAR_20, VAR_16,
       (uint16_t)VAR_17, VAR_18);
  break;
 case 177:
  VAR_21 = FUNC_17(VAR_14, VAR_20, VAR_16,
    (struct mwifiex_hs_config_param *) VAR_18);
  break;
 case 172:
  VAR_21 = FUNC_21(VAR_20, VAR_18);
  break;
 case 182:
  VAR_21 = FUNC_13(VAR_14, VAR_20,
       VAR_18);
  break;
 case 181:
  VAR_21 = FUNC_14(VAR_20);
  break;
 case 183:
  VAR_21 = FUNC_12(VAR_14, VAR_20, VAR_18);
  break;
 case 180:
  VAR_21 = FUNC_15(VAR_14, VAR_20,
       VAR_18);
  break;
 case 185:
  VAR_21 = FUNC_10(VAR_14, VAR_20,
            VAR_18);
  break;
 case 178:
  VAR_21 = FUNC_16(VAR_20);
  break;
 case 186:
  VAR_21 = FUNC_9(VAR_14, VAR_20,
           VAR_18);
  break;
 case 184:
  VAR_21 = FUNC_11(VAR_20);
  break;
 case 137:
  VAR_21 = FUNC_20(VAR_14, VAR_20, VAR_16);
  break;
 case 170:
  VAR_21 = FUNC_23(VAR_14, VAR_20, VAR_16,
        VAR_17, VAR_18);
  break;
 case 168:
  VAR_20->command =
   FUNC_0(168);
  VAR_20->size =
   FUNC_0(sizeof(struct host_cmd_ds_tx_rate_query) +
        VAR_13);
  VAR_14->tx_rate = 0;
  VAR_21 = 0;
  break;
 case 129:
  VAR_20->command = FUNC_0(VAR_15);
  VAR_20->params.verext.version_str_sel =
   (u8)(FUNC_2((u32 *)VAR_18));
  FUNC_3(&VAR_20->params, VAR_18,
         sizeof(struct host_cmd_ds_version_ext));
  VAR_20->size =
   FUNC_0(sizeof(struct host_cmd_ds_version_ext) +
        VAR_13);
  VAR_21 = 0;
  break;
 case 148:
  VAR_20->command = FUNC_0(VAR_15);
  VAR_20->params.reg_mask.action = FUNC_0(VAR_16);
  VAR_20->params.reg_mask.mask = FUNC_1(
      FUNC_2((u32 *)VAR_18));
  VAR_20->size =
   FUNC_0(sizeof(struct host_cmd_ds_mgmt_frame_reg) +
        VAR_13);
  VAR_21 = 0;
  break;
 case 142:
  VAR_20->command = FUNC_0(VAR_15);
  FUNC_3(&VAR_20->params, VAR_18,
         sizeof(struct host_cmd_ds_remain_on_chan));
  VAR_20->size =
        FUNC_0(sizeof(struct host_cmd_ds_remain_on_chan) +
      VAR_13);
  break;
 case 192:
  VAR_21 = FUNC_4(VAR_14, VAR_20, VAR_16, VAR_18);
  break;
 case 146:
  VAR_20->command = FUNC_0(VAR_15);
  VAR_20->params.pkt_aggr_ctrl.action = FUNC_0(VAR_16);
  VAR_20->params.pkt_aggr_ctrl.enable =
      FUNC_0(*(u16 *)VAR_18);
  VAR_20->size =
   FUNC_0(sizeof(struct host_cmd_ds_pkt_aggr_ctrl) +
        VAR_13);
  break;
 case 147:
  VAR_20->command = FUNC_0(VAR_15);
  VAR_20->params.mode_cfg.action = FUNC_0(VAR_16);
  VAR_20->params.mode_cfg.mode = FUNC_0(
      FUNC_2((u16 *)VAR_18));
  VAR_20->size =
   FUNC_0(sizeof(struct host_cmd_ds_p2p_mode_cfg) +
        VAR_13);
  break;
 case 160:
  if (VAR_14->adapter->hw_status == VAR_7)
   VAR_14->adapter->hw_status = VAR_6;
  VAR_20->command = FUNC_0(VAR_15);
  VAR_20->size = FUNC_0(VAR_13);
  break;
 case 159:
  VAR_14->adapter->hw_status = VAR_7;
  VAR_20->command = FUNC_0(VAR_15);
  VAR_20->size = FUNC_0(VAR_13);
  break;
 case 191:
  VAR_21 = FUNC_5(VAR_20, VAR_18);
  break;
 case 188:
  VAR_21 = FUNC_8(VAR_20, VAR_18);
  break;
 case 190:
  VAR_21 = FUNC_6(VAR_14, VAR_20, VAR_18);
  break;
 case 175:
  VAR_21 = FUNC_18(VAR_14, VAR_20,
            VAR_16, VAR_17,
            VAR_18);
  break;
 case 187:
  VAR_21 = FUNC_25(VAR_14, VAR_20,
            VAR_16);
  break;
 case 143:
  VAR_21 = FUNC_42(VAR_14, VAR_20, VAR_16,
            VAR_18);
  break;
 case 167:
  VAR_21 = FUNC_26(VAR_20, VAR_16,
        VAR_18);
  break;
 case 189:
  VAR_21 = FUNC_7(VAR_14, VAR_20, VAR_16, VAR_18);
  break;
 case 128:
  FUNC_53(VAR_14->adapter, VAR_0,
       "cmd: WMM: WMM_GET_STATUS cmd sent\n");
  VAR_20->command = FUNC_0(128);
  VAR_20->size =
   FUNC_0(sizeof(struct host_cmd_ds_wmm_get_status) +
        VAR_13);
  VAR_21 = 0;
  break;
 case 176:
  VAR_21 = FUNC_35(VAR_20, VAR_16,
        VAR_18);
  break;
 case 171:
  VAR_21 = FUNC_22(VAR_14, VAR_20, VAR_18);
  break;
 case 149:
  VAR_21 = FUNC_40(VAR_20, VAR_16, VAR_18);
  break;
 case 152:
 case 166:
 case 140:
 case 144:
 case 165:
 case 179:
  VAR_21 = FUNC_43(VAR_20, VAR_16, VAR_18);
  break;
 case 135:
  VAR_20->command = FUNC_0(VAR_15);
  if (VAR_14->bss_mode == VAR_8)
   VAR_20->params.bss_mode.con_type =
    VAR_1;
  else if (VAR_14->bss_mode == VAR_12 ||
    VAR_14->bss_mode == VAR_10)
   VAR_20->params.bss_mode.con_type =
    VAR_3;
  else if (VAR_14->bss_mode == VAR_9 ||
    VAR_14->bss_mode == VAR_11)
   VAR_20->params.bss_mode.con_type = VAR_2;
  VAR_20->size = FUNC_0(sizeof(struct
    host_cmd_ds_set_bss_mode) + VAR_13);
  VAR_21 = 0;
  break;
 case 145:
  VAR_21 = FUNC_41(VAR_14, VAR_20, VAR_16);
  break;
 case 169:
  VAR_21 = FUNC_24(VAR_14, VAR_20, VAR_18);
  break;
 case 150:
  VAR_21 = FUNC_39(VAR_14, VAR_20, VAR_18);
  break;
 case 161:
  VAR_21 = FUNC_29(VAR_14, VAR_20, VAR_16,
            VAR_18);
  break;
 case 132:
  VAR_21 = FUNC_50(VAR_14, VAR_20, VAR_18);
  break;
 case 133:
  VAR_21 = FUNC_49(VAR_14, VAR_20, VAR_16,
           VAR_18);
  break;
 case 162:
  VAR_21 = FUNC_36(VAR_14, VAR_20,
           VAR_18);
  break;
 case 136:
  VAR_21 = FUNC_47(VAR_20, VAR_16,
         VAR_18);
  break;
 case 155:
  VAR_21 = FUNC_33(VAR_14, VAR_20);
  break;
 case 151:
  VAR_21 = FUNC_48(VAR_14, VAR_20, VAR_16,
      VAR_18);
  break;
 case 138:
  VAR_21 = FUNC_46(VAR_14, VAR_20, VAR_16,
           VAR_18);
  break;
 case 156:
  VAR_21 = FUNC_34(VAR_14, VAR_20, VAR_16,
          VAR_18);
  break;
 case 163:
  VAR_21 = FUNC_28(VAR_14, VAR_20, VAR_16);
  break;
 case 158:
  VAR_20->command = FUNC_0(VAR_15);
  VAR_20->size = FUNC_0(VAR_13);
  break;
 case 134:
  VAR_21 = FUNC_31(VAR_20, VAR_16);
  break;
 default:
  FUNC_53(VAR_14->adapter, VAR_5,
       "PREP_CMD: unknown cmd- %#x\n", VAR_15);
  VAR_21 = -1;
  break;
 }
 return VAR_21;
}
