
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skb_info {char rssi; int channel; } ;
struct sk_buff {scalar_t__ data; } ;
struct rsi_hw {struct ieee80211_vif** vifs; } ;
struct rsi_common {int band; struct rsi_hw* priv; } ;
struct ieee80211_bss_conf {int bssid; scalar_t__ assoc; } ;
struct ieee80211_vif {scalar_t__ type; struct ieee80211_bss_conf bss_conf; } ;
struct ieee80211_tx_info {scalar_t__ driver_data; } ;
struct ieee80211_rx_status {char signal; int flag; scalar_t__ freq; int band; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int addr2; int frame_control; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (struct ieee80211_tx_info*,int ,int) ;
 scalar_t__ FUNC_8 (struct rsi_common*) ;
 int FUNC_9 (struct rsi_common*,int ,char,struct ieee80211_vif*) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_6,
          struct sk_buff *VAR_7,
          struct rsi_common *VAR_8,
          struct ieee80211_rx_status *VAR_9)
{
 struct rsi_hw *VAR_10 = VAR_8->priv;
 struct ieee80211_vif *VAR_11;
 struct ieee80211_bss_conf *VAR_12 = ((void*)0);
 struct ieee80211_tx_info *VAR_13 = FUNC_0(VAR_7);
 struct skb_info *VAR_14 = (struct skb_info *)VAR_13->driver_data;
 struct ieee80211_hdr *VAR_15;
 char VAR_16 = VAR_14->rssi;
 u8 VAR_17 = 0;
 u8 VAR_18 = VAR_14->channel;
 s32 VAR_19;
 int VAR_20;

 VAR_15 = ((struct ieee80211_hdr *)(VAR_7->data));
 VAR_17 = FUNC_3(VAR_15->frame_control);

 FUNC_7(VAR_13, 0, sizeof(struct ieee80211_tx_info));

 VAR_9->signal = -(VAR_16);

 VAR_9->band = VAR_8->band;

 VAR_19 = FUNC_1(VAR_18, VAR_9->band);

 if (VAR_19)
  VAR_9->freq = VAR_19;

 if (FUNC_2(VAR_15->frame_control)) {
  if (FUNC_8(VAR_8)) {
   FUNC_6(VAR_7->data + 4, VAR_7->data, VAR_17);
   FUNC_10(VAR_7, 4);
  } else {
   FUNC_6(VAR_7->data + 8, VAR_7->data, VAR_17);
   FUNC_10(VAR_7, 8);
   VAR_9->flag |= VAR_5;
  }
  VAR_9->flag |= VAR_3;
  VAR_9->flag |= VAR_4;
 }

 for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++) {
  VAR_11 = VAR_10->vifs[VAR_20];
  if (!VAR_11)
   continue;
  if (VAR_11->type == VAR_1) {
   VAR_12 = &VAR_11->bss_conf;
   break;
  }
 }
 if (!VAR_12)
  return;

 if (VAR_12->assoc && !(FUNC_5(VAR_12->bssid, VAR_15->addr2, VAR_0))) {
  if (FUNC_4(VAR_15->frame_control))
   FUNC_9(VAR_8, VAR_15->addr2, VAR_9->signal, VAR_11);
 }

 return;
}
