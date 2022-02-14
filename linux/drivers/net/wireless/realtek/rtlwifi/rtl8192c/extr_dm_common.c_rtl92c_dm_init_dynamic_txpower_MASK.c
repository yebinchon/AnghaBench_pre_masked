
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dynamic_txpower_enable; void* dynamic_txhighpower_lvl; void* last_dtp_lvl; } ;
struct TYPE_3__ {scalar_t__ interface; int board_type; } ;
struct rtl_priv {TYPE_2__ dm; TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->rtlhal.interface == VAR_0 &&
     VAR_3->rtlhal.board_type & 0x1) {
  FUNC_0(VAR_2);
  VAR_3->dm.dynamic_txpower_enable = 1;
 } else {
  VAR_3->dm.dynamic_txpower_enable = 0;
 }
 VAR_3->dm.last_dtp_lvl = VAR_1;
 VAR_3->dm.dynamic_txhighpower_lvl = VAR_1;
}
