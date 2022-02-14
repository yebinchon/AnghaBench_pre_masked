
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int macphymode; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_4 ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_5,
            u8 *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_3(VAR_5);
 struct rtl_hal *VAR_8 = FUNC_2(FUNC_3(VAR_5));
 u8 VAR_9 = VAR_6[VAR_3];

 if (VAR_9 & FUNC_0(3)) {
  VAR_8->macphymode = VAR_4;
  FUNC_1(VAR_7, VAR_0, VAR_1,
    "MacPhyMode SINGLEMAC_SINGLEPHY\n");
 } else {
  VAR_8->macphymode = VAR_2;
  FUNC_1(VAR_7, VAR_0, VAR_1,
    "MacPhyMode DUALMAC_DUALPHY\n");
 }
}
