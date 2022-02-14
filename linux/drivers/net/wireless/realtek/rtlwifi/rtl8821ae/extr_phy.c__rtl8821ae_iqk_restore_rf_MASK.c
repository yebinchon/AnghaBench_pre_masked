
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_4 (struct ieee80211_hw*,int,size_t,int ,size_t) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_4,
          enum radio_path VAR_5,
          u32 *VAR_6,
          u32 *VAR_7, u32 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_4);
 u32 VAR_10;

 FUNC_3(VAR_4, 0x82c, FUNC_0(31), 0x0);
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  FUNC_4(VAR_4, VAR_5, VAR_6[VAR_10], VAR_2,
         VAR_7[VAR_10]);

 switch (VAR_5) {
 case 128:
  FUNC_1(VAR_9, VAR_0, VAR_1,
    "RestoreRF Path A Success!!!!\n");
  break;
 default:
   break;
 }
}
