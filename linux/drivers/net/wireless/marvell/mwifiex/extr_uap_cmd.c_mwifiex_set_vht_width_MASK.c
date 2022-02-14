
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int hw_dot_11ac_dev_cap; } ;
struct mwifiex_11ac_vht_cfg {int misc_config; void* mcs_rx_set; void* mcs_tx_set; int cap_info; int band_config; } ;
typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_11ac_vht_cfg*,int) ;

void FUNC_1(struct mwifiex_private *VAR_8,
      enum nl80211_chan_width VAR_9,
      bool VAR_10)
{
 struct mwifiex_adapter *VAR_11 = VAR_8->adapter;
 struct mwifiex_11ac_vht_cfg VAR_12;

 VAR_12.band_config = VAR_7;
 VAR_12.cap_info = VAR_11->hw_dot_11ac_dev_cap;

 if (!VAR_10) {
  VAR_12.mcs_tx_set = VAR_1;
  VAR_12.mcs_rx_set = VAR_1;
 } else {
  VAR_12.mcs_tx_set = VAR_0;
  VAR_12.mcs_rx_set = VAR_0;
 }

 VAR_12.misc_config = VAR_6;

 if (VAR_10 && VAR_9 >= VAR_4)
  VAR_12.misc_config |= VAR_5;

 FUNC_0(VAR_8, VAR_3,
    VAR_2, 0, &VAR_12, 1);

 return;
}
