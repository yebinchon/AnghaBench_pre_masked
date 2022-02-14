
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dm_initialgain_enable; int dm_flag; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->dm.dm_initialgain_enable == 0)
  return;
 if (!(VAR_2->dm.dm_flag & VAR_0))
  return;

 FUNC_0(VAR_1);
}
