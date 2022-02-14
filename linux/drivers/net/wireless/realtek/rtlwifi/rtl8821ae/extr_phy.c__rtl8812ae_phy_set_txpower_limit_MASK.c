
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_phy {scalar_t__***** txpwr_limit_2_4g; scalar_t__***** txpwr_limit_5g; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (size_t*,size_t*,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct ieee80211_hw*,int ,size_t) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_6, u8 *VAR_7,
          u8 *VAR_8, u8 *VAR_9,
          u8 *VAR_10, u8 *VAR_11,
          u8 *VAR_12, u8 *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_4(VAR_6);
 struct rtl_phy *VAR_15 = &VAR_14->phy;
 u8 VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19;
 u8 VAR_20;
 s8 VAR_21 = 0, VAR_22, VAR_23;

 if (!FUNC_2((char *)VAR_12, &VAR_19) ||
     !FUNC_2((char *)VAR_13,
      &VAR_21)) {
  FUNC_0(VAR_14, VAR_2, VAR_3,
    "Illegal index of pwr_lmt table [chnl %d][val %d]\n",
     VAR_19, VAR_21);
 }

 VAR_21 = VAR_21 > VAR_4 ?
        VAR_4 : VAR_21;

 if (FUNC_1(VAR_7, (u8 *)("FCC"), 3))
  VAR_16 = 0;
 else if (FUNC_1(VAR_7, (u8 *)("MKK"), 3))
  VAR_16 = 1;
 else if (FUNC_1(VAR_7, (u8 *)("ETSI"), 4))
  VAR_16 = 2;
 else if (FUNC_1(VAR_7, (u8 *)("WW13"), 4))
  VAR_16 = 3;

 if (FUNC_1(VAR_10, (u8 *)("CCK"), 3))
  VAR_18 = 0;
 else if (FUNC_1(VAR_10, (u8 *)("OFDM"), 4))
  VAR_18 = 1;
 else if (FUNC_1(VAR_10, (u8 *)("HT"), 2) &&
   FUNC_1(VAR_11, (u8 *)("1T"), 2))
  VAR_18 = 2;
 else if (FUNC_1(VAR_10, (u8 *)("HT"), 2) &&
   FUNC_1(VAR_11, (u8 *)("2T"), 2))
  VAR_18 = 3;
 else if (FUNC_1(VAR_10, (u8 *)("VHT"), 3) &&
   FUNC_1(VAR_11, (u8 *)("1T"), 2))
  VAR_18 = 4;
 else if (FUNC_1(VAR_10, (u8 *)("VHT"), 3) &&
   FUNC_1(VAR_11, (u8 *)("2T"), 2))
  VAR_18 = 5;

 if (FUNC_1(VAR_9, (u8 *)("20M"), 3))
  VAR_17 = 0;
 else if (FUNC_1(VAR_9, (u8 *)("40M"), 3))
  VAR_17 = 1;
 else if (FUNC_1(VAR_9, (u8 *)("80M"), 3))
  VAR_17 = 2;
 else if (FUNC_1(VAR_9, (u8 *)("160M"), 4))
  VAR_17 = 3;

 if (FUNC_1(VAR_8, (u8 *)("2.4G"), 4)) {
  VAR_23 = FUNC_3(VAR_6,
              VAR_0,
              VAR_19);

  if (VAR_23 == -1)
   return;

  VAR_20 = VAR_23;

  VAR_22 = VAR_15->txpwr_limit_2_4g[VAR_16]
      [VAR_17][VAR_18]
      [VAR_20][VAR_5];

  if (VAR_21 < VAR_22)
   VAR_15->txpwr_limit_2_4g[VAR_16][VAR_17]
    [VAR_18][VAR_20][VAR_5] =
           VAR_21;

  FUNC_0(VAR_14, VAR_2, VAR_3,
    "2.4G [regula %d][bw %d][sec %d][chnl %d][val %d]\n",
     VAR_16, VAR_17, VAR_18, VAR_20,
     VAR_15->txpwr_limit_2_4g[VAR_16][VAR_17]
    [VAR_18][VAR_20][VAR_5]);
 } else if (FUNC_1(VAR_8, (u8 *)("5G"), 2)) {
  VAR_23 = FUNC_3(VAR_6,
              VAR_1,
              VAR_19);

  if (VAR_23 == -1)
   return;

  VAR_20 = VAR_23;

  VAR_22 = VAR_15->txpwr_limit_5g[VAR_16][VAR_17]
      [VAR_18][VAR_20]
      [VAR_5];

  if (VAR_21 < VAR_22)
   VAR_15->txpwr_limit_5g[VAR_16][VAR_17]
   [VAR_18][VAR_20][VAR_5] = VAR_21;

  FUNC_0(VAR_14, VAR_2, VAR_3,
    "5G: [regul %d][bw %d][sec %d][chnl %d][val %d]\n",
     VAR_16, VAR_17, VAR_18, VAR_19,
     VAR_15->txpwr_limit_5g[VAR_16][VAR_17]
    [VAR_18][VAR_20][VAR_5]);
 } else {
  FUNC_0(VAR_14, VAR_2, VAR_3,
    "Cannot recognize the band info in %s\n", VAR_8);
  return;
 }
}
