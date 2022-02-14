
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_board_info {scalar_t__ btdm_ant_pos; } ;
struct btc_coexist {int (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_read_1byte ) (struct btc_coexist*,int) ;int (* btc_write_4byte ) (struct btc_coexist*,int,int) ;int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int*) ;int (* btc_write_1byte_bitmask ) (struct btc_coexist*,int,int,int) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;struct btc_board_info board_info; struct rtl_priv* adapter; } ;
struct TYPE_2__ {int cur_ant_pos_type; scalar_t__ pre_ant_pos_type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;
 int FUNC_4 (struct btc_coexist*,int,int,int) ;
 int FUNC_5 (struct btc_coexist*,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int,int*) ;
 int FUNC_7 (struct btc_coexist*,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int) ;
 int FUNC_9 (struct btc_coexist*,int ,int*) ;
 int FUNC_10 (struct btc_coexist*,int,int,int) ;
 int FUNC_11 (struct btc_coexist*,int,int,int) ;
 int FUNC_12 (struct btc_coexist*,int) ;
 int FUNC_13 (struct btc_coexist*,int,int) ;
 int FUNC_14 (struct btc_coexist*,int ,int*) ;
 int FUNC_15 (struct btc_coexist*,int) ;
 int FUNC_16 (struct btc_coexist*,int,int,int*) ;
 int FUNC_17 (struct btc_coexist*,int) ;
 int FUNC_18 (struct btc_coexist*,int,int) ;
 int FUNC_19 (struct btc_coexist*,int) ;
 int FUNC_20 (struct btc_coexist*,int,int) ;
 int FUNC_21 (struct btc_coexist*,int,int,int) ;
 int FUNC_22 (struct btc_coexist*,int) ;
 int FUNC_23 (struct btc_coexist*,int,int) ;
 int FUNC_24 (struct btc_coexist*,int,int) ;
 int FUNC_25 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_26 (struct btc_coexist*,int,int,int*) ;
 int FUNC_27 (struct btc_coexist*,int,int,int*) ;
 int FUNC_28 (struct btc_coexist*,int,int,int) ;
 int FUNC_29 (struct btc_coexist*,int,int,int) ;
 int FUNC_30 (struct btc_coexist*,int,int,int) ;
 int FUNC_31 (struct btc_coexist*,int,int,int) ;
 int FUNC_32 (struct btc_coexist*,int,int,int) ;
 int FUNC_33 (struct btc_coexist*,int,int,int) ;
 int FUNC_34 (struct btc_coexist*,int) ;
 int FUNC_35 (struct btc_coexist*,int,int) ;
 int FUNC_36 (struct btc_coexist*,int,int,int*) ;
 int FUNC_37 (struct btc_coexist*,int,int,int) ;
 int FUNC_38 (struct btc_coexist*,int,int,int*) ;
 int FUNC_39 (struct btc_coexist*,int,int,int*) ;
 int FUNC_40 (struct btc_coexist*,int,int) ;
 int FUNC_41 (struct btc_coexist*,int,int) ;
 int FUNC_42 (struct btc_coexist*,int,int) ;
 int FUNC_43 (struct btc_coexist*,int,int) ;
 int FUNC_44 (struct btc_coexist*,int,int) ;
 int FUNC_45 (struct btc_coexist*,int,int) ;
 int FUNC_46 (struct btc_coexist*,int,int) ;
 int FUNC_47 (struct btc_coexist*,int,int) ;
 int FUNC_48 (struct btc_coexist*,int,int,int) ;
 int FUNC_49 (struct btc_coexist*,int,int,int) ;
 int FUNC_50 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_51(struct btc_coexist *VAR_10,
      u8 VAR_11, bool VAR_12,
      bool VAR_13, bool VAR_14)
{
 struct rtl_priv *VAR_15 = VAR_10->adapter;
 struct btc_board_info *VAR_16 = &VAR_10->board_info;
 u32 VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 bool VAR_22 = 0;
 u8 VAR_23[2] = {0}, VAR_24 = 0;

 VAR_9->cur_ant_pos_type = VAR_11;

 VAR_10->btc_get(VAR_10, VAR_3, &VAR_20);

 VAR_10->btc_get(VAR_10, VAR_5, &VAR_17);

 if ((VAR_17 < 0xc0000) || VAR_20)
  VAR_21 = 1;

 if (VAR_13) {

  VAR_10->btc_set_rf_reg(VAR_10, VAR_6, 0x1, 0xfffff,
       0x780);




  if (VAR_17 >= 0x180000) {

   VAR_23[0] = 1;
   VAR_10->btc_fill_h2c(VAR_10, 0x6E, 1,
      VAR_23);
  } else {

   VAR_10->btc_write_1byte(VAR_10, 0x765, 0x18);
  }

  VAR_10->btc_write_1byte(VAR_10, 0x76e, 0x4);


  VAR_10->btc_write_1byte_bitmask(VAR_10, 0x67, 0x20, 0x0);
  VAR_10->btc_write_1byte_bitmask(VAR_10, 0x39, 0x8, 0x1);
  VAR_10->btc_write_1byte(VAR_10, 0x974, 0xff);
  VAR_10->btc_write_1byte_bitmask(VAR_10, 0x944, 0x3, 0x3);
  VAR_10->btc_write_1byte(VAR_10, 0x930, 0x77);
 } else if (VAR_14) {
  if (VAR_17 >= 0x180000) {

   VAR_23[0] = 1;
   VAR_10->btc_fill_h2c(VAR_10, 0x6E, 1,
      VAR_23);
  } else {

   VAR_10->btc_write_1byte(VAR_10, 0x765, 0x18);
  }

  VAR_10->btc_write_1byte(VAR_10, 0x76e, 0x4);

  VAR_10->btc_get(VAR_10, VAR_4,
       &VAR_22);
  if (!VAR_22)

   VAR_10->btc_write_1byte_bitmask(VAR_10, 0x67,
          0x20, 0x0);
  else

   VAR_10->btc_write_1byte_bitmask(VAR_10, 0x67,
          0x20, 0x1);




  VAR_18 = VAR_10->btc_read_4byte(VAR_10, 0x4c);
  VAR_18 &= ~VAR_0;
  VAR_18 &= ~VAR_1;
  VAR_10->btc_write_4byte(VAR_10, 0x4c, VAR_18);
 } else {

  if (VAR_17 >= 0x180000) {
   if (VAR_10->btc_read_1byte(VAR_10, 0x765) != 0) {
    VAR_23[0] = 0;
    VAR_10->btc_fill_h2c(VAR_10, 0x6E, 1,
       VAR_23);
   }
  } else {

   while (VAR_19 <= 20) {
    VAR_24 = VAR_10->btc_read_1byte(VAR_10,
          0x49d);
    VAR_19++;
    if (VAR_24 & FUNC_0(0)) {
     FUNC_1(VAR_15, VAR_7,
       VAR_8,
       "[BTCoex], ########### BT is calibrating (wait cnt=%d) ###########\n",
       VAR_19);
     FUNC_2(50);
    } else {
     FUNC_1(VAR_15, VAR_7,
       VAR_8,
       "[BTCoex], ********** BT is NOT calibrating (wait cnt=%d)**********\n",
       VAR_19);
     break;
    }
   }


   VAR_10->btc_write_1byte(VAR_10, 0x765, 0x0);
  }

  if (VAR_10->btc_read_1byte(VAR_10, 0x76e) != 0xc) {

   VAR_10->btc_write_1byte(VAR_10, 0x76e, 0xc);
  }

  VAR_10->btc_write_1byte_bitmask(
   VAR_10, 0x67, 0x20,
   0x1);
 }

 if (VAR_21) {
  if (VAR_13) {



   VAR_18 = VAR_10->btc_read_4byte(VAR_10, 0x4c);
   VAR_18 &= ~VAR_0;
   VAR_18 |= VAR_1;
   VAR_10->btc_write_4byte(VAR_10, 0x4c, VAR_18);


   VAR_10->btc_write_4byte(VAR_10, 0x948, 0x0);

   if (VAR_16->btdm_ant_pos ==
       VAR_2) {

    VAR_23[0] = 0;

    VAR_23[1] = 1;
    VAR_10->btc_fill_h2c(VAR_10, 0x65, 2,
       VAR_23);
   } else {

    VAR_23[0] = 1;

    VAR_23[1] = 1;
    VAR_10->btc_fill_h2c(VAR_10, 0x65, 2,
       VAR_23);
   }
  }

  if (VAR_12 ||
      (VAR_9->cur_ant_pos_type != VAR_9->pre_ant_pos_type)) {

   switch (VAR_11) {
   case 128:
    if (VAR_16->btdm_ant_pos ==
        VAR_2)
     VAR_10->btc_write_1byte_bitmask(
      VAR_10, 0x92c, 0x3, 0x1);
    else
     VAR_10->btc_write_1byte_bitmask(
      VAR_10, 0x92c, 0x3, 0x2);
    break;
   case 130:
    if (VAR_16->btdm_ant_pos ==
        VAR_2)
     VAR_10->btc_write_1byte_bitmask(
      VAR_10, 0x92c, 0x3, 0x2);
    else
     VAR_10->btc_write_1byte_bitmask(
      VAR_10, 0x92c, 0x3, 0x1);
    break;
   default:
   case 129:
    if (VAR_16->btdm_ant_pos ==
        VAR_2)
     VAR_10->btc_write_1byte_bitmask(
      VAR_10, 0x92c, 0x3, 0x1);
    else
     VAR_10->btc_write_1byte_bitmask(
      VAR_10, 0x92c, 0x3, 0x2);
    break;
   }
  }
 } else {
  if (VAR_13) {



   VAR_18 = VAR_10->btc_read_4byte(VAR_10, 0x4c);
   VAR_18 |= VAR_0;
   VAR_18 &= ~VAR_1;
   VAR_10->btc_write_4byte(VAR_10, 0x4c, VAR_18);


   VAR_10->btc_write_1byte_bitmask(VAR_10, 0x64, 0x1,
          0x0);

   if (VAR_16->btdm_ant_pos ==
       VAR_2) {

    VAR_23[0] = 0;

    VAR_23[1] = 0;
    VAR_10->btc_fill_h2c(VAR_10, 0x65, 2,
       VAR_23);
   } else {

    VAR_23[0] = 1;

    VAR_23[1] = 0;
    VAR_10->btc_fill_h2c(VAR_10, 0x65, 2,
       VAR_23);
   }
  }

  if (VAR_12 ||
      (VAR_9->cur_ant_pos_type != VAR_9->pre_ant_pos_type)) {

   switch (VAR_11) {
   case 128:
    if (VAR_16->btdm_ant_pos ==
        VAR_2)
     VAR_10->btc_write_4byte(VAR_10,
       0x948, 0x0);
    else
     VAR_10->btc_write_4byte(VAR_10,
       0x948, 0x280);
    break;
   case 130:
    if (VAR_16->btdm_ant_pos ==
        VAR_2)
     VAR_10->btc_write_4byte(VAR_10,
       0x948, 0x280);
    else
     VAR_10->btc_write_4byte(VAR_10,
       0x948, 0x0);
    break;
   default:
   case 129:
    if (VAR_16->btdm_ant_pos ==
        VAR_2)
     VAR_10->btc_write_4byte(VAR_10,
       0x948, 0x200);
    else
     VAR_10->btc_write_4byte(VAR_10,
       0x948, 0x80);
    break;
   }
  }
 }

 VAR_9->pre_ant_pos_type = VAR_9->cur_ant_pos_type;
}
