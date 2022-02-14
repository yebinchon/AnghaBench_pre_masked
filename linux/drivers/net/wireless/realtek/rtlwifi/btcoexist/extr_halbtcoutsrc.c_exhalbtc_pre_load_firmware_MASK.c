
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int btdm_ant_num; } ;
struct TYPE_3__ {int cnt_pre_load_firmware; } ;
struct btc_coexist {TYPE_2__ board_info; int adapter; TYPE_1__ statistics; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;

void FUNC_3(struct btc_coexist *VAR_0)
{
 if (!FUNC_2(VAR_0))
  return;

 VAR_0->statistics.cnt_pre_load_firmware++;

 if (FUNC_0(VAR_0->adapter)) {
  if (VAR_0->board_info.btdm_ant_num == 2)
   FUNC_1(VAR_0);
 }
}
