
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct TYPE_4__ {int btdm_ant_num; } ;
struct TYPE_3__ {int cnt_coex_dm_switch; } ;
struct btc_coexist {int stop_coex_dm; TYPE_2__ board_info; struct rtl_priv* adapter; TYPE_1__ statistics; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtl_priv*) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;
 int FUNC_5 (struct btc_coexist*) ;
 int FUNC_6 (struct btc_coexist*) ;
 int FUNC_7 (struct btc_coexist*) ;

void FUNC_8(struct btc_coexist *VAR_1)
{
 struct rtl_priv *VAR_2 = VAR_1->adapter;

 if (!FUNC_5(VAR_1))
  return;
 VAR_1->statistics.cnt_coex_dm_switch++;

 FUNC_6(VAR_1);

 if (FUNC_0(VAR_1->adapter)) {
  if (VAR_1->board_info.btdm_ant_num == 1) {
   VAR_1->stop_coex_dm = 1;
   FUNC_1(VAR_1);
   FUNC_4(VAR_2,
          VAR_0, 2);
   FUNC_3(VAR_1);
   FUNC_2(VAR_1);
   VAR_1->stop_coex_dm = 0;
  }
 }

 FUNC_7(VAR_1);
}
