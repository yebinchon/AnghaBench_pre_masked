
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
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
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;
 int FUNC_5 (struct rtl_priv*,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_1(VAR_10);
 u8 VAR_12;
 u8 VAR_13, VAR_14 = 0;

 VAR_12 = 0xF7;

 FUNC_4(VAR_11, VAR_7, 0x80E60808);

 FUNC_3(VAR_11, VAR_9, VAR_12);
 FUNC_5(VAR_11, VAR_9 + 2, 0x3d00 - 1);

 FUNC_3(VAR_11, VAR_3 + 1, VAR_12);
 FUNC_3(VAR_11, VAR_4 + 1, VAR_12);

 FUNC_3(VAR_11, VAR_2, VAR_12);
 FUNC_3(VAR_11, VAR_1, VAR_12);

 FUNC_3(VAR_11, VAR_5, VAR_12);
 FUNC_3(VAR_11, 0x45D, VAR_12);

 FUNC_3(VAR_11, VAR_6, 0x31);
 FUNC_3(VAR_11, VAR_8, 0x4);

 VAR_13 = FUNC_2(VAR_11, VAR_0 + 2);
 FUNC_3(VAR_11, VAR_0 + 2, VAR_13 | FUNC_0(0));

 while (VAR_13 & FUNC_0(0)) {
  VAR_13 = FUNC_2(VAR_11, VAR_0 + 2);
  FUNC_6(10);
  VAR_14++;
  if (VAR_14 > 10)
   break;
 }

 return 1;
}
