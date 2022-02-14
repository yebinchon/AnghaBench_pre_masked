
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rf_lock; } ;
struct rtl_phy {scalar_t__ rf_mode; } ;
struct rtl_priv {TYPE_1__ locks; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int,int) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct ieee80211_hw *VAR_4, enum radio_path VAR_5,
 u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_4(VAR_4);
 struct rtl_phy *VAR_10 = &(VAR_9->phy);
 u32 VAR_11, VAR_12;
 unsigned long VAR_13;

 FUNC_0(VAR_9, VAR_0, VAR_1,
   "regaddr(%#x), bitmask(%#x), data(%#x), rfpath(%#x)\n",
   VAR_6, VAR_7, VAR_8, VAR_5);
 if (VAR_7 == 0)
  return;
 FUNC_5(&VAR_9->locks.rf_lock, VAR_13);
 if (VAR_10->rf_mode != VAR_3) {
  if (VAR_7 != VAR_2) {
   VAR_11 = FUNC_2(VAR_4,
    VAR_5, VAR_6);
   VAR_12 = FUNC_1(VAR_7);
   VAR_8 = ((VAR_11 & (~VAR_7)) |
    (VAR_8 << VAR_12));
  }
  FUNC_3(VAR_4, VAR_5, VAR_6, VAR_8);
 }
 FUNC_6(&VAR_9->locks.rf_lock, VAR_13);
 FUNC_0(VAR_9, VAR_0, VAR_1,
   "regaddr(%#x), bitmask(%#x), data(%#x), rfpath(%#x)\n",
   VAR_6, VAR_7, VAR_8, VAR_5);
}
