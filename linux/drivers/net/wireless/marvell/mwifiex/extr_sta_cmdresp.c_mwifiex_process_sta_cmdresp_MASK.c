
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int wiphy; } ;
struct mwifiex_private {int bss_started; TYPE_2__ wdev; struct mwifiex_adapter* adapter; } ;
struct TYPE_8__ {int (* update_mp_end_port ) (struct mwifiex_adapter*,int ) ;int (* multi_port_resync ) (struct mwifiex_adapter*) ;} ;
struct mwifiex_adapter {int usb_mc_setup; int tx_lock_flag; int tx_buf_size; int curr_tx_buf_size; int pps_uapsd_mode; int delay_null_pkt; TYPE_3__ if_ops; int iface_type; TYPE_1__* curr_cmd; } ;
struct TYPE_9__ {int mp_end_port; int buff_size; } ;
struct TYPE_10__ {TYPE_4__ tx_buf; } ;
struct host_cmd_ds_command {scalar_t__ result; int command; TYPE_5__ params; } ;
struct TYPE_6__ {int wait_q_enabled; void* data_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_3 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_4 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_5 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_6 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_7 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_8 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_9 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_10 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_11 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_12 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_13 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_14 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_15 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_16 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_17 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_18 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_19 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_20 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_21 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_22 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_23 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_24 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_25 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_26 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_27 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_28 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_29 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_30 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_31 (int,struct host_cmd_ds_command*,void*) ;
 int FUNC_32 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_33 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_34 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_35 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_36 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_37 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_38 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_39 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_40 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_41 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_42 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_43 (struct mwifiex_private*,struct host_cmd_ds_command*,void*) ;
 int FUNC_44 (struct mwifiex_private*,struct host_cmd_ds_command*) ;
 int FUNC_45 (struct mwifiex_adapter*) ;
 int FUNC_46 (struct mwifiex_adapter*,int ) ;

int FUNC_47(struct mwifiex_private *VAR_5, u16 VAR_6,
    struct host_cmd_ds_command *VAR_7)
{
 int VAR_8 = 0;
 struct mwifiex_adapter *VAR_9 = VAR_5->adapter;
 void *VAR_10 = VAR_9->curr_cmd->data_buf;


 if (VAR_7->result != VAR_2) {
  FUNC_3(VAR_5, VAR_7);
  return -1;
 }

