
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,scalar_t__*) ;} ;


 int VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4 = 0;

 VAR_3->cfg->ops->set_hw_reg(VAR_1, VAR_0, (u8 *)(&VAR_4));
}
