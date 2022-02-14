
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct rtl_phy {size_t**** tx_power_by_rate_offset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,size_t,...) ;
 size_t FUNC_1 (size_t) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_6,
           u32 VAR_7, u32 VAR_8,
           u32 VAR_9, u32 VAR_10,
           u32 VAR_11, u32 VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_2(VAR_6);
 struct rtl_phy *VAR_14 = &VAR_13->phy;
 u8 VAR_15 = FUNC_1(VAR_10);

 if (VAR_7 != VAR_0 && VAR_7 != VAR_1) {
  FUNC_0(VAR_13, VAR_2, VAR_4, "Invalid Band %d\n", VAR_7);
  VAR_7 = VAR_0;
 }
 if (VAR_8 >= VAR_5) {
  FUNC_0(VAR_13, VAR_2, VAR_4, "Invalid RfPath %d\n", VAR_8);
  VAR_8 = VAR_5 - 1;
 }
 if (VAR_9 >= VAR_5) {
  FUNC_0(VAR_13, VAR_2, VAR_4, "Invalid TxNum %d\n", VAR_9);
  VAR_9 = VAR_5 - 1;
 }
 VAR_14->tx_power_by_rate_offset[VAR_7][VAR_8][VAR_9][VAR_15] = VAR_12;
 FUNC_0(VAR_13, VAR_2, VAR_3,
   "TxPwrByRateOffset[Band %d][RfPath %d][TxNum %d][RateSection %d] = 0x%x\n",
   VAR_7, VAR_8, VAR_9, VAR_15,
   VAR_14->tx_power_by_rate_offset[VAR_7][VAR_8][VAR_9][VAR_15]);
}
