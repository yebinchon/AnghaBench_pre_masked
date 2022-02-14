
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct TYPE_6__ {int btdm_ant_pos; scalar_t__ btdm_ant_num; scalar_t__ pg_ant_num; } ;
struct btc_coexist {TYPE_3__ board_info; } ;
struct TYPE_5__ {TYPE_1__* mod_params; } ;
struct TYPE_4__ {int ant_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct btc_coexist* FUNC_0 (struct rtl_priv*) ;

void FUNC_1(struct rtl_priv *VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct btc_coexist *VAR_8 = FUNC_0(VAR_5);

 if (!VAR_8)
  return;

 if (VAR_4 == VAR_6) {
  VAR_8->board_info.pg_ant_num = VAR_7;
  VAR_8->board_info.btdm_ant_num = VAR_7;
 } else if (VAR_2 == VAR_6) {
  VAR_8->board_info.btdm_ant_num = VAR_7;
 } else if (VAR_6 == VAR_3) {
  VAR_8->board_info.btdm_ant_num = VAR_7;
  if (VAR_5->cfg->mod_params->ant_sel == 1)
   VAR_8->board_info.btdm_ant_pos =
    VAR_0;
  else
   VAR_8->board_info.btdm_ant_pos =
    VAR_1;
 }
}
