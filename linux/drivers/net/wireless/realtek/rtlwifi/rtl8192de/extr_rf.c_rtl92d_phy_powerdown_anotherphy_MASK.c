
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_hal {int during_mac0init_radiob; int during_mac1init_radioa; } ;
struct rtl_priv {struct rtl_hal rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int) ;

void FUNC_5(struct ieee80211_hw *VAR_8, bool VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_3(VAR_8);
 struct rtl_hal *VAR_11 = &(VAR_10->rtlhal);
 u8 VAR_12;
 u8 VAR_13 = VAR_9 ? FUNC_0(3) | FUNC_0(2) : FUNC_0(3);
 u8 VAR_14 = VAR_9 ? VAR_6 : VAR_5;
 u8 VAR_15 = VAR_9 ? VAR_4 : VAR_3;

 VAR_11->during_mac0init_radiob = 0;
 VAR_11->during_mac1init_radioa = 0;
 FUNC_1(VAR_10, VAR_1, VAR_2, "====>\n");


 VAR_12 = FUNC_4(VAR_10, VAR_14);
 if (!(VAR_12 & VAR_15)) {
  FUNC_1(VAR_10, VAR_0, VAR_2, "power down\n");

  FUNC_2(VAR_8, VAR_7,
     0x00000000, VAR_13);
 }
 FUNC_1(VAR_10, VAR_1, VAR_2, "<====\n");
}
