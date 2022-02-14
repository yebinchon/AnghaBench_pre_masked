
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int max_scan_ssids; int max_remain_on_channel_duration; int max_num_csa_counters; int flags; int probe_resp_offload; int regulatory_flags; int hw_version; int fw_version; scalar_t__ extended_capabilities_len; int extended_capabilities_mask; int extended_capabilities; int reg_notifier; scalar_t__ wowlan; int features; int perm_addr; int * vht_capa_mod_mask; int * ht_capa_mod_mask; int max_ap_assoc_sta; int available_antennas_rx; int available_antennas_tx; int signal_type; int n_cipher_suites; int cipher_suites; int max_acl_mac_addrs; int mgmt_stypes; int max_scan_ie_len; int coverage_class; int retry_long; int retry_short; int rts_threshold; int frag_threshold; } ;
struct qtnf_mac_info {scalar_t__ extended_capabilities_len; int extended_capabilities_mask; int extended_capabilities; scalar_t__ wowlan; int vht_cap_mod_mask; int ht_cap_mod_mask; int max_ap_assoc_sta; int num_rx_chain; int num_tx_chain; int max_acl_mac_addrs; int coverage_class; int lretry_limit; int sretry_limit; int rts_thr; int frag_thr; } ;
struct qtnf_wmac {TYPE_1__* rd; struct qtnf_mac_info macinfo; int macaddr; } ;
struct qtnf_hw_info {int max_scan_ssids; int hw_capab; int hw_version; int fw_version; } ;
struct TYPE_3__ {char* alpha2; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*) ;
 struct wiphy* FUNC_4 (struct qtnf_wmac*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_5 (struct wiphy*,struct qtnf_mac_info*) ;
 int FUNC_6 (struct wiphy*,char*) ;
 int FUNC_7 (struct wiphy*,TYPE_1__*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct wiphy*,TYPE_1__*) ;
 int FUNC_10 (struct wiphy*,int ) ;
 int FUNC_11 (struct wiphy*) ;

int FUNC_12(struct qtnf_hw_info *VAR_31, struct qtnf_wmac *VAR_32)
{
 struct wiphy *VAR_33 = FUNC_4(VAR_32);
 struct qtnf_mac_info *VAR_34 = &VAR_32->macinfo;
 int VAR_35;
 bool VAR_36;

 if (!VAR_33) {
  FUNC_3("invalid wiphy pointer\n");
  return -VAR_1;
 }

 VAR_33->frag_threshold = VAR_34->frag_thr;
 VAR_33->rts_threshold = VAR_34->rts_thr;
 VAR_33->retry_short = VAR_34->sretry_limit;
 VAR_33->retry_long = VAR_34->lretry_limit;
 VAR_33->coverage_class = VAR_34->coverage_class;

 VAR_33->max_scan_ssids =
  (VAR_31->max_scan_ssids) ? VAR_31->max_scan_ssids : 1;
 VAR_33->max_scan_ie_len = VAR_17;
 VAR_33->mgmt_stypes = VAR_30;
 VAR_33->max_remain_on_channel_duration = 5000;
 VAR_33->max_acl_mac_addrs = VAR_34->max_acl_mac_addrs;
 VAR_33->max_num_csa_counters = 2;

 VAR_35 = FUNC_5(VAR_33, VAR_34);
 if (VAR_35)
  goto out;


 VAR_33->cipher_suites = VAR_29;
 VAR_33->n_cipher_suites = FUNC_0(VAR_29);
 VAR_33->signal_type = VAR_0;
 VAR_33->flags |= VAR_25 |
   VAR_22 |
   VAR_23 |
   VAR_24 |
   VAR_21 |
   VAR_26;
 VAR_33->flags &= ~VAR_27;

 if (VAR_31->hw_capab & VAR_10)
  FUNC_10(VAR_33, VAR_2);

 if (VAR_31->hw_capab & VAR_14)
  FUNC_10(VAR_33,
          VAR_3);

 VAR_33->probe_resp_offload = VAR_8 |
        VAR_9;

 VAR_33->available_antennas_tx = VAR_34->num_tx_chain;
 VAR_33->available_antennas_rx = VAR_34->num_rx_chain;

 VAR_33->max_ap_assoc_sta = VAR_34->max_ap_assoc_sta;
 VAR_33->ht_capa_mod_mask = &VAR_34->ht_cap_mod_mask;
 VAR_33->vht_capa_mod_mask = &VAR_34->vht_cap_mod_mask;

 FUNC_1(VAR_33->perm_addr, VAR_32->macaddr);

 if (VAR_31->hw_capab & VAR_16)
  VAR_33->features |= VAR_4;

 if (VAR_31->hw_capab & VAR_15)
  VAR_33->features |= VAR_7;

 if (!(VAR_31->hw_capab & VAR_11))
  VAR_33->features |= VAR_5;

 if (VAR_31->hw_capab & VAR_13)
  VAR_33->features |= VAR_6;






 VAR_36 = FUNC_2(VAR_32->rd->alpha2[0]) &&
    FUNC_2(VAR_32->rd->alpha2[1]);

 if (VAR_31->hw_capab & VAR_12) {
  VAR_33->reg_notifier = VAR_28;

  if (VAR_32->rd->alpha2[0] == '9' && VAR_32->rd->alpha2[1] == '9') {
   VAR_33->regulatory_flags |= VAR_18 |
    VAR_19;
   FUNC_9(VAR_33, VAR_32->rd);
  } else if (VAR_36) {
   VAR_33->regulatory_flags |= VAR_19;
  }
 } else {
  VAR_33->regulatory_flags |= VAR_20;
 }

 if (VAR_32->macinfo.extended_capabilities_len) {
  VAR_33->extended_capabilities =
   VAR_32->macinfo.extended_capabilities;
  VAR_33->extended_capabilities_mask =
   VAR_32->macinfo.extended_capabilities_mask;
  VAR_33->extended_capabilities_len =
   VAR_32->macinfo.extended_capabilities_len;
 }

 FUNC_8(VAR_33->fw_version, VAR_31->fw_version,
  sizeof(VAR_33->fw_version));
 VAR_33->hw_version = VAR_31->hw_version;

 VAR_35 = FUNC_11(VAR_33);
 if (VAR_35 < 0)
  goto out;

 if (VAR_33->regulatory_flags & VAR_20)
  VAR_35 = FUNC_7(VAR_33, VAR_32->rd);
 else if (VAR_36)
  VAR_35 = FUNC_6(VAR_33, VAR_32->rd->alpha2);

out:
 return VAR_35;
}
