
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int status; } ;
struct TYPE_5__ {unsigned int num_channels; unsigned int num_probe_requests; size_t ssid_len; int ssid; scalar_t__ tid_trigger; int tx_rate; int scan_options; void* rx_filter_options; void* rx_config_options; } ;
struct wl1251_cmd_scan {TYPE_3__ header; TYPE_2__ params; TYPE_1__* channels; } ;
struct wl1251 {int cmd_box_addr; int bssid; } ;
struct ieee80211_channel {int hw_value; } ;
struct TYPE_4__ {int channel; scalar_t__ tx_power_att; scalar_t__ early_termination; int bssid_msb; int bssid_lsb; void* max_duration; void* min_duration; } ;


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
 unsigned int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct wl1251_cmd_scan*) ;
 struct wl1251_cmd_scan* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int *,size_t) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (struct wl1251*,int ,struct wl1251_cmd_scan*,int) ;
 int FUNC_9 (int ,char*,unsigned int) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (struct wl1251*,int ,struct wl1251_cmd_scan*,int) ;

int FUNC_12(struct wl1251 *VAR_14, u8 *VAR_15, size_t VAR_16,
      struct ieee80211_channel *VAR_17[],
      unsigned int VAR_18, unsigned int VAR_19)
{
 struct wl1251_cmd_scan *VAR_20;
 int VAR_21, VAR_22 = 0;

 FUNC_9(VAR_6, "cmd scan channels %d", VAR_18);

 FUNC_0(VAR_18 > VAR_10);

 VAR_20 = FUNC_5(sizeof(*VAR_20), VAR_9);
 if (!VAR_20)
  return -VAR_8;

 VAR_20->params.rx_config_options = FUNC_2(VAR_0);
 VAR_20->params.rx_filter_options = FUNC_2(VAR_3 |
          VAR_2 |
          VAR_1);
 VAR_20->params.scan_options = 0;





 if (FUNC_3(VAR_14->bssid))
  VAR_20->params.scan_options |= FUNC_1(VAR_13);
 VAR_20->params.num_channels = VAR_18;
 VAR_20->params.num_probe_requests = VAR_19;
 VAR_20->params.tx_rate = FUNC_1(1 << 1);
 VAR_20->params.tid_trigger = 0;

 for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++) {
  VAR_20->channels[VAR_21].min_duration =
   FUNC_2(VAR_12);
  VAR_20->channels[VAR_21].max_duration =
   FUNC_2(VAR_11);
  FUNC_7(&VAR_20->channels[VAR_21].bssid_lsb, 0xff, 4);
  FUNC_7(&VAR_20->channels[VAR_21].bssid_msb, 0xff, 2);
  VAR_20->channels[VAR_21].early_termination = 0;
  VAR_20->channels[VAR_21].tx_power_att = 0;
  VAR_20->channels[VAR_21].channel = VAR_17[VAR_21]->hw_value;
 }

 VAR_20->params.ssid_len = VAR_16;
 if (VAR_15)
  FUNC_6(VAR_20->params.ssid, VAR_15, VAR_16);

 VAR_22 = FUNC_8(VAR_14, VAR_4, VAR_20, sizeof(*VAR_20));
 if (VAR_22 < 0) {
  FUNC_10("cmd scan failed: %d", VAR_22);
  goto out;
 }

 FUNC_11(VAR_14, VAR_14->cmd_box_addr, VAR_20, sizeof(*VAR_20));

 if (VAR_20->header.status != VAR_5) {
  FUNC_10("cmd scan status wasn't success: %d",
        VAR_20->header.status);
  VAR_22 = -VAR_7;
  goto out;
 }

out:
 FUNC_4(VAR_20);
 return VAR_22;
}
