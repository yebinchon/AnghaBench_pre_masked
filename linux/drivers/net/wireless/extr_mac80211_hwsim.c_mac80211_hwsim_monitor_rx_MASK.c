
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int cb; int protocol; int pkt_type; int ip_summed; int dev; } ;
struct mac80211_hwsim_data {int dummy; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_rate {int bitrate; int flags; } ;
struct ieee80211_hw {struct mac80211_hwsim_data* priv; } ;
struct ieee80211_channel {int center_freq; } ;
struct TYPE_2__ {int it_present; void* it_len; scalar_t__ it_pad; int it_version; } ;
struct hwsim_radiotap_hdr {int rt_rate; void* rt_chbitmask; void* rt_channel; scalar_t__ rt_flags; int rt_tsft; TYPE_1__ hdr; } ;


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
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mac80211_hwsim_data*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_13 ;
 struct ieee80211_rate* FUNC_6 (struct ieee80211_hw*,struct ieee80211_tx_info*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int,int ,int ) ;
 struct hwsim_radiotap_hdr* FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_14,
          struct sk_buff *VAR_15,
          struct ieee80211_channel *VAR_16)
{
 struct mac80211_hwsim_data *VAR_17 = VAR_14->priv;
 struct sk_buff *VAR_18;
 struct hwsim_radiotap_hdr *VAR_19;
 u16 VAR_20;
 struct ieee80211_tx_info *VAR_21 = FUNC_0(VAR_15);
 struct ieee80211_rate *VAR_22 = FUNC_6(VAR_14, VAR_21);

 if (FUNC_1(!VAR_22))
  return;

 if (!FUNC_8(VAR_13))
  return;

 VAR_18 = FUNC_10(VAR_15, sizeof(*VAR_19), 0, VAR_2);
 if (VAR_18 == ((void*)0))
  return;

 VAR_19 = FUNC_11(VAR_18, sizeof(*VAR_19));
 VAR_19->hdr.it_version = VAR_12;
 VAR_19->hdr.it_pad = 0;
 VAR_19->hdr.it_len = FUNC_3(sizeof(*VAR_19));
 VAR_19->hdr.it_present = FUNC_4((1 << VAR_7) |
       (1 << VAR_8) |
       (1 << VAR_9) |
       (1 << VAR_6));
 VAR_19->rt_tsft = FUNC_2(VAR_17);
 VAR_19->rt_flags = 0;
 VAR_19->rt_rate = VAR_22->bitrate / 5;
 VAR_19->rt_channel = FUNC_3(VAR_16->center_freq);
 VAR_20 = VAR_3;
 if (VAR_22->flags & VAR_10)
  VAR_20 |= VAR_5;
 else
  VAR_20 |= VAR_4;
 VAR_19->rt_chbitmask = FUNC_3(VAR_20);

 VAR_18->dev = VAR_13;
 FUNC_12(VAR_18);
 VAR_18->ip_summed = VAR_0;
 VAR_18->pkt_type = VAR_11;
 VAR_18->protocol = FUNC_5(VAR_1);
 FUNC_7(VAR_18->cb, 0, sizeof(VAR_18->cb));
 FUNC_9(VAR_18);
}
