
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* phy_lc_calibrate ) (struct ieee80211_hw*,int) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;

void FUNC_5(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_2(VAR_0);
 struct rtl_hal *VAR_2 = FUNC_1(FUNC_2(VAR_0));

 if (FUNC_0(VAR_2->version))
  VAR_1->cfg->ops->phy_lc_calibrate(VAR_0, 1);
 else
  VAR_1->cfg->ops->phy_lc_calibrate(VAR_0, 0);
}
