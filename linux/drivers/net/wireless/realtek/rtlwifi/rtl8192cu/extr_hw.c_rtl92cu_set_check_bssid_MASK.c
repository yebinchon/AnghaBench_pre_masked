
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
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;int (* get_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_7 (struct ieee80211_hw*,int ,int*) ;

void FUNC_8(struct ieee80211_hw *VAR_5, bool VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_4(VAR_5);
 struct rtl_hal *VAR_8 = FUNC_3(VAR_7);
 u32 VAR_9;

 if (VAR_7->psc.rfpwr_state != VAR_0)
  return;

 VAR_7->cfg->ops->get_hw_reg(VAR_5, VAR_1, (u8 *)(&VAR_9));

 if (VAR_6) {
  u8 VAR_10;

  if (FUNC_1(VAR_8->version)) {
   VAR_9 |= (VAR_4 | VAR_3);
   VAR_10 = FUNC_0(4);
  } else {
   VAR_9 |= VAR_2;
   VAR_10 = FUNC_0(4) | FUNC_0(5);
  }
  VAR_7->cfg->ops->set_hw_reg(VAR_5, VAR_1,
           (u8 *) (&VAR_9));
  FUNC_2(VAR_5, 0, VAR_10);
 } else {
  u8 VAR_11;

  if (FUNC_1(VAR_8->version)) {
   VAR_9 &= ~(VAR_4 | VAR_3);
   VAR_11 = FUNC_0(4);
  } else {
   VAR_9 &= ~VAR_2;
   VAR_11 = FUNC_0(4) | FUNC_0(5);
  }
  VAR_9 &= (~(VAR_4 | VAR_3));
  VAR_7->cfg->ops->set_hw_reg(VAR_5,
           VAR_1, (u8 *) (&VAR_9));
  FUNC_2(VAR_5, VAR_11, 0);
 }
}
