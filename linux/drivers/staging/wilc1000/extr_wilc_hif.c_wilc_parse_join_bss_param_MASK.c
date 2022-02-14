
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int start_time; int interval; int duration; int cnt; } ;
struct TYPE_5__ {int ct_window; int start_time; int interval; int duration; int cnt; } ;
struct wilc_join_bss_param {scalar_t__* ssid; scalar_t__ dtim_period; int* p_suites; int* akm_suites; scalar_t__* supp_rates; int ht_capable; int noa_enabled; int opp_enabled; int wmm_cap; int uapsd_cap; int mode_802_11i; int rsn_found; scalar_t__* rsn_cap; int rsn_grp_policy; TYPE_2__ opp_dis; TYPE_1__ opp_en; int idx; int tsf_lo; int bssid; int ch; int bss_type; void* cap_info; void* beacon_period; } ;
struct ieee80211_wmm_param_ie {int oui_subtype; int version; int qos_info; } ;
struct ieee80211_p2p_noa_attr {int oppps_ctwindow; TYPE_3__* desc; int index; } ;
struct cfg80211_crypto_settings {int cipher_group; int n_ciphers_pairwise; int* ciphers_pairwise; int n_akm_suites; int* akm_suites; } ;
struct cfg80211_bss_ies {int len; int data; int tsf; } ;
struct cfg80211_bss {int bssid; TYPE_4__* channel; int capability; int beacon_interval; int ies; } ;
typedef int noa_attr ;
struct TYPE_8__ {int center_freq; } ;
struct TYPE_7__ {int start_time; int interval; int duration; int count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__* FUNC_1 (int ,int ,int ) ;
 scalar_t__* FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__*,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 struct wilc_join_bss_param* FUNC_8 (int,int ) ;
 int FUNC_9 (scalar_t__*,scalar_t__ const*,scalar_t__ const) ;
 int FUNC_10 (int*,int,int) ;
 struct cfg80211_bss_ies* FUNC_11 (int ) ;

void *FUNC_12(struct cfg80211_bss *VAR_15,
    struct cfg80211_crypto_settings *VAR_16)
{
 struct wilc_join_bss_param *VAR_17;
 struct ieee80211_p2p_noa_attr VAR_18;
 u8 VAR_19 = 0;
 const u8 *VAR_20, *VAR_21, *VAR_22, *VAR_23;
 const u8 *VAR_24, *VAR_25, *VAR_26, *VAR_27;
 int VAR_28;
 const struct cfg80211_bss_ies *VAR_29 = FUNC_11(VAR_15->ies);

 VAR_17 = FUNC_8(sizeof(*VAR_17), VAR_0);
 if (!VAR_17)
  return ((void*)0);

 VAR_17->beacon_period = FUNC_4(VAR_15->beacon_interval);
 VAR_17->cap_info = FUNC_4(VAR_15->capability);
 VAR_17->bss_type = VAR_4;
 VAR_17->ch = FUNC_7(VAR_15->channel->center_freq);
 FUNC_6(VAR_17->bssid, VAR_15->bssid);

 VAR_21 = FUNC_1(VAR_9, VAR_29->data, VAR_29->len);
 if (VAR_21) {
  if (VAR_21[1] <= VAR_1)
   FUNC_9(VAR_17->ssid, VAR_21 + 2, VAR_21[1]);
 }

 VAR_20 = FUNC_1(VAR_11, VAR_29->data, VAR_29->len);
 if (VAR_20 && VAR_20[1] >= 2)
  VAR_17->dtim_period = VAR_20[3];

 FUNC_10(VAR_17->p_suites, 0xFF, 3);
 FUNC_10(VAR_17->akm_suites, 0xFF, 3);

 VAR_22 = FUNC_1(VAR_10, VAR_29->data, VAR_29->len);
 if (VAR_22) {
  VAR_19 = VAR_22[1];
  VAR_17->supp_rates[0] = VAR_19;
  FUNC_9(&VAR_17->supp_rates[1], VAR_22 + 2, VAR_19);
 }

