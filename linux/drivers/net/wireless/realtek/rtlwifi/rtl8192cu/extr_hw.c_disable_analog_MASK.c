
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_9, bool VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_0(VAR_9);
 u16 VAR_12 = 0;
 u8 VAR_13 = 0;

 if (VAR_10) {






  FUNC_2(VAR_11, VAR_5, 0x04);
  VAR_13 = FUNC_1(VAR_11, VAR_6);
  VAR_13 &= (~VAR_2);
  FUNC_2(VAR_11, VAR_6, VAR_13);
 }





 FUNC_2(VAR_11, VAR_8, 0x23);
 VAR_12 |= (VAR_1 | VAR_0 | VAR_3);
 FUNC_3(VAR_11, VAR_4, (u16)VAR_12);
 FUNC_2(VAR_11, VAR_7, 0x0E);
}
