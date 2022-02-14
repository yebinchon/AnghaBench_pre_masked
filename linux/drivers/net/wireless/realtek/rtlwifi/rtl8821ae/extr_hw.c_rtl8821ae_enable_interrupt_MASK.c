
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_pci {int* irq_mask; int irq_enabled; int sys_irq_mask; scalar_t__ int_clear; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

void FUNC_5(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_3(VAR_3);
 struct rtl_pci *VAR_5 = FUNC_1(FUNC_2(VAR_3));

 if (VAR_5->int_clear)
  FUNC_0(VAR_3);

 FUNC_4(VAR_4, VAR_0, VAR_5->irq_mask[0] & 0xFFFFFFFF);
 FUNC_4(VAR_4, VAR_1, VAR_5->irq_mask[1] & 0xFFFFFFFF);
 VAR_5->irq_enabled = 1;







 FUNC_4(VAR_4, VAR_2, VAR_5->sys_irq_mask & 0xFFFFFFFF);
}
