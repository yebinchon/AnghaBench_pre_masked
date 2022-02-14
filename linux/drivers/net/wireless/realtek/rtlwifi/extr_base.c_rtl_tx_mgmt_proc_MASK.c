
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_8__ {int need_iqk; } ;
struct TYPE_5__ {scalar_t__ supp_phymode_switch; } ;
struct rtl_priv {TYPE_4__ phy; TYPE_3__* cfg; TYPE_1__ dm; } ;
struct rtl_mac {scalar_t__ link_state; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le16 ;
struct TYPE_7__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* chk_switch_dmdp ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;

bool FUNC_7(struct ieee80211_hw *VAR_4, struct sk_buff *VAR_5)
{
 struct rtl_mac *VAR_6 = FUNC_4(FUNC_5(VAR_4));
 struct rtl_priv *VAR_7 = FUNC_5(VAR_4);
 __le16 VAR_8 = FUNC_3(VAR_5);

 if (VAR_7->dm.supp_phymode_switch &&
     VAR_6->link_state < VAR_2 &&
     (FUNC_1(VAR_8) || FUNC_2(VAR_8))) {
  if (VAR_7->cfg->ops->chk_switch_dmdp)
   VAR_7->cfg->ops->chk_switch_dmdp(VAR_4);
 }
 if (FUNC_1(VAR_8)) {
  FUNC_0(VAR_7, VAR_0, VAR_1, "MAC80211_LINKING\n");

  VAR_6->link_state = VAR_3;

  VAR_7->phy.need_iqk = 1;

 }

 return 1;
}
