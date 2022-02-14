
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rtl_phy {TYPE_1__* hwparam_tables; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;
struct TYPE_2__ {int length; int * pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;




 int VAR_6 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (char*,int) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int,int ,int ,int ) ;

bool FUNC_6(struct ieee80211_hw *VAR_7,
       enum radio_path VAR_8)
{
 int VAR_9;
 u32 *VAR_10;
 u32 *VAR_11;
 u16 VAR_12, VAR_13;
 struct rtl_priv *VAR_14 = FUNC_4(VAR_7);
 struct rtl_hal *VAR_15 = FUNC_3(FUNC_4(VAR_7));
 struct rtl_phy *VAR_16 = &(VAR_14->phy);

 if (FUNC_0(VAR_15->version)) {
  VAR_12 = VAR_16->hwparam_tables[VAR_3].length;
  VAR_10 = VAR_16->hwparam_tables[VAR_3].pdata;
  VAR_13 = VAR_16->hwparam_tables[VAR_5].length;
  VAR_11 = VAR_16->hwparam_tables[VAR_5].pdata;
  FUNC_1(VAR_14, VAR_0, VAR_1,
    "Radio_A:RTL8192CURADIOA_2TARRAY\n");
  FUNC_1(VAR_14, VAR_0, VAR_1,
    "Radio_B:RTL8192CU_RADIOB_2TARRAY\n");
 } else {
  VAR_12 = VAR_16->hwparam_tables[VAR_2].length;
  VAR_10 = VAR_16->hwparam_tables[VAR_2].pdata;
  VAR_13 = VAR_16->hwparam_tables[VAR_4].length;
  VAR_11 = VAR_16->hwparam_tables[VAR_4].pdata;
  FUNC_1(VAR_14, VAR_0, VAR_1,
    "Radio_A:RTL8192CU_RADIOA_1TARRAY\n");
  FUNC_1(VAR_14, VAR_0, VAR_1,
    "Radio_B:RTL8192CU_RADIOB_1TARRAY\n");
 }
 FUNC_1(VAR_14, VAR_0, VAR_1, "Radio No %x\n", VAR_8);
 switch (VAR_8) {
 case 131:
  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9 = VAR_9 + 2) {
   FUNC_5(VAR_7, VAR_8, VAR_10[VAR_9],
     VAR_6,
     VAR_10[VAR_9 + 1]);
  }
  break;
 case 130:
  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9 = VAR_9 + 2) {
   FUNC_5(VAR_7, VAR_8, VAR_11[VAR_9],
     VAR_6,
     VAR_11[VAR_9 + 1]);
  }
  break;
 case 129:
 case 128:
  FUNC_2("switch case %#x not processed\n", VAR_8);
  break;
 default:
  break;
 }
 return 1;
}