 VAR_23 = FUNC_1(VAR_6, VAR_29->data,
      VAR_29->len);
 if (VAR_23) {
  if (VAR_23[1] > (VAR_5 - VAR_19))
   VAR_17->supp_rates[0] = VAR_5;
  else
   VAR_17->supp_rates[0] += VAR_23[1];

  FUNC_9(&VAR_17->supp_rates[VAR_19 + 1], VAR_23 + 2,
         (VAR_17->supp_rates[0] - VAR_19));
 }

 VAR_24 = FUNC_1(VAR_7, VAR_29->data, VAR_29->len);
 if (VAR_24)
  VAR_17->ht_capable = 1;

 VAR_28 = FUNC_3(VAR_29->data, VAR_29->len,
        VAR_2,
        (u8 *)&VAR_18, sizeof(VAR_18));
 if (VAR_28 > 0) {
  VAR_17->tsf_lo = FUNC_5(VAR_29->tsf);
  VAR_17->noa_enabled = 1;
  VAR_17->idx = VAR_18.index;
  if (VAR_18.oppps_ctwindow & VAR_3) {
   VAR_17->opp_enabled = 1;
   VAR_17->opp_en.ct_window = VAR_18.oppps_ctwindow;
   VAR_17->opp_en.cnt = VAR_18.desc[0].count;
   VAR_17->opp_en.duration = VAR_18.desc[0].duration;
   VAR_17->opp_en.interval = VAR_18.desc[0].interval;
   VAR_17->opp_en.start_time = VAR_18.desc[0].start_time;
  } else {
   VAR_17->opp_enabled = 0;
   VAR_17->opp_dis.cnt = VAR_18.desc[0].count;
   VAR_17->opp_dis.duration = VAR_18.desc[0].duration;
   VAR_17->opp_dis.interval = VAR_18.desc[0].interval;
   VAR_17->opp_dis.start_time = VAR_18.desc[0].start_time;
  }
 }
 VAR_26 = FUNC_2(VAR_12,
      VAR_13,
      VAR_29->data, VAR_29->len);
 if (VAR_26) {
  struct ieee80211_wmm_param_ie *VAR_30;

  VAR_30 = (struct ieee80211_wmm_param_ie *)VAR_26;
  if ((VAR_30->oui_subtype == 0 || VAR_30->oui_subtype == 1) &&
      VAR_30->version == 1) {
   VAR_17->wmm_cap = 1;
   if (VAR_30->qos_info & FUNC_0(7))
    VAR_17->uapsd_cap = 1;
  }
 }

 VAR_25 = FUNC_2(VAR_12,
      VAR_14,
      VAR_29->data, VAR_29->len);
 if (VAR_25) {
  VAR_17->mode_802_11i = 1;
  VAR_17->rsn_found = 1;
 }

 VAR_27 = FUNC_1(VAR_8, VAR_29->data, VAR_29->len);
 if (VAR_27) {
  int VAR_31 = 8;

  VAR_17->mode_802_11i = 2;
  VAR_17->rsn_found = 1;

  VAR_31 += (VAR_27[VAR_31] * 4) + 2;
  VAR_31 += (VAR_27[VAR_31] * 4) + 2;
  FUNC_9(VAR_17->rsn_cap, &VAR_27[VAR_31], 2);
 }

 if (VAR_17->rsn_found) {
  int VAR_32;

  VAR_17->rsn_grp_policy = VAR_16->cipher_group & 0xFF;
  for (VAR_32 = 0; VAR_32 < VAR_16->n_ciphers_pairwise && VAR_32 < 3; VAR_32++)
   VAR_17->p_suites[VAR_32] = VAR_16->ciphers_pairwise[VAR_32] & 0xFF;

  for (VAR_32 = 0; VAR_32 < VAR_16->n_akm_suites && VAR_32 < 3; VAR_32++)
   VAR_17->akm_suites[VAR_32] = VAR_16->akm_suites[VAR_32] & 0xFF;
 }

 return (void *)VAR_17;
}
