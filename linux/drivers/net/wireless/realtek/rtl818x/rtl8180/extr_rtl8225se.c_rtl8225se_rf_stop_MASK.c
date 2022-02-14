
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8180_priv {int dummy; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8180_priv*,int ) ;
 int FUNC_1 (struct rtl8180_priv*,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int) ;
 int FUNC_4 (int,int) ;

void FUNC_5(struct ieee80211_hw *VAR_2)
{

 struct rtl8180_priv *VAR_3 = VAR_2->priv;


 FUNC_3(VAR_2, 0x10, 0x00);
 FUNC_3(VAR_2, 0x12, 0x00);

 FUNC_2(VAR_2, 0x04, 0x0000);
 FUNC_2(VAR_2, 0x00, 0x0000);

 FUNC_4(1000, 5000);

 FUNC_0(VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_0);
}
