
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dm_initialgain_enable; } ;
struct dig_t {int dig_enable_flag; } ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {TYPE_1__ dm; struct dig_t dm_digtable; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_1(VAR_1);
 struct rtl_phy *VAR_3 = &(VAR_2->phy);
 struct dig_t *VAR_4 = &VAR_2->dm_digtable;


 if (VAR_3->rf_type == VAR_0)
  return;

 if (!VAR_2->dm.dm_initialgain_enable)
  return;

 if (VAR_4->dig_enable_flag == 0)
  return;

 FUNC_0(VAR_1);
}
