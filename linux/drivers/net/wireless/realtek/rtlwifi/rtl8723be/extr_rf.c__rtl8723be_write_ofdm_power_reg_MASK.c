
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_16,
      u8 VAR_17, u32 *VAR_18)
{
 struct rtl_priv *VAR_19 = FUNC_1(VAR_16);
 u16 VAR_20[6] = {
  VAR_8, VAR_9,
  VAR_4, VAR_5,
  VAR_6, VAR_7
 };
 u16 VAR_21[6] = {
  VAR_14, VAR_15,
  VAR_10, VAR_11,
  VAR_12, VAR_13
 };
 u8 VAR_22, VAR_23, VAR_24[4];
 u32 VAR_25;
 u16 VAR_26;

 for (VAR_23 = 0; VAR_23 < 2; VAR_23++) {
  VAR_25 = VAR_18[VAR_23];
  for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
   VAR_24[VAR_22] = (u8)((VAR_25 & (0x7f <<
       (VAR_22 * 8))) >> (VAR_22 * 8));

   if (VAR_24[VAR_22] > VAR_3)
    VAR_24[VAR_22] = VAR_3;
  }
  VAR_25 = (VAR_24[3] << 24) | (VAR_24[2] << 16) |
      (VAR_24[1] << 8) | VAR_24[0];

  if (VAR_23 == 0)
   VAR_26 = VAR_20[VAR_17];
  else
   VAR_26 = VAR_21[VAR_17];
  FUNC_2(VAR_16, VAR_26, VAR_1, VAR_25);

  FUNC_0(VAR_19, VAR_0, VAR_2,
   "Set 0x%x = %08x\n", VAR_26, VAR_25);
 }
}
