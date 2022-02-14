
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int interface; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct TYPE_10__ {int tfbga_package; scalar_t__ ant_div_cfg; int rfe_type; int btdm_ant_pos; } ;
struct TYPE_9__ {int bt_ctrl_agg_buf_size; int agg_buf_size; int increase_scan_dev_num; int miracast_plus_bt; } ;
struct TYPE_8__ {int profile_notified; } ;
struct TYPE_7__ {int cnt_bind; } ;
struct btc_coexist {int binded; TYPE_5__ board_info; TYPE_4__ bt_info; TYPE_3__ stack_info; void* adapter; TYPE_2__ statistics; int chip_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct rtl_priv*,int ,int) ;
 int FUNC_2 (struct btc_coexist*,int) ;
 int FUNC_3 (struct btc_coexist*,int) ;
 struct btc_coexist* FUNC_4 (struct rtl_priv*) ;
 int FUNC_5 (struct rtl_priv*) ;
 int FUNC_6 (struct rtl_priv*) ;
 int FUNC_7 (struct rtl_priv*) ;
 int FUNC_8 (struct rtl_priv*) ;
 int FUNC_9 (struct rtl_priv*) ;

bool FUNC_10(void *VAR_7)
{
 struct rtl_priv *VAR_8 = VAR_7;
 struct btc_coexist *VAR_9 = FUNC_4(VAR_8);
 u8 VAR_10 = 2, VAR_11, VAR_12 = 0;

 if (!VAR_9)
  return 0;

 if (VAR_9->binded)
  return 0;

 switch (VAR_8->rtlhal.interface) {
 case 129:
  VAR_9->chip_interface = VAR_1;
  break;
 case 128:
  VAR_9->chip_interface = VAR_3;
  break;
 default:
  VAR_9->chip_interface = VAR_2;
  break;
 }

 VAR_9->binded = 1;
 VAR_9->statistics.cnt_bind++;

 VAR_9->adapter = VAR_7;

 VAR_9->stack_info.profile_notified = 0;

 VAR_9->bt_info.bt_ctrl_agg_buf_size = 0;
 VAR_9->bt_info.agg_buf_size = 5;

 VAR_9->bt_info.increase_scan_dev_num = 0;
 VAR_9->bt_info.miracast_plus_bt = 0;

 VAR_11 = FUNC_6(VAR_8);
 FUNC_2(VAR_9, VAR_11);
 VAR_10 = FUNC_5(VAR_8);
 FUNC_1(VAR_8, VAR_4, VAR_10);


 VAR_9->board_info.btdm_ant_pos = VAR_0;

 VAR_12 = FUNC_9(VAR_8);
 FUNC_3(VAR_9, VAR_12);

 if (FUNC_7(VAR_8) == 0)
  VAR_9->board_info.tfbga_package = 0;
 else if (FUNC_7(VAR_8) == 1)
  VAR_9->board_info.tfbga_package = 0;
 else
  VAR_9->board_info.tfbga_package = 1;

 if (VAR_9->board_info.tfbga_package)
  FUNC_0(VAR_8, VAR_5, VAR_6,
    "[BTCoex], Package Type = TFBGA\n");
 else
  FUNC_0(VAR_8, VAR_5, VAR_6,
    "[BTCoex], Package Type = Non-TFBGA\n");

 VAR_9->board_info.rfe_type = FUNC_8(VAR_8);
 VAR_9->board_info.ant_div_cfg = 0;

 return 1;
}
