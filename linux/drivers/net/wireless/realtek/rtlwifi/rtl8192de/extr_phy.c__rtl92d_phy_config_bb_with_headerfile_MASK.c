
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ interfaceindex; scalar_t__ current_bandtype; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int FUNC_1 (int ) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct ieee80211_hw *VAR_15,
 u8 VAR_16)
{
 int VAR_17;
 u32 *VAR_18;
 u32 *VAR_19 = ((void*)0);
 u32 *VAR_20;
 u16 VAR_21, VAR_22 = 0, VAR_23;
 struct rtl_priv *VAR_24 = FUNC_3(VAR_15);
 struct rtl_hal *VAR_25 = FUNC_2(FUNC_3(VAR_15));


 if (VAR_25->interfaceindex == 0) {
  VAR_22 = VAR_2;
  VAR_19 = VAR_13;
  FUNC_0(VAR_24, VAR_6, VAR_7,
    " ===> phy:MAC0, Rtl819XAGCTAB_Array\n");
 } else {
  if (VAR_25->current_bandtype == VAR_3) {
   VAR_22 = VAR_0;
   VAR_19 = VAR_11;
   FUNC_0(VAR_24, VAR_6, VAR_7,
     " ===> phy:MAC1, Rtl819XAGCTAB_2GArray\n");
  } else {
   VAR_23 = VAR_1;
   VAR_20 = VAR_12;
   FUNC_0(VAR_24, VAR_6, VAR_7,
     " ===> phy:MAC1, Rtl819XAGCTAB_5GArray\n");

  }
 }
 VAR_21 = VAR_10;
 VAR_18 = VAR_14;
 FUNC_0(VAR_24, VAR_6, VAR_7,
   " ===> phy:Rtl819XPHY_REG_Array_PG\n");
 if (VAR_16 == VAR_5) {
  for (VAR_17 = 0; VAR_17 < VAR_21; VAR_17 = VAR_17 + 2) {
   FUNC_1(VAR_18[VAR_17]);
   FUNC_4(VAR_15, VAR_18[VAR_17], VAR_9,
          VAR_18[VAR_17 + 1]);
   FUNC_5(1);
   FUNC_0(VAR_24, VAR_6, VAR_8,
     "The phy_regarray_table[0] is %x Rtl819XPHY_REGArray[1] is %x\n",
     VAR_18[VAR_17],
     VAR_18[VAR_17 + 1]);
  }
 } else if (VAR_16 == VAR_4) {
  if (VAR_25->interfaceindex == 0) {
   for (VAR_17 = 0; VAR_17 < VAR_22; VAR_17 = VAR_17 + 2) {
    FUNC_4(VAR_15, VAR_19[VAR_17],
     VAR_9,
     VAR_19[VAR_17 + 1]);


    FUNC_5(1);
    FUNC_0(VAR_24, VAR_6, VAR_8,
      "The Rtl819XAGCTAB_Array_Table[0] is %u Rtl819XPHY_REGArray[1] is %u\n",
      VAR_19[VAR_17],
      VAR_19[VAR_17 + 1]);
   }
   FUNC_0(VAR_24, VAR_6, VAR_7,
     "Normal Chip, MAC0, load Rtl819XAGCTAB_Array\n");
  } else {
   if (VAR_25->current_bandtype == VAR_3) {
    for (VAR_17 = 0; VAR_17 < VAR_22; VAR_17 = VAR_17 + 2) {
     FUNC_4(VAR_15, VAR_19[VAR_17],
      VAR_9,
      VAR_19[VAR_17 + 1]);


     FUNC_5(1);
     FUNC_0(VAR_24, VAR_6, VAR_8,
       "The Rtl819XAGCTAB_Array_Table[0] is %u Rtl819XPHY_REGArray[1] is %u\n",
       VAR_19[VAR_17],
       VAR_19[VAR_17 + 1]);
    }
    FUNC_0(VAR_24, VAR_6, VAR_7,
      "Load Rtl819XAGCTAB_2GArray\n");
   } else {
    for (VAR_17 = 0; VAR_17 < VAR_23; VAR_17 = VAR_17 + 2) {
     FUNC_4(VAR_15,
      VAR_20[VAR_17],
      VAR_9,
      VAR_20[VAR_17 + 1]);


     FUNC_5(1);
     FUNC_0(VAR_24, VAR_6, VAR_8,
       "The Rtl819XAGCTAB_5GArray_Table[0] is %u Rtl819XPHY_REGArray[1] is %u\n",
       VAR_20[VAR_17],
       VAR_20[VAR_17 + 1]);
    }
    FUNC_0(VAR_24, VAR_6, VAR_7,
      "Load Rtl819XAGCTAB_5GArray\n");
   }
  }
 }
 return 1;
}
