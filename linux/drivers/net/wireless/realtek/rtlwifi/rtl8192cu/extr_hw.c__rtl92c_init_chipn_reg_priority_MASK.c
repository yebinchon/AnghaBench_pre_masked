
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_priv*,int ) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_1, u16 VAR_2,
         u16 VAR_3, u16 VAR_4, u16 VAR_5,
         u16 VAR_6, u16 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_6(VAR_1);
 u16 VAR_9 = (FUNC_7(VAR_8, VAR_0) & 0x7);

 VAR_9 |= FUNC_0(VAR_2) | FUNC_1(VAR_3) |
     FUNC_4(VAR_4) | FUNC_5(VAR_5) |
     FUNC_3(VAR_6) | FUNC_2(VAR_7);
 FUNC_8(VAR_8, VAR_0, VAR_9);
}
