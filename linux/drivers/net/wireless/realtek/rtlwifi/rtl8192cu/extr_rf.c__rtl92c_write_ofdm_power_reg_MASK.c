
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_phy {int dummy; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
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
 int VAR_16 ;
 scalar_t__ FUNC_1 (struct rtl_phy*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_17,
      u8 VAR_18, u32 *VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_2(VAR_17);
 struct rtl_phy *VAR_21 = &(VAR_20->phy);
 u16 VAR_22[6] = {
  VAR_9, VAR_10,
  VAR_5, VAR_6,
  VAR_7, VAR_8
 };
 u16 VAR_23[6] = {
  VAR_15, VAR_16,
  VAR_11, VAR_12,
  VAR_13, VAR_14
 };
 u8 VAR_24, VAR_25, VAR_26[4];
 u32 VAR_27;
 u16 VAR_28;

 for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
  VAR_27 = VAR_19[VAR_25];
  for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
   VAR_26[VAR_24] = (u8)((VAR_27 & (0x7f << (VAR_24 * 8))) >>
       (VAR_24 * 8));
   if (VAR_26[VAR_24] > VAR_3)
    VAR_26[VAR_24] = VAR_3;
  }
  VAR_27 = (VAR_26[3] << 24) | (VAR_26[2] << 16) |
      (VAR_26[1] << 8) | VAR_26[0];
  if (VAR_25 == 0)
   VAR_28 = VAR_22[VAR_18];
  else
   VAR_28 = VAR_23[VAR_18];
  FUNC_3(VAR_17, VAR_28, VAR_1, VAR_27);
  FUNC_0(VAR_20, VAR_0, VAR_2,
   "Set 0x%x = %08x\n", VAR_28, VAR_27);
  if (((FUNC_1(VAR_21) == VAR_4) &&
       (VAR_28 == VAR_8 ||
        VAR_28 == VAR_14)) ||
      ((FUNC_1(VAR_21) != VAR_4) &&
       (VAR_28 == VAR_6 ||
        VAR_28 == VAR_12))) {
   VAR_27 = VAR_26[3];
   if (VAR_28 == VAR_8 ||
       VAR_28 == VAR_6)
    VAR_28 = 0xc90;
   if (VAR_28 == VAR_14 ||
       VAR_28 == VAR_12)
    VAR_28 = 0xc98;
   for (VAR_24 = 0; VAR_24 < 3; VAR_24++) {
    if (VAR_24 != 2)
     VAR_27 = (VAR_27 > 8) ?
         (VAR_27 - 8) : 0;
    else
     VAR_27 = (VAR_27 > 6) ?
         (VAR_27 - 6) : 0;
    FUNC_4(VAR_20, (u32)(VAR_28 + VAR_24),
           (u8)VAR_27);
   }
  }
 }
}
