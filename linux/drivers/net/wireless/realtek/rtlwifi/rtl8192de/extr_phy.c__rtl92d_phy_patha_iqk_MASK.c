
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ interfaceindex; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int,int ,int) ;

__attribute__((used)) static u8 FUNC_7(struct ieee80211_hw *VAR_4, bool VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_5(VAR_4);
 struct rtl_hal *VAR_7 = FUNC_4(FUNC_5(VAR_4));
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u8 VAR_12 = 0;

 FUNC_1(VAR_6, VAR_0, VAR_1, "Path A IQK!\n");

 FUNC_1(VAR_6, VAR_0, VAR_1, "Path-A IQK setting!\n");
 if (VAR_7->interfaceindex == 0) {
  FUNC_6(VAR_4, 0xe30, VAR_3, 0x10008c1f);
  FUNC_6(VAR_4, 0xe34, VAR_3, 0x10008c1f);
 } else {
  FUNC_6(VAR_4, 0xe30, VAR_3, 0x10008c22);
  FUNC_6(VAR_4, 0xe34, VAR_3, 0x10008c22);
 }
 FUNC_6(VAR_4, 0xe38, VAR_3, 0x82140102);
 FUNC_6(VAR_4, 0xe3c, VAR_3, 0x28160206);

 if (VAR_5) {
  FUNC_6(VAR_4, 0xe50, VAR_3, 0x10008c22);
  FUNC_6(VAR_4, 0xe54, VAR_3, 0x10008c22);
  FUNC_6(VAR_4, 0xe58, VAR_3, 0x82140102);
  FUNC_6(VAR_4, 0xe5c, VAR_3, 0x28160206);
 }

 FUNC_1(VAR_6, VAR_0, VAR_1, "LO calibration setting!\n");
 FUNC_6(VAR_4, 0xe4c, VAR_3, 0x00462911);

 FUNC_1(VAR_6, VAR_0, VAR_1, "One shot, path A LOK & IQK!\n");
 FUNC_6(VAR_4, 0xe48, VAR_3, 0xf9000000);
 FUNC_6(VAR_4, 0xe48, VAR_3, 0xf8000000);

 FUNC_1(VAR_6, VAR_0, VAR_1,
  "Delay %d ms for One shot, path A LOK & IQK\n",
  VAR_2);
 FUNC_2(VAR_2);

 VAR_8 = FUNC_3(VAR_4, 0xeac, VAR_3);
 FUNC_1(VAR_6, VAR_0, VAR_1, "0xeac = 0x%x\n", VAR_8);
 VAR_9 = FUNC_3(VAR_4, 0xe94, VAR_3);
 FUNC_1(VAR_6, VAR_0, VAR_1, "0xe94 = 0x%x\n", VAR_9);
 VAR_10 = FUNC_3(VAR_4, 0xe9c, VAR_3);
 FUNC_1(VAR_6, VAR_0, VAR_1, "0xe9c = 0x%x\n", VAR_10);
 VAR_11 = FUNC_3(VAR_4, 0xea4, VAR_3);
 FUNC_1(VAR_6, VAR_0, VAR_1, "0xea4 = 0x%x\n", VAR_11);
 if (!(VAR_8 & FUNC_0(28)) && (((VAR_9 & 0x03FF0000) >> 16) != 0x142) &&
     (((VAR_10 & 0x03FF0000) >> 16) != 0x42))
  VAR_12 |= 0x01;
 else
  return VAR_12;

 if (!(VAR_8 & FUNC_0(27)) && (((VAR_11 & 0x03FF0000) >> 16) != 0x132) &&
     (((VAR_8 & 0x03FF0000) >> 16) != 0x36))
  VAR_12 |= 0x02;
 else
  FUNC_1(VAR_6, VAR_0, VAR_1, "Path A Rx IQK fail!!\n");
 return VAR_12;
}
