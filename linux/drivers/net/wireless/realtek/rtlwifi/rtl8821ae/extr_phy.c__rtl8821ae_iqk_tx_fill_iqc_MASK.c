
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int,int,int) ;
 int FUNC_5 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_2,
           enum radio_path VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_2);
 switch (VAR_3) {
 case 128:

  FUNC_4(VAR_2, 0x82c, FUNC_0(31), 0x1);
  FUNC_5(VAR_6, 0xc90, 0x00000080);
  FUNC_5(VAR_6, 0xcc4, 0x20040000);
  FUNC_5(VAR_6, 0xcc8, 0x20000000);
  FUNC_4(VAR_2, 0xccc, 0x000007ff, VAR_5);
  FUNC_4(VAR_2, 0xcd4, 0x000007ff, VAR_4);
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "TX_X = %x;;TX_Y = %x =====> fill to IQC\n",
    VAR_4, VAR_5);
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "0xcd4 = %x;;0xccc = %x ====>fill to IQC\n",
    FUNC_2(VAR_2, 0xcd4, 0x000007ff),
    FUNC_2(VAR_2, 0xccc, 0x000007ff));
  break;
 default:
  break;
 }
}
