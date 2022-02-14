
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btc_board_info {int single_ant_path; } ;
struct btc_coexist {scalar_t__ chip_interface; int (* btc_write_local_reg_1byte ) (struct btc_coexist*,int,int) ;struct btc_board_info board_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct btc_coexist*,int,int) ;
 int FUNC_1 (struct btc_coexist*,int,int) ;
 int FUNC_2 (struct btc_coexist*,int,int) ;

void FUNC_3(struct btc_coexist *VAR_3)
{
 struct btc_board_info *VAR_4 = &VAR_3->board_info;
 u8 VAR_5 = 0x4;
 if (VAR_3->chip_interface == VAR_2) {

  VAR_5 |= 0x1;
  VAR_3->btc_write_local_reg_1byte(VAR_3, 0xfe08, VAR_5);
 } else {

  if (VAR_4->single_ant_path == 0) {
  } else if (VAR_4->single_ant_path == 1) {

   VAR_5 |= 0x1;
  }

  if (VAR_3->chip_interface == VAR_0)
   VAR_3->btc_write_local_reg_1byte(VAR_3, 0x384,
            VAR_5);
  else if (VAR_3->chip_interface == VAR_1)
   VAR_3->btc_write_local_reg_1byte(VAR_3, 0x60,
            VAR_5);
 }
}
