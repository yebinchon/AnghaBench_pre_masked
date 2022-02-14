
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;
 int FUNC_3 (struct rtl_priv*,int ,int ) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

void FUNC_5(struct ieee80211_hw *VAR_3,
        u16 VAR_4, u32 VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_3);

 FUNC_4(VAR_7, VAR_0, ((VAR_4 & 0xFFC) | 0xF000));
 FUNC_3(VAR_7, VAR_2, VAR_5);
 FUNC_2(VAR_7, VAR_1, FUNC_0(0) | VAR_6);
}
