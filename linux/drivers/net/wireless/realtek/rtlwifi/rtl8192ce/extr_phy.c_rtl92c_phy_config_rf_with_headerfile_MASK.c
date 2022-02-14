
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (char*,int) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int,int ,int ,int ) ;

bool FUNC_6(struct ieee80211_hw *VAR_11,
       enum radio_path VAR_12)
{

 int VAR_13;
 u32 *VAR_14;
 u32 *VAR_15;
 u16 VAR_16, VAR_17;
 struct rtl_priv *VAR_18 = FUNC_4(VAR_11);
 struct rtl_hal *VAR_19 = FUNC_3(FUNC_4(VAR_11));

 if (FUNC_0(VAR_19->version)) {
  VAR_16 = VAR_3;
  VAR_14 = VAR_7;
  VAR_17 = VAR_5;
  VAR_15 = VAR_10;
  FUNC_1(VAR_18, VAR_0, VAR_1,
    "Radio_A:RTL8192CERADIOA_2TARRAY\n");
  FUNC_1(VAR_18, VAR_0, VAR_1,
    "Radio_B:RTL8192CE_RADIOB_2TARRAY\n");
 } else {
  VAR_16 = VAR_2;
  VAR_14 = VAR_8;
  VAR_17 = VAR_4;
  VAR_15 = VAR_9;
  FUNC_1(VAR_18, VAR_0, VAR_1,
    "Radio_A:RTL8192CE_RADIOA_1TARRAY\n");
  FUNC_1(VAR_18, VAR_0, VAR_1,
    "Radio_B:RTL8192CE_RADIOB_1TARRAY\n");
 }
 FUNC_1(VAR_18, VAR_0, VAR_1, "Radio No %x\n", VAR_12);
 switch (VAR_12) {
 case 131:
  for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13 = VAR_13 + 2) {
   FUNC_5(VAR_11, VAR_12, VAR_14[VAR_13],
     VAR_6,
     VAR_14[VAR_13 + 1]);
  }
  break;
 case 130:
  for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13 = VAR_13 + 2) {
   FUNC_5(VAR_11, VAR_12, VAR_15[VAR_13],
     VAR_6,
     VAR_15[VAR_13 + 1]);
  }
  break;
 case 129:
 case 128:
  FUNC_2("Incorrect rfpath %#x\n", VAR_12);
  break;
 default:
  FUNC_2("switch case %#x not processed\n", VAR_12);
  break;
 }
 return 1;
}
