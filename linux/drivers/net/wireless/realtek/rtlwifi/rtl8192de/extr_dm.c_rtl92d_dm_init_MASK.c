
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx_gain_min; int rx_gain_max; } ;
struct TYPE_3__ {int dm_type; } ;
struct rtl_priv {TYPE_2__ dm_digtable; TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

void FUNC_6(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_5(VAR_3);

 VAR_4->dm.dm_type = VAR_2;
 FUNC_4(VAR_3, 0x20);
 VAR_4->dm_digtable.rx_gain_max = VAR_1;
 VAR_4->dm_digtable.rx_gain_min = VAR_0;
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
}
