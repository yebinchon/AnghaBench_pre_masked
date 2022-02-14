
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u8 ;
struct mwifiex_wmm_ac_status {int flow_created; int flow_required; int disabled; } ;
struct TYPE_10__ {int wmm_ie; } ;
struct TYPE_11__ {TYPE_4__ bss_descriptor; } ;
struct TYPE_9__ {struct mwifiex_wmm_ac_status* ac_status; } ;
struct mwifiex_private {TYPE_5__ curr_bss_params; int adapter; TYPE_3__ wmm; } ;
struct mwifiex_ie_types_wmm_queue_status {size_t queue_index; int flow_created; int flow_required; int disabled; } ;
struct TYPE_8__ {int type; int len; } ;
struct mwifiex_ie_types_data {TYPE_2__ header; } ;
struct TYPE_12__ {int element_id; int len; } ;
struct ieee_types_wmm_parameter {int qos_info_bitmap; TYPE_6__ vend_hdr; } ;
struct TYPE_7__ {int get_wmm_status; } ;
struct host_cmd_ds_command {int size; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct ieee_types_wmm_parameter*,int ) ;
 int FUNC_2 (int ,int ,char*,int,...) ;
 int FUNC_3 (struct mwifiex_private*) ;
 int FUNC_4 (struct mwifiex_private*,struct ieee_types_wmm_parameter*) ;

int FUNC_5(struct mwifiex_private *VAR_3,
          const struct host_cmd_ds_command *VAR_4)
{
 u8 *VAR_5 = (u8 *) &VAR_4->params.get_wmm_status;
 uint16_t VAR_6 = FUNC_0(VAR_4->size), VAR_7;
 int VAR_8 = VAR_1;
 bool VAR_9 = 1;

 struct mwifiex_ie_types_data *VAR_10;
 struct mwifiex_ie_types_wmm_queue_status *VAR_11;
 struct ieee_types_wmm_parameter *VAR_12 = ((void*)0);
 struct mwifiex_wmm_ac_status *VAR_13;

 FUNC_2(VAR_3->adapter, VAR_2,
      "info: WMM: WMM_GET_STATUS cmdresp received: %d\n",
      VAR_6);

 while ((VAR_6 >= sizeof(VAR_10->header)) && VAR_9) {
  VAR_10 = (struct mwifiex_ie_types_data *) VAR_5;
  VAR_7 = FUNC_0(VAR_10->header.len);

  if (VAR_6 < VAR_7 + sizeof(VAR_10->header))
   break;

  switch (FUNC_0(VAR_10->header.type)) {
  case 129:
   VAR_11 =
    (struct mwifiex_ie_types_wmm_queue_status *)
    VAR_10;
   FUNC_2(VAR_3->adapter, VAR_0,
        "info: CMD_RESP: WMM_GET_STATUS:\t"
        "QSTATUS TLV: %d, %d, %d\n",
        VAR_11->queue_index,
        VAR_11->flow_required,
        VAR_11->disabled);

   VAR_13 = &VAR_3->wmm.ac_status[VAR_11->
        queue_index];
   VAR_13->disabled = VAR_11->disabled;
   VAR_13->flow_required =
      VAR_11->flow_required;
   VAR_13->flow_created = VAR_11->flow_created;
   break;

  case 128:





   VAR_12 =
    (struct ieee_types_wmm_parameter *) (VAR_5 +
            2);
   VAR_12->vend_hdr.len = (u8) VAR_7;
   VAR_12->vend_hdr.element_id =
      128;

   FUNC_2(VAR_3->adapter, VAR_0,
        "info: CMD_RESP: WMM_GET_STATUS:\t"
        "WMM Parameter Set Count: %d\n",
        VAR_12->qos_info_bitmap & VAR_8);

   FUNC_1((u8 *) &VAR_3->curr_bss_params.bss_descriptor.
          wmm_ie, VAR_12,
          VAR_12->vend_hdr.len + 2);

   break;

  default:
   VAR_9 = 0;
   break;
  }

  VAR_5 += (VAR_7 + sizeof(VAR_10->header));
  VAR_6 -= (VAR_7 + sizeof(VAR_10->header));
 }

 FUNC_4(VAR_3, VAR_12);
 FUNC_3(VAR_3);

 return 0;
}
