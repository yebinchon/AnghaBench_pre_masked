
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct at76_card_config {char* short_retry_limit; int encryption_type; int exclude_unencrypted; int auto_rate_fallback; size_t wep_default_key_id; size_t short_preamble; void* beacon_period; int wep_default_key_value; int ssid_len; int current_ssid; scalar_t__ privacy_invoked; int channel; int basic_rate_set; void* fragmentation_threshold; void* rts_threshold; scalar_t__ promiscuous_mode; } ;
struct at76_priv {scalar_t__ iw_mode; size_t wep_key_id; scalar_t__* wep_keys_len; size_t preamble_type; char* short_retry_limit; scalar_t__ txrate; char* auth_mode; char* scan_max_time; scalar_t__ scan_mode; int scanning; int rts_threshold; int frag_threshold; int bssid; TYPE_1__* hw; struct at76_card_config card_config; int udev; int beacon_period; int wep_keys; int essid_size; int essid; scalar_t__ wep_enabled; int channel; int scan_min_time; int pm_period; int pm_mode; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,char*,int ,int ,int ,...) ;
 int VAR_14 ;
 int FUNC_1 (struct at76_priv*) ;
 int FUNC_2 (struct at76_priv*) ;
 int FUNC_3 (struct at76_priv*) ;
 int FUNC_4 (struct at76_priv*) ;
 int FUNC_5 (struct at76_priv*) ;
 int FUNC_6 (struct at76_priv*) ;
 int FUNC_7 (struct at76_priv*) ;
 int FUNC_8 (struct at76_priv*,int) ;
 int FUNC_9 (int ,int ,struct at76_card_config*,int) ;
 int FUNC_10 (struct at76_priv*,int ) ;
 int FUNC_11 (struct at76_priv*) ;
 int FUNC_12 (struct at76_priv*,size_t) ;
 int FUNC_13 (struct at76_priv*,int) ;
 int FUNC_14 (struct at76_priv*,int ) ;
 int FUNC_15 (struct at76_priv*,int ) ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_15 ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (struct at76_card_config*,int ,int) ;
 int * VAR_16 ;
 int FUNC_20 (int ,char*,int) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct at76_priv *VAR_17)
{
 struct at76_card_config *VAR_18 = &VAR_17->card_config;
 int VAR_19;

 FUNC_0(VAR_3,
   "%s param: ssid %.*s (%*phD) mode %s ch %d wep %s key %d "
   "keylen %d", FUNC_21(VAR_17->hw->wiphy), VAR_17->essid_size,
   VAR_17->essid, VAR_4, VAR_17->essid,
   VAR_17->iw_mode == VAR_5 ? "adhoc" : "infra",
   VAR_17->channel, VAR_17->wep_enabled ? "enabled" : "disabled",
   VAR_17->wep_key_id, VAR_17->wep_keys_len[VAR_17->wep_key_id]);
 FUNC_0(VAR_3,
   "%s param: preamble %s rts %d retry %d frag %d "
   "txrate %s auth_mode %d", FUNC_21(VAR_17->hw->wiphy),
   VAR_16[VAR_17->preamble_type], VAR_17->rts_threshold,
   VAR_17->short_retry_limit, VAR_17->frag_threshold,
   VAR_17->txrate == VAR_8 ? "1MBit" : VAR_17->txrate ==
   VAR_9 ? "2MBit" : VAR_17->txrate ==
   VAR_10 ? "5.5MBit" : VAR_17->txrate ==
   VAR_7 ? "11MBit" : VAR_17->txrate ==
   VAR_11 ? "auto" : "<invalid>", VAR_17->auth_mode);
 FUNC_0(VAR_3,
   "%s param: pm_mode %d pm_period %d auth_mode %s "
   "scan_times %d %d scan_mode %s",
   FUNC_21(VAR_17->hw->wiphy), VAR_17->pm_mode, VAR_17->pm_period,
   VAR_17->auth_mode == VAR_13 ? "open" : "shared_secret",
   VAR_17->scan_min_time, VAR_17->scan_max_time,
   VAR_17->scan_mode == VAR_6 ? "active" : "passive");

 FUNC_19(VAR_18, 0, sizeof(struct at76_card_config));
 VAR_18->promiscuous_mode = 0;
 VAR_18->short_retry_limit = VAR_17->short_retry_limit;

 if (VAR_17->wep_enabled) {
  if (VAR_17->wep_keys_len[VAR_17->wep_key_id] > VAR_12)
   VAR_18->encryption_type = 2;
  else
   VAR_18->encryption_type = 1;


  VAR_18->exclude_unencrypted = 1;
 } else {
  VAR_18->exclude_unencrypted = 0;
  VAR_18->encryption_type = 0;
 }

 VAR_18->rts_threshold = FUNC_16(VAR_17->rts_threshold);
 VAR_18->fragmentation_threshold = FUNC_16(VAR_17->frag_threshold);

 FUNC_18(VAR_18->basic_rate_set, VAR_15, 4);

 VAR_18->auto_rate_fallback = (VAR_17->txrate == VAR_11 ? 1 : 0);
 VAR_18->channel = VAR_17->channel;
 VAR_18->privacy_invoked = VAR_17->wep_enabled;
 FUNC_18(VAR_18->current_ssid, VAR_17->essid, VAR_4);
 VAR_18->ssid_len = VAR_17->essid_size;

 VAR_18->wep_default_key_id = VAR_17->wep_key_id;
 FUNC_18(VAR_18->wep_default_key_value, VAR_17->wep_keys,
        sizeof(VAR_17->wep_keys));

 VAR_18->short_preamble = VAR_17->preamble_type;
 VAR_18->beacon_period = FUNC_16(VAR_17->beacon_period);

 VAR_19 = FUNC_9(VAR_17->udev, VAR_1, &VAR_17->card_config,
        sizeof(struct at76_card_config));
 if (VAR_19 < 0) {
  FUNC_20(VAR_17->hw->wiphy, "at76_set_card_command failed: %d\n",
     VAR_19);
  return VAR_19;
 }

 FUNC_15(VAR_17, VAR_1);


 FUNC_17(VAR_17->bssid);

 VAR_17->scanning = 0;

 if (FUNC_13(VAR_17, 1) == 1)
  FUNC_15(VAR_17, VAR_0);

 VAR_19 = FUNC_12(VAR_17, VAR_17->preamble_type);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_10(VAR_17, VAR_17->frag_threshold);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_14(VAR_17, VAR_17->rts_threshold);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_8(VAR_17,
      VAR_17->txrate == VAR_11 ? 1 : 0);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_11(VAR_17);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_14 & VAR_2) {
  FUNC_2(VAR_17);
  FUNC_3(VAR_17);
  FUNC_4(VAR_17);
  FUNC_5(VAR_17);
  FUNC_6(VAR_17);
  FUNC_7(VAR_17);
  FUNC_1(VAR_17);
 }

 return 0;
}
