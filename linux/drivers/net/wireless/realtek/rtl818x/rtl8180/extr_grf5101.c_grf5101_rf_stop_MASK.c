
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8180_priv {int anaparam; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;


 int FUNC_0 (struct rtl8180_priv*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0)
{
 struct rtl8180_priv *VAR_1 = VAR_0->priv;
 u32 VAR_2;

 VAR_2 = VAR_1->anaparam;
 VAR_2 &= 0x000fffff;
 VAR_2 |= 0x3f900000;
 FUNC_0(VAR_1, VAR_2);

 FUNC_1(VAR_0, 0x07, 0x0);
 FUNC_1(VAR_0, 0x1f, 0x45);
 FUNC_1(VAR_0, 0x1f, 0x5);
 FUNC_1(VAR_0, 0x00, 0x8e4);
}
