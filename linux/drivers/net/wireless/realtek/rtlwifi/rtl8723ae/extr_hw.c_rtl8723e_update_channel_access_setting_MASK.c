
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_mac {int ht_enable; int slot_time; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int *) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int *) ;

void FUNC_4(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);
 struct rtl_mac *VAR_4 = FUNC_0(FUNC_1(VAR_2));
 u16 VAR_5;

 VAR_3->cfg->ops->set_hw_reg(VAR_2, VAR_1, &VAR_4->slot_time);
 if (!VAR_4->ht_enable)
  VAR_5 = 0x0a0a;
 else
  VAR_5 = 0x1010;
 VAR_3->cfg->ops->set_hw_reg(VAR_2, VAR_0, (u8 *)&VAR_5);
}
