
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int netdev; } ;
struct sk_buff {int dummy; } ;
struct p80211_frmmeta {scalar_t__ rx; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,char*,struct sk_buff*) ;
 struct p80211_frmmeta* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct wlandevice *VAR_0, struct sk_buff *VAR_1)
{
 struct p80211_frmmeta *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 && VAR_2->rx)
  FUNC_3(VAR_1);
 else
  FUNC_1(VAR_0->netdev,
      "Freeing an skb (%p) w/ no frmmeta.\n", VAR_1);
 FUNC_0(VAR_1);
}
