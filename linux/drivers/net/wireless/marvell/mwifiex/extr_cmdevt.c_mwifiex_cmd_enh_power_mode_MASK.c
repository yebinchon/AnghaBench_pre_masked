
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct mwifiex_ps_param {void* mode; void* delay_to_ps; void* adhoc_wake_period; void* local_listen_interval; void* bcn_miss_timeout; void* multiple_dtims; void* null_pkt_interval; } ;
struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct TYPE_7__ {void* len; void* type; } ;
struct mwifiex_ie_types_ps_param {TYPE_3__ header; struct mwifiex_ps_param param; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_8__ {void* len; void* type; } ;
struct mwifiex_ie_types_auto_ds_param {void* deep_sleep_timeout; TYPE_4__ header; } ;
struct mwifiex_ds_auto_ds {scalar_t__ idle_time; } ;
struct mwifiex_adapter {scalar_t__ null_pkt_interval; scalar_t__ multiple_dtim; scalar_t__ bcn_miss_time_out; scalar_t__ local_listen_interval; scalar_t__ adhoc_awake_period; scalar_t__ delay_to_ps; scalar_t__ enhanced_ps_mode; } ;
struct TYPE_6__ {void* ps_bitmap; } ;
struct host_cmd_ds_802_11_ps_mode_enh {TYPE_2__ params; void* action; } ;
struct TYPE_5__ {struct host_cmd_ds_802_11_ps_mode_enh psmode_enh; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;

int FUNC_2(struct mwifiex_private *VAR_10,
          struct host_cmd_ds_command *VAR_11,
          u16 VAR_12, uint16_t VAR_13,
          struct mwifiex_ds_auto_ds *VAR_14)
{
 struct host_cmd_ds_802_11_ps_mode_enh *VAR_15 =
  &VAR_11->params.psmode_enh;
 u8 *VAR_16;
 u16 VAR_17 = 0;

 VAR_11->command = FUNC_0(VAR_6);
 if (VAR_12 == VAR_3) {
  VAR_15->action = FUNC_0(VAR_3);
  VAR_15->params.ps_bitmap = FUNC_0(VAR_13);
  VAR_11->size = FUNC_0(VAR_7 + sizeof(VAR_15->action) +
     sizeof(VAR_15->params.ps_bitmap));
 } else if (VAR_12 == VAR_5) {
  VAR_15->action = FUNC_0(VAR_5);
  VAR_15->params.ps_bitmap = FUNC_0(VAR_13);
  VAR_11->size = FUNC_0(VAR_7 + sizeof(VAR_15->action) +
     sizeof(VAR_15->params.ps_bitmap));
 } else if (VAR_12 == VAR_4) {
  VAR_15->action = FUNC_0(VAR_4);
  VAR_15->params.ps_bitmap = FUNC_0(VAR_13);
  VAR_17 = VAR_7 + sizeof(VAR_15->action) +
     sizeof(VAR_15->params.ps_bitmap);
  VAR_16 = (u8 *) VAR_11 + VAR_17;
  if (VAR_13 & VAR_1) {
   struct mwifiex_adapter *VAR_18 = VAR_10->adapter;
   struct mwifiex_ie_types_ps_param *VAR_19 =
    (struct mwifiex_ie_types_ps_param *) VAR_16;
   struct mwifiex_ps_param *VAR_20 = &VAR_19->param;
   VAR_19->header.type = FUNC_0(VAR_9);
   VAR_19->header.len = FUNC_0(sizeof(*VAR_19) -
     sizeof(struct mwifiex_ie_types_header));
   VAR_17 += sizeof(*VAR_19);
   VAR_16 += sizeof(*VAR_19);
   FUNC_1(VAR_10->adapter, VAR_2,
        "cmd: PS Command: Enter PS\n");
   VAR_20->null_pkt_interval =
     FUNC_0(VAR_18->null_pkt_interval);
   VAR_20->multiple_dtims =
     FUNC_0(VAR_18->multiple_dtim);
   VAR_20->bcn_miss_timeout =
     FUNC_0(VAR_18->bcn_miss_time_out);
   VAR_20->local_listen_interval =
    FUNC_0(VAR_18->local_listen_interval);
   VAR_20->adhoc_wake_period =
    FUNC_0(VAR_18->adhoc_awake_period);
   VAR_20->delay_to_ps =
     FUNC_0(VAR_18->delay_to_ps);
   VAR_20->mode = FUNC_0(VAR_18->enhanced_ps_mode);

  }
  if (VAR_13 & VAR_0) {
   struct mwifiex_ie_types_auto_ds_param *VAR_21 =
    (struct mwifiex_ie_types_auto_ds_param *) VAR_16;
   u16 VAR_22 = 0;

   VAR_21->header.type =
    FUNC_0(VAR_8);
   VAR_21->header.len =
    FUNC_0(sizeof(*VAR_21) -
     sizeof(struct mwifiex_ie_types_header));
   VAR_17 += sizeof(*VAR_21);
   VAR_16 += sizeof(*VAR_21);
   if (VAR_14)
    VAR_22 = VAR_14->idle_time;
   FUNC_1(VAR_10->adapter, VAR_2,
        "cmd: PS Command: Enter Auto Deep Sleep\n");
   VAR_21->deep_sleep_timeout = FUNC_0(VAR_22);
  }
  VAR_11->size = FUNC_0(VAR_17);
 }
 return 0;
}
