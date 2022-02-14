
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__* internal_pa_5g; } ;
struct rtl_priv {TYPE_1__ efuse; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rf_content { ____Placeholder_rf_content } rf_content ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int ,int ) ;

bool FUNC_4(struct ieee80211_hw *VAR_13,
       enum rf_content VAR_14,
       enum radio_path VAR_15)
{
 int VAR_16;
 u32 *VAR_17;
 u32 *VAR_18;
 u16 VAR_19, VAR_20;
 struct rtl_priv *VAR_21 = FUNC_2(VAR_13);

 VAR_19 = VAR_3;
 VAR_17 = VAR_10;
 VAR_20 = VAR_5;
 VAR_18 = VAR_12;
 if (VAR_21->efuse.internal_pa_5g[0]) {
  VAR_19 = VAR_4;
  VAR_17 = VAR_9;
 }
 if (VAR_21->efuse.internal_pa_5g[1]) {
  VAR_20 = VAR_6;
  VAR_18 = VAR_11;
 }
 FUNC_0(VAR_21, VAR_0, VAR_1,
   "PHY_ConfigRFWithHeaderFile() Radio_A:Rtl819XRadioA_1TArray\n");
 FUNC_0(VAR_21, VAR_0, VAR_1,
   "PHY_ConfigRFWithHeaderFile() Radio_B:Rtl819XRadioB_1TArray\n");
 FUNC_0(VAR_21, VAR_0, VAR_2, "Radio No %x\n", VAR_15);




 if ((VAR_14 == VAR_8) && (VAR_15 == 131)) {
  FUNC_0(VAR_21, VAR_0, VAR_1,
    " ===> althougth Path A, we load radiob.txt\n");
  VAR_19 = VAR_20;
  VAR_17 = VAR_18;
 }
 switch (VAR_15) {
 case 131:
  for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16 = VAR_16 + 2) {
   FUNC_3(VAR_13, VAR_15, VAR_17[VAR_16],
     VAR_7,
     VAR_17[VAR_16 + 1]);
  }
  break;
 case 130:
  for (VAR_16 = 0; VAR_16 < VAR_20; VAR_16 = VAR_16 + 2) {
   FUNC_3(VAR_13, VAR_15, VAR_18[VAR_16],
     VAR_7,
     VAR_18[VAR_16 + 1]);
  }
  break;
 case 129:
 case 128:
  FUNC_1("switch case %#x not processed\n", VAR_15);
  break;
 }
 return 1;
}
