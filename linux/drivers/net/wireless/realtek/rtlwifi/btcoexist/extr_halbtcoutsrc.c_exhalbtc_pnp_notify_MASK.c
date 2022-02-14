
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int btdm_ant_num; } ;
struct btc_coexist {int adapter; TYPE_1__ board_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct btc_coexist*,int ) ;
 int FUNC_4 (struct btc_coexist*,int ) ;
 int FUNC_5 (struct btc_coexist*,int ) ;
 int FUNC_6 (struct btc_coexist*,int ) ;
 int FUNC_7 (struct btc_coexist*) ;

void FUNC_8(struct btc_coexist *VAR_0, u8 VAR_1)
{
 if (!FUNC_7(VAR_0))
  return;






 if (FUNC_1(VAR_0->adapter)) {
  if (VAR_0->board_info.btdm_ant_num == 1)
   FUNC_3(VAR_0, VAR_1);
  else if (VAR_0->board_info.btdm_ant_num == 2)
   FUNC_4(VAR_0, VAR_1);
 } else if (FUNC_2(VAR_0->adapter)) {
  if (VAR_0->board_info.btdm_ant_num == 1)
   FUNC_5(VAR_0, VAR_1);
  else if (VAR_0->board_info.btdm_ant_num == 2)
   FUNC_6(VAR_0, VAR_1);
 } else if (FUNC_0(VAR_0->adapter)) {
 }
}
