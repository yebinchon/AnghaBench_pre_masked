
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct mt76_rx_status {int wcid; int chain_signal; int chains; int signal; int band; int nss; int rate_idx; int bw; int encoding; int enc_flags; int freq; int flag; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_rx_status {int chain_signal; int chains; int signal; int band; int nss; int rate_idx; int bw; int encoding; int enc_flags; int freq; int flag; } ;
typedef int mstat ;


 int FUNC_0 (int) ;
 struct ieee80211_rx_status* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ieee80211_rx_status*,int ,int) ;
 struct ieee80211_sta* FUNC_4 (int ) ;

__attribute__((used)) static struct ieee80211_sta *FUNC_5(struct sk_buff *VAR_0)
{
 struct ieee80211_rx_status *VAR_1 = FUNC_1(VAR_0);
 struct mt76_rx_status VAR_2;

 VAR_2 = *((struct mt76_rx_status *)VAR_0->cb);
 FUNC_3(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->flag = VAR_2.flag;
 VAR_1->freq = VAR_2.freq;
 VAR_1->enc_flags = VAR_2.enc_flags;
 VAR_1->encoding = VAR_2.encoding;
 VAR_1->bw = VAR_2.bw;
 VAR_1->rate_idx = VAR_2.rate_idx;
 VAR_1->nss = VAR_2.nss;
 VAR_1->band = VAR_2.band;
 VAR_1->signal = VAR_2.signal;
 VAR_1->chains = VAR_2.chains;

 FUNC_0(sizeof(VAR_2) > sizeof(VAR_0->cb));
 FUNC_0(sizeof(VAR_1->chain_signal) !=
       sizeof(VAR_2.chain_signal));
 FUNC_2(VAR_1->chain_signal, VAR_2.chain_signal,
        sizeof(VAR_2.chain_signal));

 return FUNC_4(VAR_2.wcid);
}
