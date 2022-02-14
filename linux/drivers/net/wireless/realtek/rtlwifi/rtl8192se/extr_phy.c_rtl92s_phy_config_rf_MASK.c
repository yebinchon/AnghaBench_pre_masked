
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 scalar_t__ VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int ,int ) ;

u8 FUNC_4(struct ieee80211_hw *VAR_10, enum radio_path VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_2(VAR_10);
 struct rtl_phy *VAR_13 = &(VAR_12->phy);
 int VAR_14;
 bool VAR_15 = 1;
 u32 *VAR_16;
 u32 *VAR_17;
 u16 VAR_18, VAR_19;

 VAR_18 = VAR_3;
 VAR_16 = VAR_7;


 if (VAR_13->rf_type == VAR_6) {
  VAR_17 = VAR_9;
  VAR_19 = VAR_5;
 } else {
  VAR_17 = VAR_8;
  VAR_19 = VAR_4;
 }

 FUNC_0(VAR_12, VAR_0, VAR_1, "Radio No %x\n", VAR_11);
 VAR_15 = 1;

 switch (VAR_11) {
 case 131:
  for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14 = VAR_14 + 2) {
   FUNC_3(VAR_10, VAR_11, VAR_16[VAR_14],
     VAR_2, VAR_16[VAR_14 + 1]);

  }


  FUNC_1(VAR_10, VAR_11);
  break;
 case 130:
  for (VAR_14 = 0; VAR_14 < VAR_19; VAR_14 = VAR_14 + 2) {
   FUNC_3(VAR_10, VAR_11, VAR_17[VAR_14],
     VAR_2, VAR_17[VAR_14 + 1]);
  }
  break;
 case 129:
  ;
  break;
 case 128:
  ;
  break;
 default:
  break;
 }

 return VAR_15;
}
