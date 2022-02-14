
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_phy {TYPE_1__* hwparam_tables; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_efuse {int board_type; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {void* pdata; void* length; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_38)
{
 struct rtl_priv *VAR_39 = FUNC_2(VAR_38);
 struct rtl_phy *VAR_40 = &(VAR_39->phy);
 struct rtl_efuse *VAR_41 = FUNC_1(VAR_39);

 VAR_40->hwparam_tables[VAR_2].length = VAR_17;
 VAR_40->hwparam_tables[VAR_2].pdata = VAR_16;
 if (FUNC_0(VAR_41->board_type)) {
  VAR_40->hwparam_tables[VAR_5].length =
   VAR_27;
  VAR_40->hwparam_tables[VAR_5].pdata =
   VAR_26;
 } else {
  VAR_40->hwparam_tables[VAR_5].length =
   VAR_25;
  VAR_40->hwparam_tables[VAR_5].pdata =
   VAR_24;
 }

 VAR_40->hwparam_tables[VAR_4].length =
   VAR_23;
 VAR_40->hwparam_tables[VAR_4].pdata =
   VAR_22;
 VAR_40->hwparam_tables[VAR_7].length =
   VAR_32;
 VAR_40->hwparam_tables[VAR_7].pdata =
   VAR_31;
 VAR_40->hwparam_tables[VAR_9].length =
   VAR_34;
 VAR_40->hwparam_tables[VAR_9].pdata =
   VAR_37;
 VAR_40->hwparam_tables[VAR_1].length =
   VAR_15;
 VAR_40->hwparam_tables[VAR_1].pdata =
   VAR_14;

 if (FUNC_0(VAR_41->board_type)) {
  VAR_40->hwparam_tables[VAR_3].length =
   VAR_21;
  VAR_40->hwparam_tables[VAR_3].pdata =
   VAR_20;
  VAR_40->hwparam_tables[VAR_6].length =
   VAR_30;
  VAR_40->hwparam_tables[VAR_6].pdata =
   VAR_29;
  VAR_40->hwparam_tables[VAR_8].length =
   VAR_33;
  VAR_40->hwparam_tables[VAR_8].pdata =
   VAR_36;
  VAR_40->hwparam_tables[VAR_0].length =
   VAR_13;
  VAR_40->hwparam_tables[VAR_0].pdata =
   VAR_12;
 } else {
  VAR_40->hwparam_tables[VAR_3].length =
    VAR_19;
  VAR_40->hwparam_tables[VAR_3].pdata =
   VAR_18;
  VAR_40->hwparam_tables[VAR_6].length =
   VAR_28;
  VAR_40->hwparam_tables[VAR_6].pdata =
   VAR_35;
  VAR_40->hwparam_tables[VAR_8].length =
   VAR_33;
  VAR_40->hwparam_tables[VAR_8].pdata =
   VAR_36;
  VAR_40->hwparam_tables[VAR_0].length =
   VAR_11;
  VAR_40->hwparam_tables[VAR_0].pdata =
   VAR_10;
 }
}
