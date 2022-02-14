
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ context; } ;
struct sk_buff {int dummy; } ;
struct rtl_usb {int intf; } ;
struct ieee80211_tx_info {scalar_t__* rate_driver_data; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct rtl_usb*) ;
 int FUNC_2 (struct ieee80211_hw*,struct urb*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct ieee80211_hw* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_0)
{
 struct sk_buff *VAR_1 = (struct sk_buff *)VAR_0->context;
 struct ieee80211_tx_info *VAR_2 = FUNC_0(VAR_1);
 struct rtl_usb *VAR_3 = (struct rtl_usb *)VAR_2->rate_driver_data[0];
 struct ieee80211_hw *VAR_4 = FUNC_4(VAR_3->intf);
 int VAR_5;

 if (FUNC_3(FUNC_1(VAR_3)))
  return;
 VAR_5 = FUNC_2(VAR_4, VAR_0, VAR_1);
 if (VAR_5) {

  return;
 }
}
