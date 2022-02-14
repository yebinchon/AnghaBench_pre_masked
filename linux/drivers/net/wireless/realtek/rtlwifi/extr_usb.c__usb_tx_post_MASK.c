
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; } ;
struct sk_buff {int dummy; } ;
struct rtl_usb {int (* usb_tx_post_hdl ) (struct ieee80211_hw*,struct urb*,struct sk_buff*) ;} ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_tx_info*) ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_3 (char*,int) ;
 struct rtl_usb* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct ieee80211_hw*,struct urb*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_2, struct urb *VAR_3,
   struct sk_buff *VAR_4)
{
 struct rtl_usb *VAR_5 = FUNC_4(FUNC_5(VAR_2));
 struct ieee80211_tx_info *VAR_6;

 VAR_5->usb_tx_post_hdl(VAR_2, VAR_3, VAR_4);
 FUNC_6(VAR_4, VAR_1);
 VAR_6 = FUNC_0(VAR_4);
 FUNC_1(VAR_6);
 VAR_6->flags |= VAR_0;

 if (VAR_3->status) {
  FUNC_3("Urb has error status 0x%X\n", VAR_3->status);
  goto out;
 }

out:
 FUNC_2(VAR_2, VAR_4);
 return VAR_3->status;
}
