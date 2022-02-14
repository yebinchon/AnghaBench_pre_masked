
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_mac {scalar_t__ link_state; int basic_rates; } ;
struct dig_t {int rssi_val_min; } ;
struct rtl_priv {TYPE_2__* cfg; struct rtl_mac mac80211; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_0(VAR_7);
 struct dig_t *VAR_9 = &VAR_8->dm_digtable;
 struct rtl_mac *VAR_10 = &VAR_8->mac80211;
 static u8 VAR_11;
 u8 VAR_12 = 0;
 u16 VAR_13 = VAR_3 | VAR_4 | VAR_5 | VAR_2 | VAR_6;

 if (VAR_10->link_state < VAR_1)
  VAR_12 = 0;
 else if (VAR_9->rssi_val_min < 25)
  VAR_12 = 1;
 else if (VAR_9->rssi_val_min > 30)
  VAR_12 = 3;
 else
  VAR_12 = 2;

 if (VAR_12 != VAR_11) {
  if (VAR_12 == 1) {
   VAR_13 &= (!(VAR_13 ^ VAR_10->basic_rates));
   VAR_8->cfg->ops->set_hw_reg(VAR_7,
    VAR_0, (u8 *)&VAR_13);
  } else if (VAR_12 == 3 && (VAR_11 == 1 || VAR_11 == 2)) {
   VAR_8->cfg->ops->set_hw_reg(VAR_7,
    VAR_0, (u8 *)&VAR_10->basic_rates);
  }
 }
 VAR_11 = VAR_12;
}
