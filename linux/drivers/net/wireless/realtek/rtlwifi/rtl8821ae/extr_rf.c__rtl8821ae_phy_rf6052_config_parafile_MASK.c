
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int num_total_rfpath; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int hw_type; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_5(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_4(VAR_3);
 struct rtl_phy *VAR_5 = &VAR_4->phy;
 struct rtl_hal *VAR_6 = FUNC_3(FUNC_4(VAR_3));
 u8 VAR_7;
 bool VAR_8 = 1;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_total_rfpath; VAR_7++) {
  switch (VAR_7) {
  case 131: {
   if (VAR_6->hw_type == VAR_2)
    VAR_8 =
      FUNC_1(VAR_3,
       (enum radio_path)VAR_7);
   else
    VAR_8 =
      FUNC_2(VAR_3,
       (enum radio_path)VAR_7);
   break;
   }
  case 130:
   if (VAR_6->hw_type == VAR_2)
    VAR_8 =
      FUNC_1(VAR_3,
       (enum radio_path)VAR_7);
   else
    VAR_8 =
      FUNC_2(VAR_3,
       (enum radio_path)VAR_7);
   break;
  case 129:
   break;
  case 128:
   break;
  }

  if (!VAR_8) {
   FUNC_0(VAR_4, VAR_0, VAR_1,
     "Radio[%d] Fail!!\n", VAR_7);
   return 0;
  }
 }


 FUNC_0(VAR_4, VAR_0, VAR_1, "\n");
 return VAR_8;
}
