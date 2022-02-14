
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_pci {int* irq_mask; } ;
struct rtl_int {int inta; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

void FUNC_5(struct ieee80211_hw *VAR_1,
      struct rtl_int *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_1);
 struct rtl_pci *VAR_4 = FUNC_0(FUNC_1(VAR_1));

 VAR_2->inta = FUNC_3(VAR_3, VAR_0) & VAR_4->irq_mask[0];
 FUNC_4(VAR_3, VAR_0, VAR_2->inta);
}
