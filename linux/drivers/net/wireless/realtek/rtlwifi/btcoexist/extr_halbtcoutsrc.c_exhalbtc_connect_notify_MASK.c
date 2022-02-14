
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int btdm_ant_num; } ;
struct TYPE_3__ {int cnt_connect_notify; } ;
struct btc_coexist {TYPE_2__ board_info; int adapter; int (* btc_get ) (struct btc_coexist*,int ,int*) ;scalar_t__ manual_control; TYPE_1__ statistics; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct btc_coexist*,scalar_t__) ;
 int FUNC_4 (struct btc_coexist*,scalar_t__) ;
 int FUNC_5 (struct btc_coexist*,scalar_t__) ;
 int FUNC_6 (struct btc_coexist*,scalar_t__) ;
 int FUNC_7 (struct btc_coexist*,scalar_t__) ;
 int FUNC_8 (struct btc_coexist*) ;
 int FUNC_9 (struct btc_coexist*) ;
 int FUNC_10 (struct btc_coexist*) ;
 int FUNC_11 (struct btc_coexist*,int ,int*) ;

void FUNC_12(struct btc_coexist *VAR_3, u8 VAR_4)
{
 u8 VAR_5;
 bool VAR_6;

 if (!FUNC_8(VAR_3))
  return;
 VAR_3->statistics.cnt_connect_notify++;
 if (VAR_3->manual_control)
  return;

 VAR_3->btc_get(VAR_3, VAR_2, &VAR_6);

 if (VAR_4)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 FUNC_9(VAR_3);

 if (FUNC_2(VAR_3->adapter)) {
  if (VAR_3->board_info.btdm_ant_num == 2)
   FUNC_7(VAR_3, VAR_5);
  else if (VAR_3->board_info.btdm_ant_num == 1)
   FUNC_6(VAR_3, VAR_5);
 } else if (FUNC_1(VAR_3->adapter)) {
  if (VAR_3->board_info.btdm_ant_num == 2)
   FUNC_5(VAR_3, VAR_5);
  else if (VAR_3->board_info.btdm_ant_num == 1)
   FUNC_4(VAR_3, VAR_5);
 } else if (FUNC_0(VAR_3->adapter)) {
  if (VAR_3->board_info.btdm_ant_num == 2)
   FUNC_3(VAR_3, VAR_5);
 }

 FUNC_10(VAR_3);
}
