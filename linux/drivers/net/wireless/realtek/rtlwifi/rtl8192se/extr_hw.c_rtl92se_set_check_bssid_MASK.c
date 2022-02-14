
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ rfpwr_state; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_1__ psc; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;int (* get_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int *) ;

void FUNC_4(struct ieee80211_hw *VAR_3, bool VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 if (VAR_5->psc.rfpwr_state != VAR_0)
  return;

 VAR_5->cfg->ops->get_hw_reg(VAR_3, VAR_1, (u8 *)(&VAR_6));

 if (VAR_4) {
  VAR_6 |= (VAR_2);
  VAR_5->cfg->ops->set_hw_reg(VAR_3, VAR_1, (u8 *)(&VAR_6));
 } else if (!VAR_4) {
  VAR_6 &= (~VAR_2);
  VAR_5->cfg->ops->set_hw_reg(VAR_3, VAR_1, (u8 *)(&VAR_6));
 }

}
