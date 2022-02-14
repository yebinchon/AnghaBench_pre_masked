
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iqk_lock; } ;
struct rtl_phy {int lck_inprogress; } ;
struct rtl_priv {TYPE_1__ locks; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ieee80211_hw *VAR_0, bool VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_1(VAR_0);
 struct rtl_phy *VAR_3 = &VAR_2->phy;

 if (!VAR_3->lck_inprogress) {
  FUNC_2(&VAR_2->locks.iqk_lock);
  VAR_3->lck_inprogress = 1;
  FUNC_3(&VAR_2->locks.iqk_lock);

  FUNC_0(VAR_0);

  FUNC_2(&VAR_2->locks.iqk_lock);
  VAR_3->lck_inprogress = 0;
  FUNC_3(&VAR_2->locks.iqk_lock);
 }
}
