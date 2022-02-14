
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int rx_mac_timestamp; } ;
struct wmi_mgmt_rx_ev_arg {TYPE_1__ ext_info; int rate; int phy_mode; int snr; int status; int channel; } ;
struct sk_buff {size_t len; scalar_t__ data; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_rx_status {int flag; size_t band; int signal; int rate_idx; struct sk_buff* freq; int mactime; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_4__ {struct ieee80211_supported_band* sbands; } ;
struct ath10k {int hw; TYPE_2__ mac; int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ath10k*,int ,char*,...) ;
 int FUNC_6 (struct ieee80211_supported_band*,int) ;
 int FUNC_7 (struct ath10k*,struct sk_buff*) ;
 int FUNC_8 (struct ath10k*,char*,int) ;
 int FUNC_9 (struct ath10k*,struct sk_buff*,struct ieee80211_rx_status*) ;
 int FUNC_10 (struct ath10k*,struct sk_buff*,struct wmi_mgmt_rx_ev_arg*) ;
 scalar_t__ FUNC_11 (struct ath10k*,struct ieee80211_hdr*) ;
 int FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (int,size_t) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,struct sk_buff*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct ieee80211_rx_status*,int ,int) ;
 scalar_t__ FUNC_21 (int ,int *) ;

int FUNC_22(struct ath10k *VAR_21, struct sk_buff *VAR_22)
{
 struct wmi_mgmt_rx_ev_arg VAR_23 = {};
 struct ieee80211_rx_status *VAR_24 = FUNC_0(VAR_22);
 struct ieee80211_hdr *VAR_25;
 struct ieee80211_supported_band *VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30;
 u32 VAR_31;
 u16 VAR_32;
 int VAR_33;

 VAR_33 = FUNC_10(VAR_21, VAR_22, &VAR_23);
 if (VAR_33) {
  FUNC_8(VAR_21, "failed to parse mgmt rx event: %d\n", VAR_33);
  FUNC_12(VAR_22);
  return VAR_33;
 }

 VAR_28 = FUNC_3(VAR_23.channel);
 VAR_27 = FUNC_3(VAR_23.status);
 VAR_30 = FUNC_3(VAR_23.snr);
 VAR_29 = FUNC_3(VAR_23.phy_mode);
 VAR_31 = FUNC_3(VAR_23.rate);

 FUNC_20(VAR_24, 0, sizeof(*VAR_24));

 FUNC_5(VAR_21, VAR_1,
     "event mgmt rx status %08x\n", VAR_27);

 if ((FUNC_21(VAR_0, &VAR_21->dev_flags)) ||
     (VAR_27 & (VAR_17 |
     VAR_18 | VAR_16))) {
  FUNC_12(VAR_22);
  return 0;
 }

 if (VAR_27 & VAR_19)
  VAR_24->flag |= VAR_13;

 if (VAR_27 & VAR_20) {
  VAR_24->mactime =
   FUNC_4(VAR_23.ext_info.rx_mac_timestamp);
  VAR_24->flag |= VAR_12;
 }




 if (VAR_28 >= 1 && VAR_28 <= 14) {
  VAR_24->band = VAR_8;
 } else if (VAR_28 >= 36 && VAR_28 <= VAR_3) {
  VAR_24->band = VAR_9;
 } else {



  FUNC_1(1);
  FUNC_12(VAR_22);
  return 0;
 }

 if (VAR_29 == VAR_7 && VAR_24->band == VAR_9)
  FUNC_5(VAR_21, VAR_1, "wmi mgmt rx 11b (CCK) on 5GHz\n");

 VAR_26 = &VAR_21->mac.sbands[VAR_24->band];

 VAR_24->freq = FUNC_13(VAR_28, VAR_24->band);
 VAR_24->signal = VAR_30 + VAR_2;
 VAR_24->rate_idx = FUNC_6(VAR_26, VAR_31 / 100);

 VAR_25 = (struct ieee80211_hdr *)VAR_22->data;
 VAR_32 = FUNC_19(VAR_25->frame_control);





 VAR_24->flag |= VAR_15;

 FUNC_9(VAR_21, VAR_22, VAR_24);

 if (FUNC_11(VAR_21, VAR_25)) {
  VAR_24->flag |= VAR_10;

  if (!FUNC_14(VAR_25->frame_control) &&
      !FUNC_16(VAR_25->frame_control) &&
      !FUNC_17(VAR_25->frame_control)) {
   VAR_24->flag |= VAR_11 |
     VAR_14;
   VAR_25->frame_control = FUNC_2(VAR_32 &
     ~VAR_5);
  }
 }

 if (FUNC_15(VAR_25->frame_control))
  FUNC_7(VAR_21, VAR_22);

 FUNC_5(VAR_21, VAR_1,
     "event mgmt rx skb %pK len %d ftype %02x stype %02x\n",
     VAR_22, VAR_22->len,
     VAR_32 & VAR_4, VAR_32 & VAR_6);

 FUNC_5(VAR_21, VAR_1,
     "event mgmt rx freq %d band %d snr %d, rate_idx %d\n",
     VAR_24->freq, VAR_24->band, VAR_24->signal,
     VAR_24->rate_idx);

 FUNC_18(VAR_21->hw, VAR_22);

 return 0;
}
