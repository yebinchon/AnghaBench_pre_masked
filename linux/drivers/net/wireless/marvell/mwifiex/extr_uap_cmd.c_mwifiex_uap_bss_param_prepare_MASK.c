
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_19__ ;
typedef struct TYPE_28__ TYPE_18__ ;
typedef struct TYPE_27__ TYPE_17__ ;
typedef struct TYPE_26__ TYPE_16__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef void* u8 ;
typedef int u16 ;
struct TYPE_29__ {int qos_info; } ;
struct TYPE_25__ {int antenna_selection_info; int tx_BF_cap_info; int extended_ht_cap_info; TYPE_19__ mcs; int ampdu_params_info; scalar_t__ cap_info; } ;
struct TYPE_31__ {int ssid_len; TYPE_19__* ssid; } ;
struct mwifiex_uap_bss_param {scalar_t__ channel; int band_cfg; int beacon_period; scalar_t__ dtim_period; int rts_threshold; int frag_threshold; scalar_t__ retry_limit; int protocol; scalar_t__ auth_mode; scalar_t__ ps_sta_ao_timer; scalar_t__ power_constraint; scalar_t__ sta_ao_timer; TYPE_19__ wmm_info; TYPE_15__ ht_cap; scalar_t__* rates; int bcast_ssid_ctl; TYPE_2__ ssid; } ;
struct TYPE_26__ {void* len; void* type; } ;
struct mwifiex_ie_types_wmmcap {int wmm_info; TYPE_16__ header; } ;
struct TYPE_24__ {int antenna_selection_info; int tx_BF_cap_info; int extended_ht_cap_info; int mcs; int ampdu_params_info; scalar_t__ cap_info; } ;
struct TYPE_23__ {void* len; void* type; } ;
struct mwifiex_ie_types_htcap {TYPE_14__ ht_cap; TYPE_13__ header; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct ieee80211_mcs_info {int dummy; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct TYPE_30__ {void* len; void* type; } ;
struct host_cmd_tlv_ssid {int * ssid; TYPE_1__ header; } ;
struct TYPE_37__ {void* len; void* type; } ;
struct host_cmd_tlv_rts_threshold {void* rts_thr; TYPE_8__ header; } ;
struct TYPE_20__ {void* len; void* type; } ;
struct host_cmd_tlv_retry_limit {void* limit; TYPE_10__ header; } ;
struct TYPE_33__ {void* len; void* type; } ;
struct host_cmd_tlv_rates {TYPE_4__ header; scalar_t__* rates; } ;
struct TYPE_27__ {void* len; void* type; } ;
struct host_cmd_tlv_power_constraint {scalar_t__ constraint; TYPE_17__ header; } ;
struct TYPE_38__ {void* len; void* type; } ;
struct host_cmd_tlv_frag_threshold {void* frag_thr; TYPE_9__ header; } ;
struct TYPE_22__ {void* len; void* type; } ;
struct host_cmd_tlv_encrypt_protocol {void* proto; TYPE_12__ header; } ;
struct TYPE_36__ {void* len; void* type; } ;
struct host_cmd_tlv_dtim_period {scalar_t__ period; TYPE_7__ header; } ;
struct TYPE_34__ {void* len; void* type; } ;
struct host_cmd_tlv_channel_band {int band_config; scalar_t__ channel; TYPE_5__ header; } ;
struct TYPE_35__ {void* len; void* type; } ;
struct host_cmd_tlv_beacon_period {void* period; TYPE_6__ header; } ;
struct TYPE_32__ {void* len; void* type; } ;
struct host_cmd_tlv_bcast_ssid {int bcast_ctl; TYPE_3__ header; } ;
struct TYPE_21__ {void* len; void* type; } ;
struct host_cmd_tlv_auth_type {void* auth_type; TYPE_11__ header; } ;
struct TYPE_28__ {void* len; void* type; } ;
struct host_cmd_tlv_ageout_timer {void* sta_ao_timer; TYPE_18__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,TYPE_19__*,int) ;
 int FUNC_4 (void***,void*,int*) ;
 int FUNC_5 (void***,void*,int*) ;

__attribute__((used)) static int
FUNC_6(u8 *VAR_34, void *VAR_35, u16 *VAR_36)
{
 struct host_cmd_tlv_dtim_period *VAR_37;
 struct host_cmd_tlv_beacon_period *VAR_38;
 struct host_cmd_tlv_ssid *VAR_39;
 struct host_cmd_tlv_bcast_ssid *VAR_40;
 struct host_cmd_tlv_channel_band *VAR_41;
 struct host_cmd_tlv_frag_threshold *VAR_42;
 struct host_cmd_tlv_rts_threshold *VAR_43;
 struct host_cmd_tlv_retry_limit *VAR_44;
 struct host_cmd_tlv_encrypt_protocol *VAR_45;
 struct host_cmd_tlv_auth_type *VAR_46;
 struct host_cmd_tlv_rates *VAR_47;
 struct host_cmd_tlv_ageout_timer *VAR_48, *VAR_49;
 struct host_cmd_tlv_power_constraint *VAR_50;
 struct mwifiex_ie_types_htcap *VAR_51;
 struct mwifiex_ie_types_wmmcap *VAR_52;
 struct mwifiex_uap_bss_param *VAR_53 = VAR_35;
 int VAR_54;
 u16 VAR_55 = *VAR_36;

 if (VAR_53->ssid.ssid_len) {
  VAR_39 = (struct host_cmd_tlv_ssid *)VAR_34;
  VAR_39->header.type = FUNC_1(VAR_30);
  VAR_39->header.len = FUNC_1((u16)VAR_53->ssid.ssid_len);
  FUNC_3(VAR_39->ssid, VAR_53->ssid.ssid, VAR_53->ssid.ssid_len);
  VAR_55 += sizeof(struct mwifiex_ie_types_header) +
       VAR_53->ssid.ssid_len;
  VAR_34 += sizeof(struct mwifiex_ie_types_header) +
    VAR_53->ssid.ssid_len;

  VAR_40 = (struct host_cmd_tlv_bcast_ssid *)VAR_34;
  VAR_40->header.type = FUNC_1(VAR_21);
  VAR_40->header.len =
    FUNC_1(sizeof(VAR_40->bcast_ctl));
  VAR_40->bcast_ctl = VAR_53->bcast_ssid_ctl;
  VAR_55 += sizeof(struct host_cmd_tlv_bcast_ssid);
  VAR_34 += sizeof(struct host_cmd_tlv_bcast_ssid);
 }
 if (VAR_53->rates[0]) {
  VAR_47 = (struct host_cmd_tlv_rates *)VAR_34;
  VAR_47->header.type = FUNC_1(VAR_27);

  for (VAR_54 = 0; VAR_54 < VAR_13 && VAR_53->rates[VAR_54];
       VAR_54++)
   VAR_47->rates[VAR_54] = VAR_53->rates[VAR_54];

  VAR_47->header.len = FUNC_1(VAR_54);
  VAR_55 += sizeof(struct host_cmd_tlv_rates) + VAR_54;
  VAR_34 += sizeof(struct host_cmd_tlv_rates) + VAR_54;
 }
 if (VAR_53->channel &&
     (((VAR_53->band_cfg & FUNC_0(0)) == VAR_1 &&
       VAR_53->channel <= VAR_4) ||
     ((VAR_53->band_cfg & FUNC_0(0)) == VAR_0 &&
      VAR_53->channel <= VAR_3))) {
  VAR_41 = (struct host_cmd_tlv_channel_band *)VAR_34;
  VAR_41->header.type = FUNC_1(VAR_18);
  VAR_41->header.len =
   FUNC_1(sizeof(struct host_cmd_tlv_channel_band) -
        sizeof(struct mwifiex_ie_types_header));
  VAR_41->band_config = VAR_53->band_cfg;
  VAR_41->channel = VAR_53->channel;
  VAR_55 += sizeof(struct host_cmd_tlv_channel_band);
  VAR_34 += sizeof(struct host_cmd_tlv_channel_band);
 }
 if (VAR_53->beacon_period >= VAR_6 &&
     VAR_53->beacon_period <= VAR_2) {
  VAR_38 = (struct host_cmd_tlv_beacon_period *)VAR_34;
  VAR_38->header.type =
     FUNC_1(VAR_22);
  VAR_38->header.len =
   FUNC_1(sizeof(struct host_cmd_tlv_beacon_period) -
        sizeof(struct mwifiex_ie_types_header));
  VAR_38->period = FUNC_1(VAR_53->beacon_period);
  VAR_55 += sizeof(struct host_cmd_tlv_beacon_period);
  VAR_34 += sizeof(struct host_cmd_tlv_beacon_period);
 }
 if (VAR_53->dtim_period >= VAR_7 &&
     VAR_53->dtim_period <= VAR_5) {
  VAR_37 = (struct host_cmd_tlv_dtim_period *)VAR_34;
  VAR_37->header.type =
   FUNC_1(VAR_23);
  VAR_37->header.len =
   FUNC_1(sizeof(struct host_cmd_tlv_dtim_period) -
        sizeof(struct mwifiex_ie_types_header));
  VAR_37->period = VAR_53->dtim_period;
  VAR_55 += sizeof(struct host_cmd_tlv_dtim_period);
  VAR_34 += sizeof(struct host_cmd_tlv_dtim_period);
 }
 if (VAR_53->rts_threshold <= VAR_12) {
  VAR_43 = (struct host_cmd_tlv_rts_threshold *)VAR_34;
  VAR_43->header.type =
     FUNC_1(VAR_29);
  VAR_43->header.len =
   FUNC_1(sizeof(struct host_cmd_tlv_rts_threshold) -
        sizeof(struct mwifiex_ie_types_header));
  VAR_43->rts_thr = FUNC_1(VAR_53->rts_threshold);
  VAR_55 += sizeof(struct host_cmd_tlv_frag_threshold);
  VAR_34 += sizeof(struct host_cmd_tlv_frag_threshold);
 }
 if ((VAR_53->frag_threshold >= VAR_10) &&
     (VAR_53->frag_threshold <= VAR_9)) {
  VAR_42 = (struct host_cmd_tlv_frag_threshold *)VAR_34;
  VAR_42->header.type =
    FUNC_1(VAR_25);
  VAR_42->header.len =
   FUNC_1(sizeof(struct host_cmd_tlv_frag_threshold) -
        sizeof(struct mwifiex_ie_types_header));
  VAR_42->frag_thr = FUNC_1(VAR_53->frag_threshold);
  VAR_55 += sizeof(struct host_cmd_tlv_frag_threshold);
  VAR_34 += sizeof(struct host_cmd_tlv_frag_threshold);
 }
 if (VAR_53->retry_limit <= VAR_11) {
  VAR_44 = (struct host_cmd_tlv_retry_limit *)VAR_34;
  VAR_44->header.type =
   FUNC_1(VAR_28);
  VAR_44->header.len =
   FUNC_1(sizeof(struct host_cmd_tlv_retry_limit) -
        sizeof(struct mwifiex_ie_types_header));
  VAR_44->limit = (u8)VAR_53->retry_limit;
  VAR_55 += sizeof(struct host_cmd_tlv_retry_limit);
  VAR_34 += sizeof(struct host_cmd_tlv_retry_limit);
 }
 if ((VAR_53->protocol & VAR_15) ||
     (VAR_53->protocol & VAR_16) ||
     (VAR_53->protocol & VAR_14))
  FUNC_5(&VAR_34, VAR_35, &VAR_55);
 else
  FUNC_4(&VAR_34, VAR_35, &VAR_55);

 if ((VAR_53->auth_mode <= VAR_31) ||
     (VAR_53->auth_mode == VAR_8)) {
  VAR_46 = (struct host_cmd_tlv_auth_type *)VAR_34;
  VAR_46->header.type = FUNC_1(VAR_17);
  VAR_46->header.len =
   FUNC_1(sizeof(struct host_cmd_tlv_auth_type) -
   sizeof(struct mwifiex_ie_types_header));
  VAR_46->auth_type = (u8)VAR_53->auth_mode;
  VAR_55 += sizeof(struct host_cmd_tlv_auth_type);
  VAR_34 += sizeof(struct host_cmd_tlv_auth_type);
 }
 if (VAR_53->protocol) {
  VAR_45 = (struct host_cmd_tlv_encrypt_protocol *)VAR_34;
  VAR_45->header.type =
   FUNC_1(VAR_24);
  VAR_45->header.len =
   FUNC_1(sizeof(struct host_cmd_tlv_encrypt_protocol)
   - sizeof(struct mwifiex_ie_types_header));
  VAR_45->proto = FUNC_1(VAR_53->protocol);
  VAR_55 += sizeof(struct host_cmd_tlv_encrypt_protocol);
  VAR_34 += sizeof(struct host_cmd_tlv_encrypt_protocol);
 }

 if (VAR_53->ht_cap.cap_info) {
  VAR_51 = (struct mwifiex_ie_types_htcap *)VAR_34;
  VAR_51->header.type = FUNC_1(VAR_32);
  VAR_51->header.len =
    FUNC_1(sizeof(struct ieee80211_ht_cap));
  VAR_51->ht_cap.cap_info = VAR_53->ht_cap.cap_info;
  VAR_51->ht_cap.ampdu_params_info =
          VAR_53->ht_cap.ampdu_params_info;
  FUNC_3(&VAR_51->ht_cap.mcs, &VAR_53->ht_cap.mcs,
         sizeof(struct ieee80211_mcs_info));
  VAR_51->ht_cap.extended_ht_cap_info =
     VAR_53->ht_cap.extended_ht_cap_info;
  VAR_51->ht_cap.tx_BF_cap_info = VAR_53->ht_cap.tx_BF_cap_info;
  VAR_51->ht_cap.antenna_selection_info =
     VAR_53->ht_cap.antenna_selection_info;
  VAR_55 += sizeof(struct mwifiex_ie_types_htcap);
  VAR_34 += sizeof(struct mwifiex_ie_types_htcap);
 }

 if (VAR_53->wmm_info.qos_info != 0xFF) {
  VAR_52 = (struct mwifiex_ie_types_wmmcap *)VAR_34;
  VAR_52->header.type = FUNC_1(VAR_33);
  VAR_52->header.len = FUNC_1(sizeof(VAR_52->wmm_info));
  FUNC_3(&VAR_52->wmm_info, &VAR_53->wmm_info,
         sizeof(VAR_52->wmm_info));
  VAR_55 += sizeof(struct mwifiex_ie_types_wmmcap);
  VAR_34 += sizeof(struct mwifiex_ie_types_wmmcap);
 }

 if (VAR_53->sta_ao_timer) {
  VAR_48 = (struct host_cmd_tlv_ageout_timer *)VAR_34;
  VAR_48->header.type = FUNC_1(VAR_20);
  VAR_48->header.len = FUNC_1(sizeof(*VAR_48) -
     sizeof(struct mwifiex_ie_types_header));
  VAR_48->sta_ao_timer = FUNC_2(VAR_53->sta_ao_timer);
  VAR_55 += sizeof(*VAR_48);
  VAR_34 += sizeof(*VAR_48);
 }

 if (VAR_53->power_constraint) {
  VAR_50 = (void *)VAR_34;
  VAR_50->header.type = FUNC_1(VAR_19);
  VAR_50->header.len = FUNC_1(sizeof(u8));
  VAR_50->constraint = VAR_53->power_constraint;
  VAR_55 += sizeof(*VAR_50);
  VAR_34 += sizeof(*VAR_50);
 }

 if (VAR_53->ps_sta_ao_timer) {
  VAR_49 = (struct host_cmd_tlv_ageout_timer *)VAR_34;
  VAR_49->header.type =
    FUNC_1(VAR_26);
  VAR_49->header.len = FUNC_1(sizeof(*VAR_49) -
    sizeof(struct mwifiex_ie_types_header));
  VAR_49->sta_ao_timer =
     FUNC_2(VAR_53->ps_sta_ao_timer);
  VAR_55 += sizeof(*VAR_49);
  VAR_34 += sizeof(*VAR_49);
 }

 *VAR_36 = VAR_55;

 return 0;
}
