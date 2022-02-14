
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_phy {TYPE_1__* hwparam_tables; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int length; int * pdata; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_6 (int) ;

bool FUNC_7(struct ieee80211_hw *VAR_9,
         u8 VAR_10)
{
 int VAR_11;
 u32 *VAR_12;
 u32 *VAR_13;
 u16 VAR_14, VAR_15;
 struct rtl_priv *VAR_16 = FUNC_4(VAR_9);
 struct rtl_hal *VAR_17 = FUNC_3(FUNC_4(VAR_9));
 struct rtl_phy *VAR_18 = &(VAR_16->phy);

 if (FUNC_0(VAR_17->version)) {
  VAR_15 = VAR_18->hwparam_tables[VAR_1].length;
  VAR_13 = VAR_18->hwparam_tables[VAR_1].pdata;
  VAR_14 = VAR_18->hwparam_tables[VAR_8].length;
  VAR_12 = VAR_18->hwparam_tables[VAR_8].pdata;
 } else {
  VAR_15 = VAR_18->hwparam_tables[VAR_0].length;
  VAR_13 = VAR_18->hwparam_tables[VAR_0].pdata;
  VAR_14 = VAR_18->hwparam_tables[VAR_7].length;
  VAR_12 = VAR_18->hwparam_tables[VAR_7].pdata;
 }
 if (VAR_10 == VAR_3) {
  for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11 = VAR_11 + 2) {
   FUNC_2(VAR_12[VAR_11]);
   FUNC_5(VAR_9, VAR_12[VAR_11], VAR_6,
          VAR_12[VAR_11 + 1]);
   FUNC_6(1);
   FUNC_1(VAR_16, VAR_4, VAR_5,
     "The phy_regarray_table[0] is %x Rtl819XPHY_REGARRAY[1] is %x\n",
     VAR_12[VAR_11],
     VAR_12[VAR_11 + 1]);
  }
 } else if (VAR_10 == VAR_2) {
  for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11 = VAR_11 + 2) {
   FUNC_5(VAR_9, VAR_13[VAR_11], VAR_6,
          VAR_13[VAR_11 + 1]);
   FUNC_6(1);
   FUNC_1(VAR_16, VAR_4, VAR_5,
     "The agctab_array_table[0] is %x Rtl819XPHY_REGARRAY[1] is %x\n",
     VAR_13[VAR_11],
     VAR_13[VAR_11 + 1]);
  }
 }
 return 1;
}
