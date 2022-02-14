
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct urb {int transfer_flags; } ;
struct sk_buff {int len; int data; } ;
struct rtl_usb {int udev; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl_usb*,struct sk_buff*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct sk_buff*) ;
 struct rtl_usb* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int ,int ,int ,int ,int ,struct sk_buff*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static struct urb *FUNC_8(struct ieee80211_hw *VAR_3,
    struct sk_buff *VAR_4, u32 VAR_5)
{
 struct rtl_usb *VAR_6 = FUNC_3(FUNC_4(VAR_3));
 struct urb *VAR_7;

 FUNC_0(((void*)0) == VAR_4);
 VAR_7 = FUNC_5(0, VAR_0);
 if (!VAR_7) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 FUNC_1(VAR_6, VAR_4, VAR_5);
 FUNC_6(VAR_7, VAR_6->udev, FUNC_7(VAR_6->udev,
     VAR_5), VAR_4->data, VAR_4->len, VAR_2, VAR_4);
 VAR_7->transfer_flags |= VAR_1;
 return VAR_7;
}
