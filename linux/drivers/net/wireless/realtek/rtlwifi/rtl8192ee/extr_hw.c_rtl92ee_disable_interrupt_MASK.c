
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_pci {int irq_enabled; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,int ) ;

void FUNC_4(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_2(VAR_3);
 struct rtl_pci *VAR_5 = FUNC_0(FUNC_1(VAR_3));

 FUNC_3(VAR_4, VAR_1, VAR_0);
 FUNC_3(VAR_4, VAR_2, VAR_0);
 VAR_5->irq_enabled = 0;

}
