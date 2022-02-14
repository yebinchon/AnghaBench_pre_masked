
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dm_type; } ;
struct TYPE_4__ {int iqk_lock; } ;
struct rtl_phy {int lck_inprogress; } ;
struct rtl_priv {TYPE_1__ dm; TYPE_2__ locks; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_7(VAR_2);
 struct rtl_phy *VAR_4 = &VAR_3->phy;
 u32 VAR_5 = FUNC_6(VAR_2, VAR_1, 0x7f);

 FUNC_8(&VAR_3->locks.iqk_lock);
 VAR_4->lck_inprogress = 0;
 FUNC_9(&VAR_3->locks.iqk_lock);

 VAR_3->dm.dm_type = VAR_0;
 FUNC_0(VAR_2);
 FUNC_5(VAR_2, VAR_5);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
 FUNC_1(VAR_2);
}
