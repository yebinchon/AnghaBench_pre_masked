
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_pci {int* irq_mask; int irq_enabled; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;

void FUNC_4(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_2(VAR_0);
 struct rtl_pci *VAR_2 = FUNC_0(FUNC_1(VAR_0));

 FUNC_3(VAR_1, 0x3a8, VAR_2->irq_mask[0] & 0xFFFFFFFF);
 FUNC_3(VAR_1, 0x3ac, VAR_2->irq_mask[1] & 0xFFFFFFFF);
 VAR_2->irq_enabled = 1;
}
