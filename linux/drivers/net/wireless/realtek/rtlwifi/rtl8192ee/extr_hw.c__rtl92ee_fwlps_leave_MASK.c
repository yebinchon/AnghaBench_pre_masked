
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {scalar_t__ low_power_enable; } ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_hal {int allow_sw_to_change_hwclc; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_hw*,int,int) ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_3 (struct rtl_priv*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_7 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_8 (struct ieee80211_hw*,int ,int*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_2(VAR_6);
 struct rtl_ps_ctl *VAR_8 = FUNC_3(FUNC_2(VAR_6));
 struct rtl_hal *VAR_9 = FUNC_1(FUNC_2(VAR_6));
 bool VAR_10 = 0;
 u8 VAR_11 = 0, VAR_12 = VAR_1;

 if (VAR_8->low_power_enable) {
  VAR_11 = (VAR_2 | VAR_0);
  FUNC_0(VAR_6, VAR_11, 0);
  VAR_9->allow_sw_to_change_hwclc = 0;
  VAR_7->cfg->ops->set_hw_reg(VAR_6, VAR_4,
           (u8 *)(&VAR_12));
  VAR_7->cfg->ops->set_hw_reg(VAR_6, VAR_3,
           (u8 *)(&VAR_10));
 } else {
  VAR_11 = VAR_2;
  VAR_7->cfg->ops->set_hw_reg(VAR_6, VAR_5,
           (u8 *)(&VAR_11));
  VAR_7->cfg->ops->set_hw_reg(VAR_6, VAR_4,
           (u8 *)(&VAR_12));
  VAR_7->cfg->ops->set_hw_reg(VAR_6, VAR_3,
           (u8 *)(&VAR_10));
 }
}
