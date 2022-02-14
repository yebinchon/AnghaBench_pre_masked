
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int btcoexist; int ant_num; void* single_ant_path; void* bt_type; } ;
struct TYPE_6__ {TYPE_2__ btc_info; } ;
struct rtl_priv {TYPE_3__ btcoexist; TYPE_1__* cfg; } ;
struct rtl_mod_params {int ant_sel; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {struct rtl_mod_params* mod_params; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int) ;
 void* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ) ;

void FUNC_3(struct ieee80211_hw *VAR_7,
           bool VAR_8, u8 *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_1(VAR_7);
 struct rtl_mod_params *VAR_11 = VAR_10->cfg->mod_params;
 u8 VAR_12;
 u32 VAR_13;

 if (!VAR_8) {
  VAR_13 = FUNC_2(VAR_10, VAR_6);
  if (VAR_13 & FUNC_0(18))
   VAR_10->btcoexist.btc_info.btcoexist = 1;
  else
   VAR_10->btcoexist.btc_info.btcoexist = 0;
  VAR_12 = VAR_9[VAR_5];
  VAR_10->btcoexist.btc_info.bt_type = VAR_4;
  VAR_10->btcoexist.btc_info.ant_num = (VAR_12 & 0x1);
  VAR_10->btcoexist.btc_info.single_ant_path =
    (VAR_12 & 0x40 ? VAR_0 : VAR_1);
 } else {
  VAR_10->btcoexist.btc_info.btcoexist = 0;
  VAR_10->btcoexist.btc_info.bt_type = VAR_4;
  VAR_10->btcoexist.btc_info.ant_num = VAR_3;
  VAR_10->btcoexist.btc_info.single_ant_path = VAR_1;
 }


 if (VAR_11->ant_sel) {
  VAR_10->btcoexist.btc_info.ant_num =
   (VAR_11->ant_sel == 1 ? VAR_2 : VAR_3);

  VAR_10->btcoexist.btc_info.single_ant_path =
   (VAR_11->ant_sel == 1 ? VAR_0 : VAR_1);
 }
}
