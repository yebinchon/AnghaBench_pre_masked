
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int btdm_ant_num; } ;
struct btc_coexist {TYPE_1__ board_info; int adapter; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct btc_coexist*,struct seq_file*) ;
 int FUNC_4 (struct btc_coexist*,struct seq_file*) ;
 int FUNC_5 (struct btc_coexist*,struct seq_file*) ;
 int FUNC_6 (struct btc_coexist*,struct seq_file*) ;
 int FUNC_7 (struct btc_coexist*,struct seq_file*) ;
 int FUNC_8 (struct btc_coexist*) ;
 int FUNC_9 (struct btc_coexist*) ;
 int FUNC_10 (struct btc_coexist*) ;

void FUNC_11(struct btc_coexist *VAR_0,
       struct seq_file *VAR_1)
{
 if (!FUNC_8(VAR_0))
  return;

 FUNC_9(VAR_0);

 if (FUNC_2(VAR_0->adapter)) {
  if (VAR_0->board_info.btdm_ant_num == 2)
   FUNC_7(VAR_0, VAR_1);
  else if (VAR_0->board_info.btdm_ant_num == 1)
   FUNC_6(VAR_0, VAR_1);
 } else if (FUNC_1(VAR_0->adapter)) {
  if (VAR_0->board_info.btdm_ant_num == 2)
   FUNC_5(VAR_0, VAR_1);
  else if (VAR_0->board_info.btdm_ant_num == 1)
   FUNC_4(VAR_0, VAR_1);
 } else if (FUNC_0(VAR_0->adapter)) {
  if (VAR_0->board_info.btdm_ant_num == 2)
   FUNC_3(VAR_0, VAR_1);
 }

 FUNC_10(VAR_0);
}
