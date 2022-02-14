
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_usb {int* irq_mask; } ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {int* irq_mask; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct rtl_priv*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;

void FUNC_7(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_3(VAR_2);
 struct rtl_pci *VAR_4 = FUNC_1(FUNC_2(VAR_2));
 struct rtl_usb *VAR_5 = FUNC_4(FUNC_5(VAR_2));

 if (FUNC_0(VAR_3)) {
  FUNC_6(VAR_3, VAR_0, VAR_4->irq_mask[0] &
    0xFFFFFFFF);
  FUNC_6(VAR_3, VAR_1, VAR_4->irq_mask[1] &
    0xFFFFFFFF);
 } else {
  FUNC_6(VAR_3, VAR_0, VAR_5->irq_mask[0] &
    0xFFFFFFFF);
  FUNC_6(VAR_3, VAR_1, VAR_5->irq_mask[1] &
    0xFFFFFFFF);
 }
}
