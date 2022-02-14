
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {int* irq_mask; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_pci* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

void FUNC_6(struct ieee80211_hw *VAR_2,
       u32 VAR_3, u32 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_5(VAR_2);
 struct rtl_pci *VAR_6 = FUNC_3(FUNC_4(VAR_2));

 FUNC_0(VAR_5, VAR_0, VAR_1,
   "add_msr:%x, rm_msr:%x\n", VAR_3, VAR_4);

 if (VAR_3)
  VAR_6->irq_mask[0] |= VAR_3;
 if (VAR_4)
  VAR_6->irq_mask[0] &= (~VAR_4);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
}
