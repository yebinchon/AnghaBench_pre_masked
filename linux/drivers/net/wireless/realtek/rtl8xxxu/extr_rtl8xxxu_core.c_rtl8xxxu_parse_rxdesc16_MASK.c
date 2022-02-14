
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rtl8xxxu_rxdesc16 {int pkt_cnt; int pktlen; int drvinfo_sz; int shift; scalar_t__ rxmcs; scalar_t__ rxht; scalar_t__ bw; scalar_t__ crc32; int swdec; int tsfl; scalar_t__ phy_stats; } ;
struct rtl8xxxu_priv {struct ieee80211_hw* hw; } ;
struct rtl8723au_phy_stats {int dummy; } ;
struct ieee80211_rx_status {int band; int freq; scalar_t__ rate_idx; int encoding; int bw; int flag; int mactime; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; } ;
typedef int __le32 ;
struct TYPE_4__ {int band; int center_freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,struct ieee80211_rx_status*,struct rtl8723au_phy_stats*,scalar_t__) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

int FUNC_9(struct rtl8xxxu_priv *VAR_8, struct sk_buff *VAR_9)
{
 struct ieee80211_hw *VAR_10 = VAR_8->hw;
 struct ieee80211_rx_status *VAR_11;
 struct rtl8xxxu_rxdesc16 *VAR_12;
 struct rtl8723au_phy_stats *VAR_13;
 struct sk_buff *VAR_14 = ((void*)0);
 __le32 *VAR_15;
 u32 *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_22 = VAR_9->len;
 VAR_20 = 0;

 do {
  VAR_12 = (struct rtl8xxxu_rxdesc16 *)VAR_9->data;
  VAR_15 = (__le32 *)VAR_9->data;
  VAR_16 = (u32 *)VAR_9->data;

  for (VAR_19 = 0;
       VAR_19 < (sizeof(struct rtl8xxxu_rxdesc16) / sizeof(u32)); VAR_19++)
   VAR_16[VAR_19] = FUNC_2(VAR_15[VAR_19]);





  if (!VAR_20)
   VAR_20 = VAR_12->pkt_cnt;
  VAR_21 = VAR_12->pktlen;

  VAR_17 = VAR_12->drvinfo_sz * 8;
  VAR_18 = VAR_12->shift;
  VAR_23 = FUNC_4(VAR_21 + VAR_17 + VAR_18 +
         sizeof(struct rtl8xxxu_rxdesc16), 128);





  if (VAR_20 > 1 &&
      VAR_22 > (VAR_23 + sizeof(struct rtl8xxxu_rxdesc16)))
   VAR_14 = FUNC_6(VAR_9, VAR_1);

  VAR_11 = FUNC_0(VAR_9);
  FUNC_3(VAR_11, 0, sizeof(struct ieee80211_rx_status));

  FUNC_7(VAR_9, sizeof(struct rtl8xxxu_rxdesc16));

  VAR_13 = (struct rtl8723au_phy_stats *)VAR_9->data;

  FUNC_7(VAR_9, VAR_17 + VAR_18);

  FUNC_8(VAR_9, VAR_21);

  if (VAR_12->phy_stats)
   FUNC_5(VAR_8, VAR_11, VAR_13,
         VAR_12->rxmcs);

  VAR_11->mactime = VAR_12->tsfl;
  VAR_11->flag |= VAR_6;

  if (!VAR_12->swdec)
   VAR_11->flag |= VAR_4;
  if (VAR_12->crc32)
   VAR_11->flag |= VAR_5;
  if (VAR_12->bw)
   VAR_11->bw = VAR_2;

  if (VAR_12->rxht) {
   VAR_11->encoding = VAR_3;
   VAR_11->rate_idx = VAR_12->rxmcs - VAR_0;
  } else {
   VAR_11->rate_idx = VAR_12->rxmcs;
  }

  VAR_11->freq = VAR_10->conf.chandef.chan->center_freq;
  VAR_11->band = VAR_10->conf.chandef.chan->band;

  FUNC_1(VAR_10, VAR_9);

  VAR_9 = VAR_14;
  if (VAR_9)
   FUNC_7(VAR_14, VAR_23);

  VAR_20--;
  VAR_22 -= VAR_23;
 } while (VAR_9 && VAR_22 > 0 && VAR_20 > 0);

 return VAR_7;
}
