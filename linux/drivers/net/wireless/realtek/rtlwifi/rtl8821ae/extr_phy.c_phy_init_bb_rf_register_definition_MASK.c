
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_phy {TYPE_1__* phyreg_def; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int rf_rbpi; int rf_rb; void* rfhssi_para2; int rf3wire_offset; void* rfintfe; void* rfintfo; void* rfintfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_0(VAR_12);
 struct rtl_phy *VAR_14 = &VAR_13->phy;

 VAR_14->phyreg_def[VAR_6].rfintfs = VAR_8;
 VAR_14->phyreg_def[VAR_7].rfintfs = VAR_8;

 VAR_14->phyreg_def[VAR_6].rfintfo = VAR_9;
 VAR_14->phyreg_def[VAR_7].rfintfo = VAR_10;

 VAR_14->phyreg_def[VAR_6].rfintfe = VAR_9;
 VAR_14->phyreg_def[VAR_7].rfintfe = VAR_10;

 VAR_14->phyreg_def[VAR_6].rf3wire_offset = VAR_0;
 VAR_14->phyreg_def[VAR_7].rf3wire_offset = VAR_3;

 VAR_14->phyreg_def[VAR_6].rfhssi_para2 = VAR_11;
 VAR_14->phyreg_def[VAR_7].rfhssi_para2 = VAR_11;

 VAR_14->phyreg_def[VAR_6].rf_rb = VAR_2;
 VAR_14->phyreg_def[VAR_7].rf_rb = VAR_5;

 VAR_14->phyreg_def[VAR_6].rf_rbpi = VAR_1;
 VAR_14->phyreg_def[VAR_7].rf_rbpi = VAR_4;
}
