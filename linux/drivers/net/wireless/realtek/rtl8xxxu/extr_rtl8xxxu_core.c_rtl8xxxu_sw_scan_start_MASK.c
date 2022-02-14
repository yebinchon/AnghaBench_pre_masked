
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8xxxu_priv {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct rtl8xxxu_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_2,
       struct ieee80211_vif *VAR_3, const u8 *VAR_4)
{
 struct rtl8xxxu_priv *VAR_5 = VAR_2->priv;
 u8 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_6 |= VAR_0;
 FUNC_1(VAR_5, VAR_1, VAR_6);
}
