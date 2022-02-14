
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int btdm_ant_num; } ;
struct TYPE_3__ {int cnt_media_status_notify; } ;
struct btc_coexist {TYPE_2__ board_info; int adapter; scalar_t__ manual_control; TYPE_1__ statistics; } ;
typedef enum rt_media_status { ____Placeholder_rt_media_status } rt_media_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct btc_coexist*,int ) ;
 int FUNC_4 (struct btc_coexist*,int ) ;
 int FUNC_5 (struct btc_coexist*,int ) ;
 int FUNC_6 (struct btc_coexist*,int ) ;
 int FUNC_7 (struct btc_coexist*,int ) ;
 int FUNC_8 (struct btc_coexist*) ;
 int FUNC_9 (struct btc_coexist*) ;
 int FUNC_10 (struct btc_coexist*) ;

void FUNC_11(struct btc_coexist *VAR_3,
     enum rt_media_status VAR_4)
{
 u8 VAR_5;

 if (!FUNC_8(VAR_3))
  return;
 VAR_3->statistics.cnt_media_status_notify++;
 if (VAR_3->manual_control)
  return;

 if (VAR_2 == VAR_4)
  VAR_5 = VAR_0;
 else
  VAR_5 = VAR_1;

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
