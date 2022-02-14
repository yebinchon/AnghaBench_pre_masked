
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hw; } ;
struct rtl_priv {TYPE_2__ mac80211; } ;
struct TYPE_3__ {int bt_lps_on; scalar_t__ bt_ctrl_lps; } ;
struct btc_coexist {TYPE_1__ bt_info; struct rtl_priv* adapter; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct btc_coexist *VAR_0)
{
 struct rtl_priv *VAR_1 = VAR_0->adapter;

 if (VAR_0->bt_info.bt_ctrl_lps) {
  VAR_0->bt_info.bt_lps_on = 0;
  FUNC_0(VAR_1->mac80211.hw);
 }
}