 switch (VAR_6) {
 case 161:
  VAR_8 = FUNC_24(VAR_5, VAR_7);
  break;
 case 167:
  VAR_8 = FUNC_20(VAR_5, VAR_7);
  break;
 case 158:
  break;
 case 177:
  VAR_8 = FUNC_13(VAR_5, VAR_7);
  break;
 case 157:
  VAR_8 = FUNC_27(VAR_5, VAR_7);
  break;
 case 134:
  VAR_8 = FUNC_40(VAR_5, VAR_7);
  break;
 case 175:
  VAR_8 = FUNC_15(VAR_5, VAR_7);
  VAR_9->curr_cmd->wait_q_enabled = 0;
  break;
 case 174:
  VAR_8 = FUNC_16(VAR_5, VAR_7);
  VAR_9->curr_cmd->wait_q_enabled = 0;
  break;
 case 184:
  VAR_8 = FUNC_15(VAR_5, VAR_7);
  FUNC_0(VAR_5->wdev.wiphy, 0);
  FUNC_2(VAR_9, VAR_0,
       "info: CMD_RESP: BG_SCAN result is ready!\n");
  break;
 case 185:
  break;
 case 135:
  VAR_8 = FUNC_39(VAR_5, VAR_7);
  break;
 case 143:
  VAR_8 = FUNC_34(VAR_5, VAR_7);
  break;
 case 145:
  VAR_8 = FUNC_33(VAR_5, VAR_7);
  break;
 case 176:
  VAR_8 = FUNC_22(VAR_5, VAR_7, VAR_10);
  break;
 case 180:
  VAR_8 = FUNC_11(VAR_5, VAR_7);
  break;
 case 186:
  VAR_8 = FUNC_9(VAR_5, VAR_7);
  break;
 case 183:
  VAR_8 = FUNC_10(VAR_5, VAR_7);
  break;
 case 188:
 case 189:
  VAR_8 = FUNC_7(VAR_5, VAR_7);
  break;
 case 187:
  VAR_8 = FUNC_8(VAR_5, VAR_7);
  break;
 case 181:
  VAR_8 = FUNC_25(VAR_5, VAR_7, VAR_10);
  break;
 case 141:
  VAR_8 = FUNC_14(VAR_5, VAR_7);
  break;
 case 173:
  VAR_8 = FUNC_17(VAR_5, VAR_7, VAR_10);
  break;
 case 171:
  VAR_8 = FUNC_18(VAR_5, VAR_7);
  break;
 case 129:
  VAR_8 = FUNC_42(VAR_5, VAR_7, VAR_10);
  break;
 case 146:
  VAR_8 = FUNC_32(VAR_5, VAR_7, VAR_10);
  break;
 case 195:
  break;
 case 150:
  VAR_8 = FUNC_30(VAR_5, VAR_7);
  break;
 case 151:
  VAR_8 = FUNC_29(VAR_5, VAR_7, VAR_10);
  break;
 case 152:
 case 163:
 case 162:
  break;
 case 178:
  VAR_8 = FUNC_12(VAR_5, VAR_7);
  break;
 case 190:
  VAR_8 = FUNC_19(VAR_5, VAR_7);
  break;
 case 194:
  VAR_8 = FUNC_4(VAR_5, VAR_7);
  break;
 case 191:
  VAR_8 = FUNC_6(VAR_5, VAR_7);
  break;
 case 193:
  VAR_8 = FUNC_5(VAR_5, VAR_7);
  break;
 case 147:
  if (0xffff == (u16)FUNC_1(VAR_7->params.tx_buf.buff_size)) {
   if (VAR_9->iface_type == VAR_4 &&
       VAR_9->usb_mc_setup) {
    if (VAR_9->if_ops.multi_port_resync)
     VAR_9->if_ops.
      multi_port_resync(VAR_9);
    VAR_9->usb_mc_setup = 0;
    VAR_9->tx_lock_flag = 0;
   }
   break;
  }
  VAR_9->tx_buf_size = (u16) FUNC_1(VAR_7->params.
            tx_buf.buff_size);
  VAR_9->tx_buf_size = (VAR_9->tx_buf_size
     / VAR_3)
           * VAR_3;
  VAR_9->curr_tx_buf_size = VAR_9->tx_buf_size;
  FUNC_2(VAR_9, VAR_0, "cmd: curr_tx_buf_size=%d\n",
       VAR_9->curr_tx_buf_size);

  if (VAR_9->if_ops.update_mp_end_port)
   VAR_9->if_ops.update_mp_end_port(VAR_9,
    FUNC_1(VAR_7->params.tx_buf.mp_end_port));
  break;
 case 170:
  break;
 case 128:
  VAR_8 = FUNC_44(VAR_5, VAR_7);
  break;
 case 179:
  VAR_8 = FUNC_26(VAR_5, VAR_7);
  break;
 case 153:
  VAR_8 = FUNC_28(VAR_5, VAR_7, VAR_10);
  break;
 case 156:
 case 169:
 case 144:
 case 148:
 case 168:
 case 182:
  VAR_8 = FUNC_31(VAR_6, VAR_7, VAR_10);
  break;
 case 139:
  break;
 case 192:
  break;
 case 149:
  break;
 case 172:
  VAR_8 = FUNC_37(VAR_5, VAR_7);
  break;
 case 130:
  break;
 case 197:
  VAR_8 = FUNC_41(VAR_5, VAR_7);
  break;
 case 133:
  VAR_9->tx_lock_flag = 0;
  VAR_9->pps_uapsd_mode = 0;
  VAR_9->delay_null_pkt = 0;
  VAR_5->bss_started = 1;
  break;
 case 132:
  VAR_5->bss_started = 0;
  break;
 case 131:
  break;
 case 196:
  break;
 case 154:
  break;
 case 164:
  break;
 case 136:
  VAR_8 = FUNC_38(VAR_5, VAR_7);
 case 155:
  break;
 case 165:
  break;
 case 140:
  VAR_8 = FUNC_36(VAR_5, VAR_7);
  break;
 case 159:
  VAR_8 = FUNC_43(VAR_5, VAR_7, VAR_10);
  break;
 case 137:
  break;
 case 142:
  VAR_8 = FUNC_35(VAR_5, VAR_7, VAR_10);
  break;
 case 160:
  break;
 case 166:
  VAR_8 = FUNC_21(VAR_5, VAR_7);
  break;
 case 138:
  VAR_8 = FUNC_23(VAR_5, VAR_7, VAR_10);
  break;
 default:
  FUNC_2(VAR_9, VAR_1,
       "CMD_RESP: unknown cmd response %#x\n",
       VAR_7->command);
  break;
 }

 return VAR_8;
}
