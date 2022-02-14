
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_hal {int oem_id; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ,int (*) (struct ieee80211_hw*,int,int)) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

bool FUNC_5(struct ieee80211_hw *VAR_6,
          enum radio_path VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_4(VAR_6);
 struct rtl_hal *VAR_9 = FUNC_3(FUNC_4(VAR_6));
 bool VAR_10 = 1;

 FUNC_0(VAR_8, VAR_1, VAR_2, "Radio No %x\n", VAR_7);
 switch (VAR_7) {
 case 131:
  VAR_10 = FUNC_2(VAR_6,
    VAR_3,
    VAR_4,
    FUNC_1);

  if (VAR_9->oem_id == VAR_5)
   FUNC_1(VAR_6, 0x52, 0x7E4BD);
  break;
 case 130:
 case 129:
  break;
 case 128:
  FUNC_0(VAR_8, VAR_0, VAR_2,
    "switch case %#x not processed\n", VAR_7);
  break;
 }
 return VAR_10;
}
