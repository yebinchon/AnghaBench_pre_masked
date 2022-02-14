
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txpower_tracking; int txpower_trackinginit; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(
    struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);

 VAR_3->dm.txpower_tracking = 1;
 VAR_3->dm.txpower_trackinginit = 0;

 FUNC_0(VAR_3, VAR_0, VAR_1,
   "pMgntInfo->txpower_tracking = %d\n",
    VAR_3->dm.txpower_tracking);
}
