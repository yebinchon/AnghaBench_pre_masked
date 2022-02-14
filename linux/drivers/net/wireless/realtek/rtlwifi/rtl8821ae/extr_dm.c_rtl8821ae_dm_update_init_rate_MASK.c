
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct rtl_dm {scalar_t__ tx_rate; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__) ;
 int FUNC_1 (struct ieee80211_hw*,int ,scalar_t__,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int ,scalar_t__,int ) ;
 struct rtl_dm* FUNC_3 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

void FUNC_6(struct ieee80211_hw *VAR_6, u8 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_5(VAR_6);
 struct rtl_dm *VAR_9 = FUNC_3(FUNC_5(VAR_6));
 struct rtl_hal *VAR_10 = FUNC_4(FUNC_5(VAR_6));
 u8 VAR_11 = 0;

 FUNC_0(VAR_8, VAR_0, VAR_1,
   "Get C2H Command! Rate=0x%x\n", VAR_7);

 VAR_9->tx_rate = VAR_7;

 if (VAR_10->hw_type == VAR_2) {
  FUNC_2(VAR_6, VAR_4, VAR_5, 0);
 } else {
  for (VAR_11 = VAR_5; VAR_11 < VAR_3; VAR_11++)
   FUNC_1(VAR_6, VAR_4, VAR_11, 0);
 }
}
