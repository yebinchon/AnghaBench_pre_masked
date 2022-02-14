
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

 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,...) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_2,
           enum radio_path VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_2(VAR_2);
 switch (VAR_3) {
 case 128:
  FUNC_4(VAR_2, 0x82c, FUNC_0(31), 0x0);
  FUNC_4(VAR_2, 0xc10, 0x000003ff, VAR_4>>1);
  FUNC_4(VAR_2, 0xc10, 0x03ff0000, VAR_5>>1);
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "rx_x = %x;;rx_y = %x ====>fill to IQC\n",
    VAR_4>>1, VAR_5>>1);
  FUNC_1(VAR_6, VAR_0, VAR_1,
    "0xc10 = %x ====>fill to IQC\n",
    FUNC_3(VAR_6, 0xc10));
  break;
 default:
  break;
 }
}
