
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int current_channel; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_dm {int tx_rate; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int** VAR_8 ;
 int** VAR_9 ;
 int** VAR_10 ;
 int** VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 struct rtl_dm* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_14,
         u8 **VAR_15, u8 **VAR_16,
         u8 **VAR_17, u8 **VAR_18)
{
 struct rtl_priv *VAR_19 = FUNC_2(VAR_14);
 struct rtl_phy *VAR_20 = &VAR_19->phy;
 struct rtl_dm *VAR_21 = FUNC_1(FUNC_2(VAR_14));
 u8 VAR_22 = VAR_20->current_channel;
 u8 VAR_23 = VAR_21->tx_rate;

 if (1 <= VAR_22 && VAR_22 <= 14) {
  if (FUNC_0(VAR_23)) {
   *VAR_15 = VAR_5;
   *VAR_16 = VAR_4;
   *VAR_17 = VAR_7;
   *VAR_18 = VAR_6;
  } else {
   *VAR_15 = VAR_1;
   *VAR_16 = VAR_0;
   *VAR_17 = VAR_3;
   *VAR_18 = VAR_2;
  }
 } else if (36 <= VAR_22 && VAR_22 <= 64) {
  *VAR_15 = VAR_9[0];
  *VAR_16 = VAR_8[0];
  *VAR_17 = VAR_11[0];
  *VAR_18 = VAR_10[0];
 } else if (100 <= VAR_22 && VAR_22 <= 140) {
  *VAR_15 = VAR_9[1];
  *VAR_16 = VAR_8[1];
  *VAR_17 = VAR_11[1];
  *VAR_18 = VAR_10[1];
 } else if (149 <= VAR_22 && VAR_22 <= 173) {
  *VAR_15 = VAR_9[2];
  *VAR_16 = VAR_8[2];
  *VAR_17 = VAR_11[2];
  *VAR_18 = VAR_10[2];
 } else {
     *VAR_15 = (u8 *)VAR_13;
     *VAR_16 = (u8 *)VAR_12;
     *VAR_17 = (u8 *)VAR_13;
     *VAR_18 = (u8 *)VAR_12;
 }
}
