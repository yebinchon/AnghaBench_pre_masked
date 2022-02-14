
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




 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int *) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

bool FUNC_3(struct ieee80211_hw *VAR_4,
       enum radio_path VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_2(VAR_4);
 bool VAR_7 = 1;
 u32 *VAR_8;
 u16 VAR_9;

 VAR_9 = VAR_3;
 VAR_8 = VAR_2;
 FUNC_0(VAR_6, VAR_0, VAR_1,
   "Radio_A:RTL8188EE_RADIOA_1TARRAY %d\n", VAR_9);
 FUNC_0(VAR_6, VAR_0, VAR_1, "Radio No %x\n", VAR_5);
 VAR_7 = 1;
 switch (VAR_5) {
 case 131:
  FUNC_1(VAR_4, VAR_9, VAR_8);
  break;
 case 130:
 case 129:
 case 128:
  break;
 }
 return 1;
}
