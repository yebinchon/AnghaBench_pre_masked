
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int *) ;

__attribute__((used)) static u64 FUNC_2(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_0(VAR_1);
 u64 VAR_4;

 VAR_3->cfg->ops->get_hw_reg(VAR_1, VAR_0, (u8 *)(&VAR_4));
 return VAR_4;
}
