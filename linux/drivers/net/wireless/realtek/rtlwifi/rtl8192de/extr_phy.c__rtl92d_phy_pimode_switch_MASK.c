
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_3, bool VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6;

 FUNC_0(VAR_5, VAR_0, VAR_1,
  "BB Switch to %s mode!\n", VAR_4 ? "PI" : "SI");
 VAR_6 = VAR_4 ? 0x01000100 : 0x01000000;
 FUNC_2(VAR_3, 0x820, VAR_2, VAR_6);
 FUNC_2(VAR_3, 0x828, VAR_2, VAR_6);
}
