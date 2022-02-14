
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int,int ,char*,...) ;
 int FUNC_2 (struct rtl_priv*,int) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;
 int FUNC_4 (struct rtl_priv*,int) ;
 int FUNC_5 (struct rtl_priv*,int,int) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_3)
{
 u8 VAR_4 = 0;
 struct rtl_priv *VAR_5 = FUNC_6(VAR_3);

 FUNC_1(VAR_5, VAR_0, VAR_2, "--->\n");

 VAR_4 = FUNC_2(VAR_5, 0x160);
 if (!(VAR_4 & (FUNC_0(2) | FUNC_0(3)))) {
  FUNC_1(VAR_5, VAR_1 | VAR_0, VAR_2,
    "0x160(%#x)return!!\n", VAR_4);
  return;
 }

 VAR_4 = FUNC_4(VAR_5, 0x1b);
 FUNC_5(VAR_5, 0x1b, (VAR_4 | FUNC_0(4)));

 VAR_4 = FUNC_2(VAR_5, 0x718);
 FUNC_3(VAR_5, 0x718, VAR_4 | FUNC_0(5));

 FUNC_1(VAR_5, VAR_0, VAR_2, "<---\n");
}
