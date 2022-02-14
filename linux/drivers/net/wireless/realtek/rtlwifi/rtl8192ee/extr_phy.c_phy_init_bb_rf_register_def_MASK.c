
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_phy {TYPE_1__* phyreg_def; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int rf_rbpi; int rf_rb; int rfhssi_para2; int rf3wire_offset; void* rfintfe; void* rfintfo; void* rfintfs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_0(VAR_13);
 struct rtl_phy *VAR_15 = &VAR_14->phy;

 VAR_15->phyreg_def[VAR_0].rfintfs = VAR_2;
 VAR_15->phyreg_def[VAR_1].rfintfs = VAR_2;

 VAR_15->phyreg_def[VAR_0].rfintfo = VAR_6;
 VAR_15->phyreg_def[VAR_1].rfintfo = VAR_10;

 VAR_15->phyreg_def[VAR_0].rfintfe = VAR_6;
 VAR_15->phyreg_def[VAR_1].rfintfe = VAR_10;

 VAR_15->phyreg_def[VAR_0].rf3wire_offset =
       VAR_4;
 VAR_15->phyreg_def[VAR_1].rf3wire_offset =
       VAR_8;

 VAR_15->phyreg_def[VAR_0].rfhssi_para2 = VAR_3;
 VAR_15->phyreg_def[VAR_1].rfhssi_para2 = VAR_7;

 VAR_15->phyreg_def[VAR_0].rf_rb = VAR_5;
 VAR_15->phyreg_def[VAR_1].rf_rb = VAR_9;

 VAR_15->phyreg_def[VAR_0].rf_rbpi = VAR_11;
 VAR_15->phyreg_def[VAR_1].rf_rbpi = VAR_12;
}
