
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct btc_board_info {scalar_t__ btdm_ant_pos; } ;
struct btc_coexist {int (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_write_2byte ) (struct btc_coexist*,int,int) ;int (* btc_write_1byte_bitmask ) (struct btc_coexist*,int,int,int) ;int (* btc_write_4byte ) (struct btc_coexist*,int,int) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct btc_board_info board_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct btc_coexist*,int ,int*) ;
 int FUNC_1 (struct btc_coexist*,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_3 (struct btc_coexist*,int,int,int*) ;
 int FUNC_4 (struct btc_coexist*,int,int,int*) ;
 int FUNC_5 (struct btc_coexist*,int,int) ;
 int FUNC_6 (struct btc_coexist*,int) ;
 int FUNC_7 (struct btc_coexist*,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int,int) ;
 int FUNC_11 (struct btc_coexist*,int ,int*) ;
 int FUNC_12 (struct btc_coexist*,int,int,int) ;
 int FUNC_13 (struct btc_coexist*,int) ;
 int FUNC_14 (struct btc_coexist*,int,int) ;
 int FUNC_15 (struct btc_coexist*,int,int,int) ;
 int FUNC_16 (struct btc_coexist*,int,int) ;
 int FUNC_17 (struct btc_coexist*,int,int) ;
 int FUNC_18 (struct btc_coexist*,int,int,int) ;
 int FUNC_19 (struct btc_coexist*,int,int) ;
 int FUNC_20 (struct btc_coexist*,int,int,int) ;
 int FUNC_21 (struct btc_coexist*,int,int) ;
 int FUNC_22 (struct btc_coexist*,int,int,int) ;
 int FUNC_23 (struct btc_coexist*,int,int,int*) ;
 int FUNC_24 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_25(struct btc_coexist *VAR_6,
          u8 VAR_7, bool VAR_8,
          bool VAR_9)
{
 struct btc_board_info *VAR_10 = &VAR_6->board_info;
 u32 VAR_11 = 0, VAR_12 = 0;
 bool VAR_13 = 0;
 bool VAR_14 = 0;
 u8 VAR_15[2] = {0};

 VAR_6->btc_get(VAR_6, VAR_3, &VAR_13);
 VAR_6->btc_get(VAR_6, VAR_4, &VAR_11);

 if ((VAR_11 < 0xc0000) || VAR_13)
  VAR_14 = 1;

 if (VAR_8) {
  VAR_6->btc_write_1byte_bitmask(VAR_6, 0x39, 0x8, 0x1);
  VAR_6->btc_write_1byte(VAR_6, 0x974, 0xff);
  VAR_6->btc_write_1byte_bitmask(VAR_6, 0x944, 0x3, 0x3);
  VAR_6->btc_write_1byte(VAR_6, 0x930, 0x77);
  VAR_6->btc_write_1byte_bitmask(VAR_6, 0x67, 0x20, 0x1);

  if (VAR_11 >= 0x180000) {

   VAR_15[0] = 1;
   VAR_6->btc_fill_h2c(VAR_6, 0x6E, 1,
      VAR_15);
  } else {
   VAR_6->btc_write_1byte(VAR_6, 0x765, 0x18);
  }

  VAR_6->btc_write_4byte(VAR_6, 0x948, 0x0);


  VAR_6->btc_set_rf_reg(VAR_6, VAR_5,
       0x1, 0xfffff, 0x0);

  if (VAR_10->btdm_ant_pos == VAR_2) {

   VAR_15[0] = 0;
  } else {

   VAR_15[0] = 1;
  }

  if (VAR_14) {

   VAR_15[1] = 1;
  } else {

   VAR_15[1] = 0;
  }
  VAR_6->btc_fill_h2c(VAR_6, 0x65, 2, VAR_15);
 } else {
  if (VAR_11 >= 0x180000) {

   VAR_15[0] = 0;
   VAR_6->btc_fill_h2c(VAR_6, 0x6E, 1,
      VAR_15);
  } else {
   VAR_6->btc_write_1byte(VAR_6, 0x765, 0x0);
  }
 }


 if (VAR_14) {
  if (VAR_8) {

   VAR_12 = VAR_6->btc_read_4byte(VAR_6, 0x4c);
   VAR_12 &= ~VAR_0;
   VAR_12 |= VAR_1;
   VAR_6->btc_write_4byte(VAR_6, 0x4c, VAR_12);
  }


  if (VAR_10->btdm_ant_pos == VAR_2)
   VAR_6->btc_write_2byte(VAR_6, 0x948, 0x0);
  else
   VAR_6->btc_write_2byte(VAR_6, 0x948, 0x280);

  switch (VAR_7) {
  case 128:

   VAR_6->btc_write_1byte_bitmask(VAR_6, 0x92c,
          0x3, 0x1);
   break;
  case 129:

   VAR_6->btc_write_1byte_bitmask(VAR_6,
          0x92c, 0x3, 0x2);
   break;
  }
 } else {

  if (VAR_8) {

   VAR_12 = VAR_6->btc_read_4byte(VAR_6, 0x4c);
   VAR_12 |= VAR_0;
   VAR_12 &= ~VAR_1;
   VAR_6->btc_write_4byte(VAR_6, 0x4c, VAR_12);
  }


  VAR_6->btc_write_1byte_bitmask(VAR_6, 0x64, 0x1, 0x0);
  switch (VAR_7) {
  case 128:

   VAR_6->btc_write_2byte(VAR_6, 0x948, 0x0);
   break;
  case 129:

   VAR_6->btc_write_2byte(VAR_6, 0x948, 0x280);
   break;
  }
 }
}
