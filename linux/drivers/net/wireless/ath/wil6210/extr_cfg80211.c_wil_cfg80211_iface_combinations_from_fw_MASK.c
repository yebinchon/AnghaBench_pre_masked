
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct wiphy {int n_iface_combinations; struct ieee80211_iface_combination* iface_combinations; } ;
struct wil_fw_record_concurrency {int n_mids; struct wil_fw_concurrency_combo* combos; int n_combos; } ;
struct wil_fw_concurrency_limit {int types; int max; } ;
struct wil_fw_concurrency_combo {int n_limits; struct wil_fw_concurrency_limit* limits; int same_bi; int n_diff_channels; int max_interfaces; } ;
struct wil6210_priv {int max_vifs; } ;
struct ieee80211_iface_limit {void* types; void* max; } ;
struct ieee80211_iface_combination {int n_limits; struct ieee80211_iface_limit* limits; int beacon_int_infra_match; int num_different_channels; int max_interfaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_iface_combination* FUNC_0 (int,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct wil6210_priv*,char*,...) ;
 int FUNC_3 (struct wil6210_priv*,char*,int,int) ;
 struct wiphy* FUNC_4 (struct wil6210_priv*) ;

int FUNC_5(
 struct wil6210_priv *VAR_3, const struct wil_fw_record_concurrency *VAR_4)
{
 struct wiphy *VAR_5 = FUNC_4(VAR_3);
 u32 VAR_6 = 0;
 u16 VAR_7;
 const struct wil_fw_concurrency_combo *VAR_8;
 const struct wil_fw_concurrency_limit *VAR_9;
 struct ieee80211_iface_combination *VAR_10;
 struct ieee80211_iface_limit *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_5->iface_combinations) {
  FUNC_2(VAR_3, "iface_combinations already set, skipping\n");
  return 0;
 }

 VAR_8 = VAR_4->combos;
 VAR_7 = FUNC_1(VAR_4->n_combos);
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_6 += VAR_8->n_limits;
  VAR_9 = VAR_8->limits + VAR_8->n_limits;
  VAR_8 = (struct wil_fw_concurrency_combo *)VAR_9;
 }

 VAR_10 =
  FUNC_0(VAR_7 * sizeof(struct ieee80211_iface_combination) +
   VAR_6 * sizeof(struct ieee80211_iface_limit),
   VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_11 = (struct ieee80211_iface_limit *)(VAR_10 +
             VAR_7);
 VAR_8 = VAR_4->combos;
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_10[VAR_12].max_interfaces = VAR_8->max_interfaces;
  VAR_10[VAR_12].num_different_channels =
   VAR_8->n_diff_channels;
  VAR_10[VAR_12].beacon_int_infra_match =
   VAR_8->same_bi;
  VAR_10[VAR_12].n_limits = VAR_8->n_limits;
  FUNC_2(VAR_3,
        "iface_combination %d: max_if %d, num_ch %d, bi_match %d\n",
        VAR_12, VAR_10[VAR_12].max_interfaces,
        VAR_10[VAR_12].num_different_channels,
        VAR_10[VAR_12].beacon_int_infra_match);
  VAR_9 = VAR_8->limits;
  for (VAR_13 = 0; VAR_13 < VAR_8->n_limits; VAR_13++) {
   VAR_11[VAR_13].max = FUNC_1(VAR_9[VAR_13].max);
   VAR_11[VAR_13].types = FUNC_1(VAR_9[VAR_13].types);
   FUNC_2(VAR_3,
         "limit %d: max %d types 0x%x\n", VAR_13,
         VAR_11[VAR_13].max, VAR_11[VAR_13].types);
  }
  VAR_10[VAR_12].limits = VAR_11;
  VAR_11 += VAR_8->n_limits;
  VAR_9 += VAR_8->n_limits;
  VAR_8 = (struct wil_fw_concurrency_combo *)VAR_9;
 }

 FUNC_2(VAR_3, "multiple VIFs supported, n_mids %d\n", VAR_4->n_mids);
 VAR_3->max_vifs = VAR_4->n_mids + 1;
 if (VAR_3->max_vifs > VAR_2) {
  FUNC_3(VAR_3, "limited number of VIFs supported(%d, FW %d)\n",
    VAR_2, VAR_3->max_vifs);
  VAR_3->max_vifs = VAR_2;
 }
 VAR_5->n_iface_combinations = VAR_7;
 VAR_5->iface_combinations = VAR_10;
 return 0;
}
