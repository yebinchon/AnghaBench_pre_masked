
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct btc_board_info {int single_ant_path; void* btdm_ant_pos; } ;
struct btc_coexist {int stop_coex_dm; int (* btc_read_2byte ) (struct btc_coexist*,int) ;scalar_t__ chip_interface; int (* btc_write_local_reg_1byte ) (struct btc_coexist*,int,int) ;int (* btc_set ) (struct btc_coexist*,int ,int*) ;int (* btc_write_4byte ) (struct btc_coexist*,int,int) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_write_2byte ) (struct btc_coexist*,int,int) ;struct btc_board_info board_info; struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int,int) ;
 int FUNC_4 (struct btc_coexist*,int,int) ;
 int FUNC_5 (struct btc_coexist*,int) ;
 int FUNC_6 (struct btc_coexist*,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int) ;
 int FUNC_11 (struct btc_coexist*,int,int) ;
 int FUNC_12 (struct btc_coexist*,int,int) ;

void FUNC_13(struct btc_coexist *VAR_10)
{
 struct rtl_priv *VAR_11 = VAR_10->adapter;
 struct btc_board_info *VAR_12 = &VAR_10->board_info;
 u8 VAR_13 = 0x0;
 u16 VAR_14 = 0x0;
 u32 VAR_15;

 FUNC_0(VAR_11, VAR_8, VAR_9,
   "xxxxxxxxxxxxxxxx Execute 8723b 1-Ant PowerOn Setting xxxxxxxxxxxxxxxx!!\n");

 VAR_10->stop_coex_dm = 1;

 VAR_10->btc_write_1byte(VAR_10, 0x67, 0x20);


 VAR_14 = VAR_10->btc_read_2byte(VAR_10, 0x2);
 VAR_10->btc_write_2byte(VAR_10, 0x2, VAR_14 | VAR_0 | VAR_1);


 VAR_10->btc_write_1byte(VAR_10, 0x765, 0x18);

 VAR_10->btc_write_1byte(VAR_10, 0x76e, 0x4);
 if (VAR_10->chip_interface == VAR_6) {

  VAR_10->btc_write_4byte(VAR_10, 0x948, 0x0);

  VAR_13 |= 0x1;
  VAR_10->btc_write_local_reg_1byte(VAR_10, 0xfe08, VAR_13);

  VAR_12->btdm_ant_pos = VAR_2;
 } else {

  if (VAR_12->single_ant_path == 0) {

   VAR_10->btc_write_4byte(VAR_10, 0x948, 0x280);
   VAR_12->btdm_ant_pos = VAR_3;
   VAR_15 = 1;
  } else if (VAR_12->single_ant_path == 1) {

   VAR_10->btc_write_4byte(VAR_10, 0x948, 0x0);
   VAR_13 |= 0x1;
   VAR_12->btdm_ant_pos = VAR_2;
   VAR_15 = 0;
  }

  VAR_10->btc_set(VAR_10, VAR_7,
       &VAR_15);

  if (VAR_10->chip_interface == VAR_4)
   VAR_10->btc_write_local_reg_1byte(VAR_10, 0x384,
            VAR_13);
  else if (VAR_10->chip_interface == VAR_5)
   VAR_10->btc_write_local_reg_1byte(VAR_10, 0x60,
            VAR_13);
 }
}
