
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rtl_usb {int (* usb_rx_segregate_hdl ) (struct ieee80211_hw*,struct sk_buff*,struct sk_buff_head*) ;} ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 struct rtl_usb* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct sk_buff* FUNC_5 (struct sk_buff_head*) ;
 int FUNC_6 (struct sk_buff_head*) ;
 int FUNC_7 (struct sk_buff_head*) ;
 int FUNC_8 (struct ieee80211_hw*,struct sk_buff*,struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_0, struct sk_buff *VAR_1)
{
 struct sk_buff *VAR_2;
 struct sk_buff_head VAR_3;
 struct rtl_usb *VAR_4 = FUNC_3(FUNC_4(VAR_0));

 FUNC_7(&VAR_3);
 if (VAR_4->usb_rx_segregate_hdl)
  VAR_4->usb_rx_segregate_hdl(VAR_0, VAR_1, &VAR_3);
 FUNC_0(FUNC_6(&VAR_3));
 while (!FUNC_6(&VAR_3)) {
  VAR_2 = FUNC_5(&VAR_3);
  FUNC_1(VAR_0, VAR_2);
  FUNC_2(VAR_0, VAR_2);
 }
}
