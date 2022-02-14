
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {int beacon_interval; scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtl_priv*,int,int ,char*,int ) ;
 int VAR_12 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,int ) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (struct rtl_priv*,int ,int ) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;

void FUNC_9(struct ieee80211_hw *VAR_13)
{

 struct rtl_priv *VAR_14 = FUNC_4(VAR_13);
 struct rtl_mac *VAR_15 = FUNC_3(FUNC_4(VAR_13));
 u16 VAR_16, VAR_17;
 u32 VAR_18;

 VAR_16 = VAR_15->beacon_interval;
 VAR_17 = 2;
 FUNC_8(VAR_14, VAR_6, VAR_17);
 FUNC_8(VAR_14, VAR_7, VAR_16);
 FUNC_2(VAR_13);
 FUNC_6(VAR_14, VAR_10, 0x09);







 VAR_18 = FUNC_5(VAR_14, VAR_11);
 VAR_18 &= ~VAR_12;
 FUNC_7(VAR_14, VAR_11, VAR_18);
 VAR_18 |= VAR_12;
 FUNC_7(VAR_14, VAR_11, VAR_18);
 FUNC_0(VAR_14, VAR_1|VAR_0, VAR_2,
   "SetBeaconRelatedRegisters8192CUsb(): Set TCR(%x)\n",
   VAR_18);


 if ((VAR_15->opmode == VAR_3) ||
     (VAR_15->opmode == VAR_5) ||
     (VAR_15->opmode == VAR_4)) {
  FUNC_6(VAR_14, VAR_8, 0x50);
  FUNC_6(VAR_14, VAR_9, 0x50);
 }
 FUNC_1(VAR_13);
}
