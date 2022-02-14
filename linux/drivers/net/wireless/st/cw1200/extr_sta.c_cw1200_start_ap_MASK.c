
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wsm_start {int probe_delay; int * ssid; int ssid_len; int basic_rate_set; int dtim_period; int beacon_interval; int band; int channel_number; int preamble; int mode; } ;
struct wsm_operational_mode {int disable_more_flag_usage; int power_mode; } ;
struct ieee80211_bss_conf {int dtim_period; int beacon_int; int ssid; int ssid_len; int hidden_ssid; int basic_rates; int use_short_preamble; } ;
struct cw1200_common {int join_status; int p2p_ps_modeinfo; TYPE_2__* vif; int link_id_db; int join_dtim_period; int beacon_int; TYPE_1__* channel; } ;
struct TYPE_4__ {scalar_t__ p2p; struct ieee80211_bss_conf bss_conf; } ;
struct TYPE_3__ {int hw_value; int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cw1200_common*,int ) ;
 int FUNC_1 (struct cw1200_common*) ;
 int FUNC_2 (struct cw1200_common*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct cw1200_common*,int ,int ) ;
 int FUNC_7 (struct cw1200_common*,struct wsm_operational_mode*) ;
 int FUNC_8 (struct cw1200_common*,int *) ;
 int FUNC_9 (struct cw1200_common*,struct wsm_start*) ;

__attribute__((used)) static int FUNC_10(struct cw1200_common *VAR_9)
{
 int VAR_10;
 struct ieee80211_bss_conf *VAR_11 = &VAR_9->vif->bss_conf;
 struct wsm_start VAR_12 = {
  .mode = VAR_9->vif->p2p ?
    VAR_7 : VAR_6,
  .band = (VAR_9->channel->band == VAR_1) ?
    VAR_5 : VAR_4,
  .channel_number = VAR_9->channel->hw_value,
  .beacon_interval = VAR_11->beacon_int,
  .dtim_period = VAR_11->dtim_period,
  .preamble = VAR_11->use_short_preamble ?
    VAR_3 :
    VAR_2,
  .probe_delay = 100,
  .basic_rate_set = FUNC_0(VAR_9,
    VAR_11->basic_rates),
 };
 struct wsm_operational_mode VAR_13 = {
  .power_mode = VAR_8,
  .disable_more_flag_usage = 1,
 };

 FUNC_4(VAR_12.ssid, 0, sizeof(VAR_12.ssid));
 if (!VAR_11->hidden_ssid) {
  VAR_12.ssid_len = VAR_11->ssid_len;
  FUNC_3(VAR_12.ssid, VAR_11->ssid, VAR_12.ssid_len);
 }

 VAR_9->beacon_int = VAR_11->beacon_int;
 VAR_9->join_dtim_period = VAR_11->dtim_period;

 FUNC_4(&VAR_9->link_id_db, 0, sizeof(VAR_9->link_id_db));

 FUNC_5("[AP] ch: %d(%d), bcn: %d(%d), brt: 0x%.8X, ssid: %.*s.\n",
   VAR_12.channel_number, VAR_12.band,
   VAR_12.beacon_interval, VAR_12.dtim_period,
   VAR_12.basic_rate_set,
   VAR_12.ssid_len, VAR_12.ssid);
 VAR_10 = FUNC_9(VAR_9, &VAR_12);
 if (!VAR_10)
  VAR_10 = FUNC_2(VAR_9);
 if (!VAR_10 && VAR_9->vif->p2p) {
  FUNC_5("[AP] Setting p2p powersave configuration.\n");
  FUNC_8(VAR_9, &VAR_9->p2p_ps_modeinfo);
 }
 if (!VAR_10) {
  FUNC_6(VAR_9, 0, 0);
  VAR_9->join_status = VAR_0;
  FUNC_1(VAR_9);
 }
 FUNC_7(VAR_9, &VAR_13);
 return VAR_10;
}
