
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int,int,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct ieee80211_hw *VAR_9,
       u8 VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_6(VAR_9);
 struct rtl_hal *VAR_12 = FUNC_5(VAR_11);
 int VAR_13;
 u32 *VAR_14;
 u16 VAR_15;
 u32 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 if (VAR_12->hw_type == VAR_3) {
  VAR_15 = VAR_6;
  VAR_14 = VAR_5;
 } else {
  VAR_15 = VAR_8;
  VAR_14 = VAR_7;
 }

 if (VAR_10 != VAR_0) {
  FUNC_0(VAR_11, VAR_1, VAR_2,
    "configtype != BaseBand_Config_PHY_REG\n");
  return 1;
 }
 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13 += 6) {
  VAR_16 = VAR_14[VAR_13];
  VAR_17 = VAR_14[VAR_13+1];
  VAR_18 = VAR_14[VAR_13+2];
  VAR_19 = VAR_14[VAR_13+3];
  VAR_20 = VAR_14[VAR_13+4];
  VAR_21 = VAR_14[VAR_13+5];

  if (VAR_16 < 0xCDCDCDCD) {
   if (VAR_12->hw_type == VAR_3 &&
    (VAR_19 == 0xfe || VAR_19 == 0xffe)) {
    FUNC_4(50);
    continue;
   }

   if (VAR_12->hw_type == VAR_4) {
    if (VAR_19 == 0xfe)
     FUNC_4(50);
    else if (VAR_19 == 0xfd)
     FUNC_3(5);
    else if (VAR_19 == 0xfc)
     FUNC_3(1);
    else if (VAR_19 == 0xfb)
     FUNC_7(50);
    else if (VAR_19 == 0xfa)
     FUNC_7(5);
    else if (VAR_19 == 0xf9)
     FUNC_7(1);
   }
   FUNC_2(VAR_9, VAR_16, VAR_17, VAR_18,
         VAR_19, VAR_20, VAR_21);
   continue;
  } else {

   if (!FUNC_1(VAR_9, VAR_16)) {
    VAR_13 += 2;
    VAR_16 = VAR_14[VAR_13];
    VAR_17 = VAR_14[VAR_13+1];
    VAR_18 = VAR_14[VAR_13+2];
    while (VAR_17 != 0xDEAD) {
     VAR_13 += 3;
     VAR_16 = VAR_14[VAR_13];
     VAR_17 = VAR_14[VAR_13+1];
     VAR_18 = VAR_14[VAR_13+2];
    }
   }
  }
 }

 return 1;
}
