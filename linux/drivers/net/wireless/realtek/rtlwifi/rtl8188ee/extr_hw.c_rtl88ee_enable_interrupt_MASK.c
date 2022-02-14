
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_pci {int* irq_mask; int irq_enabled; int sys_irq_mask; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,int ) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

void FUNC_5(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_4);
 struct rtl_pci *VAR_6 = FUNC_0(FUNC_1(VAR_4));

 FUNC_4(VAR_5, VAR_1,
   VAR_6->irq_mask[0] & 0xFFFFFFFF);
 FUNC_4(VAR_5, VAR_2,
   VAR_6->irq_mask[1] & 0xFFFFFFFF);
 VAR_6->irq_enabled = 1;





 FUNC_3(VAR_5, VAR_0, 0);

 FUNC_4(VAR_5, VAR_3,
   VAR_6->sys_irq_mask & 0xFFFFFFFF);
}
