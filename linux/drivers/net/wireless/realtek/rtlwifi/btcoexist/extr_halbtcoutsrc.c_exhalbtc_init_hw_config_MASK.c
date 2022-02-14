
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int btdm_ant_num; } ;
struct TYPE_4__ {int cnt_init_hw_config; } ;
struct btc_coexist {TYPE_1__ board_info; int adapter; TYPE_2__ statistics; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*,int) ;
 int FUNC_6 (struct btc_coexist*) ;
 int FUNC_7 (struct btc_coexist*,int) ;
 int FUNC_8 (struct btc_coexist*) ;
 int FUNC_9 (struct btc_coexist*) ;

void FUNC_10(struct btc_coexist *VAR_0, bool VAR_1)
{
 if (!FUNC_9(VAR_0))
  return;

 VAR_0->statistics.cnt_init_hw_config++;

 if (FUNC_3(VAR_0->adapter)) {
  if (VAR_0->board_info.btdm_ant_num == 2)
   FUNC_8(VAR_0);
  else if (VAR_0->board_info.btdm_ant_num == 1)
   FUNC_7(VAR_0, VAR_1);
 } else if (FUNC_2(VAR_0->adapter)) {
  if (VAR_0->board_info.btdm_ant_num == 2)
   FUNC_6(VAR_0);
  else if (VAR_0->board_info.btdm_ant_num == 1)
   FUNC_5(VAR_0, VAR_1);
 } else if (FUNC_1(VAR_0->adapter)) {

 } else if (FUNC_0(VAR_0->adapter)) {
  if (VAR_0->board_info.btdm_ant_num == 2)
   FUNC_4(VAR_0);
 }
}
