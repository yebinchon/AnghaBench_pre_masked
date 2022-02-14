
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl818x_rf_ops {int dummy; } ;
struct rtl8187_priv {int is_rtl8187b; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;


 struct rtl818x_rf_ops const VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int) ;
 struct rtl818x_rf_ops const VAR_1 ;
 struct rtl818x_rf_ops const VAR_2 ;

const struct rtl818x_rf_ops * FUNC_2(struct ieee80211_hw *VAR_3)
{
 u16 VAR_4, VAR_5;
 struct rtl8187_priv *VAR_6 = VAR_3->priv;

 if (!VAR_6->is_rtl8187b) {
  FUNC_1(VAR_3, 0, 0x1B7);

  VAR_4 = FUNC_0(VAR_3, 8);
  VAR_5 = FUNC_0(VAR_3, 9);

  FUNC_1(VAR_3, 0, 0x0B7);

  if (VAR_4 != 0x588 || VAR_5 != 0x700)
   return &VAR_0;

  return &VAR_2;
 } else
  return &VAR_1;
}
