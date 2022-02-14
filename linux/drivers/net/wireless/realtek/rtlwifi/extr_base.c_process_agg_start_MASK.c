
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; int data; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_rx_status {int signal; scalar_t__ rate_idx; int flag; int band; int freq; int member_0; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; } ;
struct ieee80211_hdr {int addr3; int addr2; } ;
typedef int rx_status ;
struct TYPE_4__ {int band; int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_3 (int ,struct ieee80211_rx_status*,int) ;
 struct sk_buff* FUNC_4 (struct ieee80211_hw*,int ,int ,int ) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_4,
         struct ieee80211_hdr *VAR_5, u16 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_5(VAR_4);
 struct ieee80211_rx_status VAR_8 = { 0 };
 struct sk_buff *VAR_9 = ((void*)0);

 VAR_9 = FUNC_4(VAR_4, VAR_5->addr2, VAR_5->addr3, VAR_6);
 if (VAR_9) {
  VAR_8.freq = VAR_4->conf.chandef.chan->center_freq;
  VAR_8.band = VAR_4->conf.chandef.chan->band;
  VAR_8.flag |= VAR_2;
  VAR_8.flag |= VAR_3;
  VAR_8.rate_idx = 0;
  VAR_8.signal = 50 + 10;
  FUNC_3(FUNC_0(VAR_9),
         &VAR_8, sizeof(VAR_8));
  FUNC_1(VAR_7, VAR_0, VAR_1,
         "fake del\n",
         VAR_9->data,
         VAR_9->len);
  FUNC_2(VAR_4, VAR_9);
 }
}
