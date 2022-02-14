
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cfo_threshold; int atc_status; int crystal_cap; } ;
struct TYPE_3__ {int crystalcap; } ;
struct rtl_priv {TYPE_2__ dm; TYPE_1__ efuse; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_2);

 VAR_3->dm.crystal_cap = VAR_3->efuse.crystalcap;

 VAR_3->dm.atc_status = FUNC_1(VAR_2, VAR_1, FUNC_0(11));
 VAR_3->dm.cfo_threshold = VAR_0;
}
