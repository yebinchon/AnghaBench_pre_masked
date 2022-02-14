
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tid ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_rx_status {scalar_t__ encoding; scalar_t__ bw; int enc_flags; int flag; int band; int freq; int nss; int rate_idx; } ;
struct ieee80211_hdr {int seq_ctrl; } ;
struct ath10k {int napi; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,struct sk_buff*,int ,int ,int ,char*,int,char*,char*,char*,char*,char*,char*,char*,int ,int ,int ,int ,int,int,int,int) ;
 int FUNC_3 (struct ath10k*,int ,int *,char*,scalar_t__,int ) ;
 int FUNC_4 (struct ieee80211_hdr*,char*,int) ;
 int FUNC_5 (struct ieee80211_hdr*) ;
 int FUNC_6 (struct ieee80211_hdr*) ;
 int FUNC_7 (int ,int *,struct sk_buff*,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ath10k*,scalar_t__,int ) ;
 int FUNC_10 (struct ath10k*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_11(struct ath10k *VAR_13, struct sk_buff *VAR_14)
{
 struct ieee80211_rx_status *VAR_15;
 struct ieee80211_hdr *VAR_16 = (struct ieee80211_hdr *)VAR_14->data;
 char VAR_17[32];

 VAR_15 = FUNC_0(VAR_14);

 FUNC_2(VAR_13, VAR_0,
     "rx skb %pK len %u peer %pM %s %s sn %u %s%s%s%s%s%s %srate_idx %u vht_nss %u freq %u band %u flag 0x%x fcs-err %i mic-err %i amsdu-more %i\n",
     VAR_14,
     VAR_14->len,
     FUNC_6(VAR_16),
     FUNC_4(VAR_16, VAR_17, sizeof(VAR_17)),
     FUNC_8(FUNC_5(VAR_16)) ?
       "mcast" : "ucast",
     (FUNC_1(VAR_16->seq_ctrl) & VAR_2) >> 4,
     (VAR_15->encoding == VAR_8) ? "legacy" : "",
     (VAR_15->encoding == VAR_7) ? "ht" : "",
     (VAR_15->encoding == VAR_9) ? "vht" : "",
     (VAR_15->bw == VAR_4) ? "40" : "",
     (VAR_15->bw == VAR_5) ? "80" : "",
     (VAR_15->bw == VAR_3) ? "160" : "",
     VAR_15->enc_flags & VAR_6 ? "sgi " : "",
     VAR_15->rate_idx,
     VAR_15->nss,
     VAR_15->freq,
     VAR_15->band, VAR_15->flag,
     !!(VAR_15->flag & VAR_11),
     !!(VAR_15->flag & VAR_12),
     !!(VAR_15->flag & VAR_10));
 FUNC_3(VAR_13, VAR_1, ((void*)0), "rx skb: ",
   VAR_14->data, VAR_14->len);
 FUNC_9(VAR_13, VAR_14->data, VAR_14->len);
 FUNC_10(VAR_13, VAR_14->data, VAR_14->len);

 FUNC_7(VAR_13->hw, ((void*)0), VAR_14, &VAR_13->napi);
}
