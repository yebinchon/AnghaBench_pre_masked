
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int max_fw_size; } ;
struct rtl_pci {int irq_enabled; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int ) ;

void FUNC_4(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2;
 struct rtl_pci *VAR_3;

 VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2 || !VAR_2->max_fw_size)
  return;
 VAR_3 = FUNC_0(FUNC_1(VAR_1));
 FUNC_3(VAR_2, VAR_0, 0);
 FUNC_3(VAR_2, VAR_0 + 4, 0);
 VAR_3->irq_enabled = 0;
}
