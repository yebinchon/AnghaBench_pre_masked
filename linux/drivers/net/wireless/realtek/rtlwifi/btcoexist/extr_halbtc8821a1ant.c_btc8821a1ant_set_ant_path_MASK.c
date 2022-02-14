
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct btc_board_info {scalar_t__ btdm_ant_pos; } ;
struct btc_coexist {int (* btc_write_1byte_bitmask ) (struct btc_coexist*,int,int,int) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_write_4byte ) (struct btc_coexist*,int,int ) ;int (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int*) ;struct btc_board_info board_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int FUNC_0 (struct btc_coexist*,int) ;
 int FUNC_1 (struct btc_coexist*,int,int,int) ;
 int FUNC_2 (struct btc_coexist*,int,int) ;
 int FUNC_3 (struct btc_coexist*,int,int,int) ;
 int FUNC_4 (struct btc_coexist*,int,int,int) ;
 int FUNC_5 (struct btc_coexist*,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int,int) ;
 int FUNC_11 (struct btc_coexist*,int,int ) ;
 int FUNC_12 (struct btc_coexist*,int,int,int) ;
 int FUNC_13 (struct btc_coexist*,int,int) ;
 int FUNC_14 (struct btc_coexist*,int,int,int*) ;
 int FUNC_15 (struct btc_coexist*,int,int,int*) ;
 int FUNC_16 (struct btc_coexist*,int) ;
 int FUNC_17 (struct btc_coexist*,int,int ) ;
 int FUNC_18 (struct btc_coexist*,int,int,int) ;

__attribute__((used)) static void FUNC_19(struct btc_coexist *VAR_3,
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

  VAR_3->btc_write_1byte_bitmask(VAR_3, 0x975, 0x3, 0x3);
  VAR_3->btc_write_1byte(VAR_3, 0xcb4, 0x77);

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
 } else if (VAR_6) {



  VAR_8 = VAR_3->btc_read_4byte(VAR_3, 0x4c);
  VAR_8 &= ~VAR_0;
  VAR_8 &= ~VAR_1;
  VAR_3->btc_write_4byte(VAR_3, 0x4c, VAR_8);


  VAR_3->btc_write_1byte_bitmask(VAR_3, 0x765, 0x18, 0x3);
 } else {

  VAR_3->btc_write_1byte_bitmask(VAR_3, 0x765, 0x18, 0x0);
 }


 switch (VAR_4) {
 case 128:
  VAR_3->btc_write_1byte(VAR_3, 0xcb4, 0x77);
  if (VAR_7->btdm_ant_pos == VAR_2)
   VAR_3->btc_write_1byte_bitmask(VAR_3, 0xcb7,
          0x30, 0x1);
  else
   VAR_3->btc_write_1byte_bitmask(VAR_3, 0xcb7,
          0x30, 0x2);
  break;
 case 130:
  VAR_3->btc_write_1byte(VAR_3, 0xcb4, 0x77);
  if (VAR_7->btdm_ant_pos == VAR_2)
   VAR_3->btc_write_1byte_bitmask(VAR_3, 0xcb7,
          0x30, 0x2);
  else
   VAR_3->btc_write_1byte_bitmask(VAR_3, 0xcb7,
          0x30, 0x1);
  break;
 default:
 case 129:
  VAR_3->btc_write_1byte(VAR_3, 0xcb4, 0x66);
  if (VAR_7->btdm_ant_pos == VAR_2)
   VAR_3->btc_write_1byte_bitmask(VAR_3, 0xcb7,
          0x30, 0x1);
  else
   VAR_3->btc_write_1byte_bitmask(VAR_3, 0xcb7,
          0x30, 0x2);
  break;
 }
}
