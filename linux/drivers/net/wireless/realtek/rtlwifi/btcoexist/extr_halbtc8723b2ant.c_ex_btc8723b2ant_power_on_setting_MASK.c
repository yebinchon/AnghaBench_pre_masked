
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct btc_board_info {int single_ant_path; void* btdm_ant_pos; } ;
struct btc_coexist {int (* btc_read_2byte ) (struct btc_coexist*,int) ;scalar_t__ chip_interface; int (* btc_set ) (struct btc_coexist*,int ,int *) ;int (* btc_write_4byte ) (struct btc_coexist*,int,int) ;int (* btc_write_2byte ) (struct btc_coexist*,int,int) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;struct btc_board_info board_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct btc_coexist*,int,int) ;
 int FUNC_1 (struct btc_coexist*,int) ;
 int FUNC_2 (struct btc_coexist*,int,int) ;
 int FUNC_3 (struct btc_coexist*,int,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int *) ;

void FUNC_5(struct btc_coexist *VAR_6)
{
 struct btc_board_info *VAR_7 = &VAR_6->board_info;
 u16 VAR_8 = 0x0;
 u32 VAR_9 = 0;

 VAR_6->btc_write_1byte(VAR_6, 0x67, 0x20);


 VAR_8 = VAR_6->btc_read_2byte(VAR_6, 0x2);
 VAR_6->btc_write_2byte(VAR_6, 0x2, VAR_8 | VAR_0 | VAR_1);

 VAR_6->btc_write_4byte(VAR_6, 0x948, 0x0);

 if (VAR_6->chip_interface == VAR_4) {

  VAR_7->btdm_ant_pos = VAR_2;
 } else {

  if (VAR_7->single_ant_path == 0) {

   VAR_7->btdm_ant_pos = VAR_3;
  } else if (VAR_7->single_ant_path == 1) {

   VAR_7->btdm_ant_pos = VAR_2;
  }
  VAR_6->btc_set(VAR_6, VAR_5,
       &VAR_9);
 }
}
