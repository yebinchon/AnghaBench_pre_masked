
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct btc_board_info {scalar_t__ btdm_ant_pos; } ;
struct btc_coexist {int (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_write_1byte_bitmask ) (struct btc_coexist*,int,int,int) ;int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int*) ;int (* btc_write_4byte ) (struct btc_coexist*,int,int) ;struct btc_board_info board_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (struct btc_coexist*,int) ;
 int FUNC_1 (struct btc_coexist*,int,int) ;
 int FUNC_2 (struct btc_coexist*,int,int) ;
 int FUNC_3 (struct btc_coexist*,int,int,int*) ;
 int FUNC_4 (struct btc_coexist*,int,int,int*) ;
 int FUNC_5 (struct btc_coexist*,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int,int) ;

__attribute__((used)) static void FUNC_7(struct btc_coexist *VAR_3,
          u8 VAR_4, bool VAR_5,
          bool VAR_6)
{
 struct btc_board_info *VAR_7 = &VAR_3->board_info;
 u32 VAR_8 = 0;
 u8 VAR_9[2] = {0};

 if (VAR_5) {

  VAR_8 = VAR_3->btc_read_4byte(VAR_3, 0x4c);
  VAR_8 &= ~VAR_0;
  VAR_8 |= VAR_1;
  VAR_3->btc_write_4byte(VAR_3, 0x4c, VAR_8);

  VAR_3->btc_write_4byte(VAR_3, 0x974, 0x3ff);

  if (VAR_7->btdm_ant_pos == VAR_2) {



   VAR_9[0] = 1;
   VAR_9[1] = 1;
   VAR_3->btc_fill_h2c(VAR_3, 0x65, 2,
      VAR_9);
  } else {



   VAR_9[0] = 0;
   VAR_9[1] = 1;
   VAR_3->btc_fill_h2c(VAR_3, 0x65, 2,
      VAR_9);
  }
 }


 switch (VAR_4) {
 case 128:
  VAR_3->btc_write_1byte_bitmask(VAR_3, 0xcb7, 0x30, 0x1);
  break;
 case 129:
  VAR_3->btc_write_1byte_bitmask(VAR_3, 0xcb7, 0x30, 0x2);
  break;
 }
}
