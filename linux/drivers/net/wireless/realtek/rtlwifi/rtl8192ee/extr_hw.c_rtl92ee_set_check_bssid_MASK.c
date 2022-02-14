
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
struct rtl_pci {int receive_config; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_pci* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int *) ;

void FUNC_7(struct ieee80211_hw *VAR_4, bool VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_4(VAR_4);
 struct rtl_pci *VAR_7 = FUNC_2(FUNC_3(VAR_4));
 u32 VAR_8 = VAR_7->receive_config;

 if (VAR_6->psc.rfpwr_state != VAR_0)
  return;

 if (VAR_5) {
  VAR_8 |= (VAR_3 | VAR_2);
  VAR_6->cfg->ops->set_hw_reg(VAR_4, VAR_1,
           (u8 *)(&VAR_8));
  FUNC_1(VAR_4, 0, FUNC_0(4));
 } else {
  VAR_8 &= (~(VAR_3 | VAR_2));
  FUNC_1(VAR_4, FUNC_0(4), 0);
  VAR_6->cfg->ops->set_hw_reg(VAR_4, VAR_1,
           (u8 *)(&VAR_8));
 }
}
