
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rtl_phy {int**** tx_power_by_rate_offset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
typedef enum band_type { ____Placeholder_band_type } band_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 size_t FUNC_1 (int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_5,
         enum band_type VAR_6,
         enum radio_path VAR_7,
         u32 VAR_8, u32 VAR_9,
         u32 VAR_10, u32 VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_2(VAR_5);
 struct rtl_phy *VAR_13 = &VAR_12->phy;
 u8 VAR_14 = FUNC_1(VAR_9);

 if (VAR_6 != VAR_0 && VAR_6 != VAR_1) {
  FUNC_0(VAR_12, VAR_2, VAR_4, "Invalid Band %d\n", VAR_6);
  return;
 }

 if (VAR_7 > VAR_3 - 1) {
  FUNC_0(VAR_12, VAR_2, VAR_4,
    "Invalid RfPath %d\n", VAR_7);
  return;
 }
 if (VAR_8 > VAR_3 - 1) {
  FUNC_0(VAR_12, VAR_2, VAR_4, "Invalid TxNum %d\n", VAR_8);
  return;
 }

 VAR_13->tx_power_by_rate_offset[VAR_6][VAR_7][VAR_8][VAR_14] = VAR_11;
}
