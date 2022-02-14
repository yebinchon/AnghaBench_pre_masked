
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct rtl_usb {int (* usb_mq_to_hwq ) (int ,int ) ;} ;
struct rtl_tcb_desc {int dummy; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,struct sk_buff*,int ) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_sta*,struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct rtl_hal*) ;
 struct rtl_hal* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_1,
        struct ieee80211_sta *VAR_2,
        struct sk_buff *VAR_3,
        struct rtl_tcb_desc *VAR_4)
{
 struct rtl_usb *VAR_5 = FUNC_6(FUNC_7(VAR_1));
 struct rtl_hal *VAR_6 = FUNC_4(FUNC_5(VAR_1));
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *)(VAR_3->data);
 __le16 VAR_8 = VAR_7->frame_control;
 u16 VAR_9;

 if (FUNC_10(FUNC_3(VAR_6)))
  goto err_free;
 VAR_9 = VAR_5->usb_mq_to_hwq(VAR_8, FUNC_8(VAR_3));
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_9);
 FUNC_0(VAR_1, VAR_3, VAR_9);
 return VAR_0;

err_free:
 FUNC_2(VAR_3);
 return VAR_0;
}
