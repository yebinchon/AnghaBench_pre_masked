
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int) ;
 int FUNC_5 (struct rtl_priv*,int ) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (struct rtl_priv*,int,int) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;

bool FUNC_9(struct ieee80211_hw *VAR_10)
{
 bool VAR_11 = 1;
 struct rtl_priv *VAR_12 = FUNC_3(VAR_10);
 u16 VAR_13;
 u8 VAR_14 = 1;
 u32 VAR_15;
 FUNC_2(VAR_10);
 VAR_13 = FUNC_5(VAR_12, VAR_6);
 FUNC_8(VAR_12, VAR_6,
         VAR_13 | FUNC_0(13) | FUNC_0(0) | FUNC_0(1));

 FUNC_6(VAR_12, VAR_5, VAR_7 | VAR_8 | VAR_9);
 FUNC_6(VAR_12, VAR_6,
         VAR_4 | VAR_3 | VAR_2 |
         VAR_1 | VAR_0);
 VAR_15 = FUNC_4(VAR_12, 0x4c);
 FUNC_7(VAR_12, 0x4c, VAR_15 | FUNC_0(23));
 if (VAR_14 == 1)
  VAR_11 = FUNC_1(VAR_10);
 return VAR_11;
}
