
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,int ,int ,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int,int ,int) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_8)
{
 u32 VAR_9;
 u8 VAR_10 = 5;
 struct rtl_priv *VAR_11 = FUNC_2(VAR_8);

 FUNC_4(VAR_11, VAR_5, 0xFF);
 FUNC_3(VAR_8, VAR_6, 0x00, VAR_7, 0x00);
 FUNC_4(VAR_11, VAR_2, 0x40);
 VAR_9 = FUNC_1(VAR_8, VAR_6, 0, VAR_7);
 while (VAR_9 != 0 && VAR_10 > 0) {
  FUNC_4(VAR_11, VAR_2, 0x0);
  FUNC_3(VAR_8, VAR_6, 0x00, VAR_7, 0x00);
  FUNC_4(VAR_11, VAR_2, 0x40);
  VAR_9 = FUNC_1(VAR_8, VAR_6, 0, VAR_7);
  VAR_10--;
 }
 if (VAR_10 == 0) {
  FUNC_4(VAR_11, VAR_2, 0x00);
  FUNC_4(VAR_11, VAR_4, 0xE2);
  FUNC_4(VAR_11, VAR_4, 0xE3);
  FUNC_4(VAR_11, VAR_5, 0x00);
  FUNC_0(VAR_11, VAR_0, VAR_1,
    "Switch RF timeout !!!\n");
  return;
 }
 FUNC_4(VAR_11, VAR_4, 0xE2);
 FUNC_4(VAR_11, VAR_3, 0x22);
}
