
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_efuse {int* antenna_txpwdiff; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_efuse* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2,
     u8 VAR_3, u32 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_2);
 struct rtl_phy *VAR_6 = &(VAR_5->phy);
 struct rtl_efuse *VAR_7 = FUNC_0(FUNC_1(VAR_2));
 u16 VAR_8[6] = {0xe00, 0xe04, 0xe10, 0xe14, 0xe18, 0xe1c};
 u8 VAR_9, VAR_10[4];
 u8 VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 u32 VAR_14 = VAR_4;




 if (VAR_6->rf_type == VAR_1) {
  VAR_13 = VAR_7->antenna_txpwdiff[0];


  if (VAR_13 >= 8) {

   VAR_11 = 0x10 - VAR_13;

  } else {
   VAR_12 = VAR_0 - VAR_13;
  }
 }

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  VAR_10[VAR_9] = (u8)((VAR_14 & (0x7f << (VAR_9 * 8))) >> (VAR_9 * 8));
  if (VAR_10[VAR_9] > VAR_0)
   VAR_10[VAR_9] = VAR_0;




  if (VAR_6->rf_type == VAR_1) {

   if (VAR_13 >= 8) {

    if (VAR_10[VAR_9] < VAR_11)
     VAR_10[VAR_9] = VAR_11;

   } else if (VAR_13 >= 1) {

    if (VAR_10[VAR_9] > VAR_12)
     VAR_10[VAR_9] = VAR_12;
   }
  }

 }

 VAR_14 = (VAR_10[3] << 24) | (VAR_10[2] << 16) | (VAR_10[1] << 8) |
    VAR_10[0];

 FUNC_2(VAR_2, VAR_8[VAR_3], 0x7f7f7f7f, VAR_14);
}
