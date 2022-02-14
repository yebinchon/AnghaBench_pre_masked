
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ cb; } ;
struct rx_desc_819x_usb {int dummy; } ;
struct rtl8192_rx_info {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int noise; int freq; int rate; int signal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct ieee80211_rx_stats*) ;
 int FUNC_2 (struct net_device*,struct ieee80211_rx_stats*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_2)
{
 struct rtl8192_rx_info *VAR_3 = (struct rtl8192_rx_info *)VAR_2->cb;
 struct net_device *VAR_4 = VAR_3->dev;

 struct ieee80211_rx_stats VAR_5 = {
  .signal = 0,
  .noise = 0x100 - 98,
  .rate = 0,
  .freq = VAR_0,
 };

 if ((VAR_2->len >= (20 + sizeof(struct rx_desc_819x_usb))) && (VAR_2->len < VAR_1)) {
  FUNC_1(VAR_2, &VAR_5);




  FUNC_2(VAR_4, &VAR_5);

  FUNC_0(VAR_2);
 }
}
