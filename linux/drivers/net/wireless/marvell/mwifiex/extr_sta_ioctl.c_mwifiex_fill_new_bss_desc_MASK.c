
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_private {int adapter; } ;
struct mwifiex_bssdescriptor {size_t beacon_buf_size; int cap_info_bitmap; int disable_11ac; int sensed_11h; int bss_mode; int privacy; int fw_tsf; int bss_band; int beacon_period; int * beacon_buf; int rssi; int mac_address; int timestamp; } ;
struct mwifiex_bss_priv {int fw_tsf; int band; } ;
struct cfg80211_bss_ies {size_t len; int tsf; int data; } ;
struct cfg80211_bss {int capability; int beacon_interval; int signal; int bssid; int ies; scalar_t__ priv; } ;


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
 int * FUNC_0 (int ,size_t,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,struct mwifiex_bssdescriptor*) ;
 struct cfg80211_bss_ies* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(struct mwifiex_private *VAR_12,
         struct cfg80211_bss *VAR_13,
         struct mwifiex_bssdescriptor *VAR_14)
{
 u8 *VAR_15;
 size_t VAR_16;
 struct mwifiex_bss_priv *VAR_17 = (void *)VAR_13->priv;
 const struct cfg80211_bss_ies *VAR_18;

 FUNC_5();
 VAR_18 = FUNC_4(VAR_13->ies);
 VAR_15 = FUNC_0(VAR_18->data, VAR_18->len, VAR_3);
 VAR_16 = VAR_18->len;
 VAR_14->timestamp = VAR_18->tsf;
 FUNC_6();

 if (!VAR_15) {
  FUNC_2(VAR_12->adapter, VAR_1,
       " failed to alloc beacon_ie\n");
  return -VAR_0;
 }

 FUNC_1(VAR_14->mac_address, VAR_13->bssid, VAR_2);
 VAR_14->rssi = VAR_13->signal;

 VAR_14->beacon_buf = VAR_15;
 VAR_14->beacon_buf_size = VAR_16;
 VAR_14->beacon_period = VAR_13->beacon_interval;
 VAR_14->cap_info_bitmap = VAR_13->capability;
 VAR_14->bss_band = VAR_17->band;
 VAR_14->fw_tsf = VAR_17->fw_tsf;
 if (VAR_14->cap_info_bitmap & VAR_10) {
  FUNC_2(VAR_12->adapter, VAR_4,
       "info: InterpretIE: AP WEP enabled\n");
  VAR_14->privacy = VAR_5;
 } else {
  VAR_14->privacy = VAR_6;
 }
 if (VAR_14->cap_info_bitmap & VAR_9)
  VAR_14->bss_mode = VAR_7;
 else
  VAR_14->bss_mode = VAR_8;




 VAR_14->disable_11ac = 1;

 if (VAR_14->cap_info_bitmap & VAR_11)
  VAR_14->sensed_11h = 1;

 return FUNC_3(VAR_12->adapter, VAR_14);
}
