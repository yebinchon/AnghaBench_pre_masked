
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ wep_enabled; } ;
struct mwifiex_bssdescriptor {int channel; int mac_address; int ssid; } ;
struct TYPE_3__ {struct mwifiex_bssdescriptor bss_descriptor; } ;
struct mwifiex_private {TYPE_2__ sec_info; int bcn_nf_last; int adhoc_state; int min_tx_power_level; int max_tx_power_level; int media_connected; int bss_mode; TYPE_1__ curr_bss_params; struct mwifiex_adapter* adapter; } ;
struct mwifiex_bss_info {int wep_status; int is_deep_sleep; int is_hs_configured; int bcn_nf_last; int adhoc_state; int min_power_level; int max_power_level; int media_connected; int * country_code; int bss_chan; int bssid; int ssid; int bss_mode; } ;
struct mwifiex_adapter {int is_deep_sleep; int work_flags; int * country_code; } ;
struct cfg80211_ssid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct mwifiex_private *VAR_3,
    struct mwifiex_bss_info *VAR_4)
{
 struct mwifiex_adapter *VAR_5 = VAR_3->adapter;
 struct mwifiex_bssdescriptor *VAR_6;

 if (!VAR_4)
  return -1;

 VAR_6 = &VAR_3->curr_bss_params.bss_descriptor;

 VAR_4->bss_mode = VAR_3->bss_mode;

 FUNC_0(&VAR_4->ssid, &VAR_6->ssid, sizeof(struct cfg80211_ssid));

 FUNC_0(&VAR_4->bssid, &VAR_6->mac_address, VAR_0);

 VAR_4->bss_chan = VAR_6->channel;

 FUNC_0(VAR_4->country_code, VAR_5->country_code,
        VAR_1);

 VAR_4->media_connected = VAR_3->media_connected;

 VAR_4->max_power_level = VAR_3->max_tx_power_level;
 VAR_4->min_power_level = VAR_3->min_tx_power_level;

 VAR_4->adhoc_state = VAR_3->adhoc_state;

 VAR_4->bcn_nf_last = VAR_3->bcn_nf_last;

 if (VAR_3->sec_info.wep_enabled)
  VAR_4->wep_status = 1;
 else
  VAR_4->wep_status = 0;

 VAR_4->is_hs_configured = FUNC_1(VAR_2,
       &VAR_5->work_flags);
 VAR_4->is_deep_sleep = VAR_5->is_deep_sleep;

 return 0;
}
