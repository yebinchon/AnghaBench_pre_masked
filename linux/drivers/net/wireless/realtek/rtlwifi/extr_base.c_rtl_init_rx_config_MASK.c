
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_mac {int rx_conf; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int *) ;

void FUNC_3(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_1(VAR_1);
 struct rtl_mac *VAR_3 = FUNC_0(FUNC_1(VAR_1));

 VAR_2->cfg->ops->get_hw_reg(VAR_1, VAR_0, (u8 *) (&VAR_3->rx_conf));
}
