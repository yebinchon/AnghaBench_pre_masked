
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_6 (int) ;

bool FUNC_7(struct ieee80211_hw *VAR_13,
         u8 VAR_14)
{
 int VAR_15;
 u32 *VAR_16;
 u32 *VAR_17;
 u16 VAR_18, VAR_19;
 struct rtl_priv *VAR_20 = FUNC_4(VAR_13);
 struct rtl_hal *VAR_21 = FUNC_3(FUNC_4(VAR_13));

 if (FUNC_0(VAR_21->version)) {
  VAR_19 = VAR_1;
  VAR_17 = VAR_10;
  VAR_18 = VAR_8;
  VAR_16 = VAR_12;
 } else {
  VAR_19 = VAR_0;
  VAR_17 = VAR_9;
  VAR_18 = VAR_7;
  VAR_16 = VAR_11;
 }
 if (VAR_14 == VAR_3) {
  for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15 = VAR_15 + 2) {
   FUNC_2(VAR_16[VAR_15]);
   FUNC_5(VAR_13, VAR_16[VAR_15], VAR_6,
          VAR_16[VAR_15 + 1]);
   FUNC_6(1);
   FUNC_1(VAR_20, VAR_4, VAR_5,
     "The phy_regarray_table[0] is %x Rtl819XPHY_REGArray[1] is %x\n",
     VAR_16[VAR_15],
     VAR_16[VAR_15 + 1]);
  }
 } else if (VAR_14 == VAR_2) {
  for (VAR_15 = 0; VAR_15 < VAR_19; VAR_15 = VAR_15 + 2) {
   FUNC_5(VAR_13, VAR_17[VAR_15], VAR_6,
          VAR_17[VAR_15 + 1]);
   FUNC_6(1);
   FUNC_1(VAR_20, VAR_4, VAR_5,
     "The agctab_array_table[0] is %x Rtl819XPHY_REGArray[1] is %x\n",
     VAR_17[VAR_15],
     VAR_17[VAR_15 + 1]);
  }
 }
 return 1;
}
