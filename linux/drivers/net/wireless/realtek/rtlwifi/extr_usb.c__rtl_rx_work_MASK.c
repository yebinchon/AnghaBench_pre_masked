
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtl_usb {int usb_rx_segregate_hdl; int rx_queue; int intf; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct rtl_usb*) ;
 int FUNC_1 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 struct sk_buff* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 struct ieee80211_hw* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_0)
{
 struct rtl_usb *VAR_1 = (struct rtl_usb *)VAR_0;
 struct ieee80211_hw *VAR_2 = FUNC_8(VAR_1->intf);
 struct sk_buff *VAR_3;

 while ((VAR_3 = FUNC_6(&VAR_1->rx_queue))) {
  if (FUNC_7(FUNC_0(VAR_1))) {
   FUNC_3(VAR_3);
   continue;
  }

  if (FUNC_4(!VAR_1->usb_rx_segregate_hdl)) {
   FUNC_2(VAR_2, VAR_3);
  } else {

   FUNC_1(VAR_2, VAR_3);
   FUNC_5("rx agg not supported\n");
  }
 }
}
