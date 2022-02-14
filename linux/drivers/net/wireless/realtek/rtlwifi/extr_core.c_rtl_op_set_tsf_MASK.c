
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_mac {scalar_t__ opmode; int tsf; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2,
      struct ieee80211_vif *VAR_3, u64 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_2);
 struct rtl_mac *VAR_6 = FUNC_0(FUNC_1(VAR_2));
 u8 VAR_7 = (VAR_6->opmode == VAR_1) ? 1 : 0;

 VAR_6->tsf = VAR_4;
 VAR_5->cfg->ops->set_hw_reg(VAR_2, VAR_0, (u8 *)(&VAR_7));
}
