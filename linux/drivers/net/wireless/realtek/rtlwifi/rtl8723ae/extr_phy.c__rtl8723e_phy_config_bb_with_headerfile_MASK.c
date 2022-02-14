
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int FUNC_1 (int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct ieee80211_hw *VAR_9,
          u8 VAR_10)
{
 int VAR_11;
 u32 *VAR_12;
 u32 *VAR_13;
 u16 VAR_14, VAR_15;
 struct rtl_priv *VAR_16 = FUNC_2(VAR_9);

 VAR_15 = VAR_7;
 VAR_13 = VAR_5;
 VAR_14 = VAR_8;
 VAR_12 = VAR_6;
 if (VAR_10 == VAR_1) {
  for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11 = VAR_11 + 2) {
   if (VAR_12[VAR_11] == 0xfe)
    FUNC_1(50);
   else if (VAR_12[VAR_11] == 0xfd)
    FUNC_1(5);
   else if (VAR_12[VAR_11] == 0xfc)
    FUNC_1(1);
   else if (VAR_12[VAR_11] == 0xfb)
    FUNC_4(50);
   else if (VAR_12[VAR_11] == 0xfa)
    FUNC_4(5);
   else if (VAR_12[VAR_11] == 0xf9)
    FUNC_4(1);
   FUNC_3(VAR_9, VAR_12[VAR_11], VAR_4,
          VAR_12[VAR_11 + 1]);
   FUNC_4(1);
   FUNC_0(VAR_16, VAR_2, VAR_3,
     "The phy_regarray_table[0] is %x Rtl819XPHY_REGArray[1] is %x\n",
     VAR_12[VAR_11],
     VAR_12[VAR_11 + 1]);
  }
 } else if (VAR_10 == VAR_0) {
  for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11 = VAR_11 + 2) {
   FUNC_3(VAR_9, VAR_13[VAR_11], VAR_4,
          VAR_13[VAR_11 + 1]);
   FUNC_4(1);
   FUNC_0(VAR_16, VAR_2, VAR_3,
     "The agctab_array_table[0] is %x Rtl819XPHY_REGArray[1] is %x\n",
     VAR_13[VAR_11],
     VAR_13[VAR_11 + 1]);
  }
 }
 return 1;
}
