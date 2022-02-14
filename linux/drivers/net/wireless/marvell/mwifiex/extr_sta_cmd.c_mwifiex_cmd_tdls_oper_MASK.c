
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct station_parameters {int supported_rates_len; int ext_capab_len; int aid; int vht_capa; int ext_capab; int supported_rates; int ht_capa; int capability; } ;
struct mwifiex_private {int adapter; struct station_parameters* sta_params; } ;
struct TYPE_14__ {void* len; void* type; } ;
struct mwifiex_ie_types_vhtcap {int vht_cap; TYPE_6__ header; } ;
struct TYPE_16__ {void* len; void* type; } ;
struct mwifiex_ie_types_tdls_idle_timeout {void* value; TYPE_8__ header; } ;
struct TYPE_10__ {void* len; void* type; } ;
struct mwifiex_ie_types_qos_info {int qos_info; TYPE_2__ header; } ;
struct TYPE_11__ {void* len; void* type; } ;
struct mwifiex_ie_types_htcap {int ht_cap; TYPE_3__ header; } ;
struct TYPE_13__ {void* len; void* type; } ;
struct mwifiex_ie_types_extcap {int * ext_capab; TYPE_5__ header; } ;
struct TYPE_15__ {void* len; void* type; } ;
struct mwifiex_ie_types_aid {void* aid; TYPE_7__ header; } ;
struct mwifiex_ds_tdls_oper {int tdls_action; int peer_mac; } ;
struct ieee80211_vht_cap {int dummy; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct TYPE_12__ {void* len; void* type; } ;
struct host_cmd_tlv_rates {int * rates; TYPE_4__ header; } ;
struct host_cmd_ds_tdls_oper {void* tdls_action; int * peer_mac; scalar_t__ reason; } ;
struct TYPE_9__ {struct host_cmd_ds_tdls_oper tdls_oper; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void**,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int ,char*,...) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct mwifiex_private *VAR_17,
        struct host_cmd_ds_command *VAR_18,
        void *VAR_19)
{
 struct host_cmd_ds_tdls_oper *VAR_20 = &VAR_18->params.tdls_oper;
 struct mwifiex_ds_tdls_oper *VAR_21 = VAR_19;
 struct host_cmd_tlv_rates *VAR_22;
 struct mwifiex_ie_types_htcap *VAR_23;
 struct mwifiex_ie_types_qos_info *VAR_24;
 struct mwifiex_ie_types_extcap *VAR_25;
 struct mwifiex_ie_types_vhtcap *VAR_26;
 struct mwifiex_ie_types_aid *VAR_27;
 struct mwifiex_ie_types_tdls_idle_timeout *VAR_28;
 u8 *VAR_29;
 u16 VAR_30 = 0;
 struct station_parameters *VAR_31 = VAR_17->sta_params;

 VAR_18->command = FUNC_0(VAR_7);
 VAR_18->size = FUNC_0(VAR_9);
 FUNC_1(&VAR_18->size,
          sizeof(struct host_cmd_ds_tdls_oper));

 VAR_20->reason = 0;
 FUNC_2(VAR_20->peer_mac, VAR_21->peer_mac, VAR_6);

 VAR_29 = (u8 *)VAR_20 + sizeof(struct host_cmd_ds_tdls_oper);

 switch (VAR_21->tdls_action) {
 case 128:
  VAR_20->tdls_action = FUNC_0(VAR_2);
  break;
 case 129:
  VAR_20->tdls_action = FUNC_0(VAR_1);
  break;
 case 130:
  VAR_20->tdls_action = FUNC_0(VAR_0);

  if (!VAR_31) {
   FUNC_3(VAR_17->adapter, VAR_5,
        "TDLS config params not available for %pM\n",
        VAR_21->peer_mac);
   return -VAR_3;
  }

  FUNC_4(VAR_31->capability, VAR_29);
  VAR_30 += sizeof(VAR_31->capability);

  VAR_24 = (void *)(VAR_29 + VAR_30);
  VAR_24->header.type = FUNC_0(VAR_14);
  VAR_24->header.len =
    FUNC_0(sizeof(VAR_24->qos_info));
  VAR_24->qos_info = 0;
  VAR_30 += sizeof(struct mwifiex_ie_types_qos_info);

  if (VAR_31->ht_capa) {
   VAR_23 = (struct mwifiex_ie_types_htcap *)(VAR_29 +
            VAR_30);
   VAR_23->header.type =
         FUNC_0(VAR_13);
   VAR_23->header.len =
       FUNC_0(sizeof(struct ieee80211_ht_cap));
   FUNC_2(&VAR_23->ht_cap, VAR_31->ht_capa,
          sizeof(struct ieee80211_ht_cap));
   VAR_30 += sizeof(struct mwifiex_ie_types_htcap);
  }

  if (VAR_31->supported_rates && VAR_31->supported_rates_len) {
   VAR_22 = (struct host_cmd_tlv_rates *)(VAR_29 +
          VAR_30);
   VAR_22->header.type =
            FUNC_0(VAR_15);
   VAR_22->header.len =
           FUNC_0(VAR_31->supported_rates_len);
   FUNC_2(VAR_22->rates, VAR_31->supported_rates,
          VAR_31->supported_rates_len);
   VAR_30 += sizeof(struct host_cmd_tlv_rates) +
          VAR_31->supported_rates_len;
  }

  if (VAR_31->ext_capab && VAR_31->ext_capab_len) {
   VAR_25 = (struct mwifiex_ie_types_extcap *)(VAR_29 +
            VAR_30);
   VAR_25->header.type =
        FUNC_0(VAR_12);
   VAR_25->header.len = FUNC_0(VAR_31->ext_capab_len);
   FUNC_2(VAR_25->ext_capab, VAR_31->ext_capab,
          VAR_31->ext_capab_len);
   VAR_30 += sizeof(struct mwifiex_ie_types_extcap) +
          VAR_31->ext_capab_len;
  }
  if (VAR_31->vht_capa) {
   VAR_26 = (struct mwifiex_ie_types_vhtcap *)(VAR_29 +
            VAR_30);
   VAR_26->header.type =
        FUNC_0(VAR_16);
   VAR_26->header.len =
      FUNC_0(sizeof(struct ieee80211_vht_cap));
   FUNC_2(&VAR_26->vht_cap, VAR_31->vht_capa,
          sizeof(struct ieee80211_vht_cap));
   VAR_30 += sizeof(struct mwifiex_ie_types_vhtcap);
  }
  if (VAR_31->aid) {
   VAR_27 = (struct mwifiex_ie_types_aid *)(VAR_29 + VAR_30);
   VAR_27->header.type = FUNC_0(VAR_11);
   VAR_27->header.len = FUNC_0(sizeof(VAR_31->aid));
   VAR_27->aid = FUNC_0(VAR_31->aid);
   VAR_30 += sizeof(struct mwifiex_ie_types_aid);
  }

  VAR_28 = (void *)(VAR_29 + VAR_30);
  VAR_28->header.type = FUNC_0(VAR_10);
  VAR_28->header.len = FUNC_0(sizeof(VAR_28->value));
  VAR_28->value = FUNC_0(VAR_8);
  VAR_30 += sizeof(struct mwifiex_ie_types_tdls_idle_timeout);

  break;
 default:
  FUNC_3(VAR_17->adapter, VAR_5, "Unknown TDLS operation\n");
  return -VAR_4;
 }

 FUNC_1(&VAR_18->size, VAR_30);

 return 0;
}
