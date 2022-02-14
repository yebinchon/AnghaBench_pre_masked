
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int *,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

bool FUNC_4(struct ieee80211_hw *VAR_8,
          enum radio_path VAR_9)
{
 bool VAR_10 = 1;
 u32 *VAR_11, *VAR_12;
 u16 VAR_13, VAR_14;
 struct rtl_priv *VAR_15 = FUNC_3(VAR_8);

 VAR_13 = VAR_2;
 VAR_11 = VAR_3;
 VAR_14 = VAR_4;
 VAR_12 = VAR_5;
 FUNC_0(VAR_15, VAR_0, VAR_1,
   "Radio_A:RTL8821AE_RADIOA_ARRAY %d\n", VAR_13);
 FUNC_0(VAR_15, VAR_0, VAR_1, "Radio No %x\n", VAR_9);
 VAR_10 = 1;
 switch (VAR_9) {
 case 131:
  return FUNC_1(VAR_8,
    VAR_11, VAR_13,
    VAR_6);
  break;
 case 130:
  return FUNC_1(VAR_8,
    VAR_12, VAR_14,
    VAR_7);
  break;
 case 129:
 case 128:
  FUNC_2("switch case %#x not processed\n", VAR_9);
  break;
 }
 return 1;
}
