
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_read_1byte ) (struct btc_coexist*,int) ;scalar_t__ chip_interface; int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_write_2byte ) (struct btc_coexist*,int,int ) ;int (* btc_read_2byte ) (struct btc_coexist*,int) ;int (* btc_write_4byte ) (struct btc_coexist*,int,int) ;int (* btc_read_4byte ) (struct btc_coexist*,int) ;int (* btc_get_rf_reg ) (struct btc_coexist*,int ,int,int) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int backup_ampdu_maxtime; int backup_retry_limit; int backup_arfr_cnt2; int backup_arfr_cnt1; int bt_rf0x1e_backup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ,int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;
 int FUNC_3 (struct btc_coexist*,int,int) ;
 int FUNC_4 (struct btc_coexist*,int,int) ;
 int FUNC_5 (struct btc_coexist*,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int) ;
 int FUNC_7 (struct btc_coexist*,int) ;
 int FUNC_8 (struct btc_coexist*,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int) ;
 int FUNC_11 (struct btc_coexist*,int) ;
 int FUNC_12 (struct btc_coexist*,int,int ) ;
 int FUNC_13 (struct btc_coexist*,int) ;
 int FUNC_14 (struct btc_coexist*,int) ;
 int FUNC_15 (struct btc_coexist*,int,int) ;
 int FUNC_16 (struct btc_coexist*,int) ;
 int FUNC_17 (struct btc_coexist*,int,int) ;
 int FUNC_18 (struct btc_coexist*,int) ;
 int FUNC_19 (struct btc_coexist*,int,int) ;
 int FUNC_20 (struct btc_coexist*,int) ;
 int FUNC_21 (struct btc_coexist*,int) ;
 int FUNC_22 (struct btc_coexist*,int) ;
 int FUNC_23 (struct btc_coexist*,int,int) ;
 int FUNC_24 (struct btc_coexist*,int,int) ;
 int FUNC_25 (struct btc_coexist*,int,int) ;
 int FUNC_26 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_27(struct btc_coexist *VAR_9,
           bool VAR_10)
{
 struct rtl_priv *VAR_11 = VAR_9->adapter;
 u16 VAR_12 = 0;
 u8 VAR_13 = 0;

 FUNC_0(VAR_11, VAR_5, VAR_6,
   "[BTCoex], 2Ant Init HW Config!!\n");

 if (VAR_10) {

  VAR_8->bt_rf0x1e_backup =
   VAR_9->btc_get_rf_reg(VAR_9, VAR_4,
        0x1e, 0xfffff);

  VAR_8->backup_arfr_cnt1 = VAR_9->btc_read_4byte(VAR_9,
              0x430);
  VAR_8->backup_arfr_cnt2 = VAR_9->btc_read_4byte(VAR_9,
             0x434);
  VAR_8->backup_retry_limit = VAR_9->btc_read_2byte(
            VAR_9,
            0x42a);
  VAR_8->backup_ampdu_maxtime = VAR_9->btc_read_1byte(
            VAR_9,
            0x456);
 }


 VAR_9->btc_write_1byte(VAR_9, 0x4f, 0x6);
 VAR_9->btc_write_1byte(VAR_9, 0x944, 0x24);
 VAR_9->btc_write_4byte(VAR_9, 0x930, 0x700700);
 VAR_9->btc_write_1byte(VAR_9, 0x92c, 0x20);
 if (VAR_9->chip_interface == VAR_3)
  VAR_9->btc_write_4byte(VAR_9, 0x64, 0x30430004);
 else
  VAR_9->btc_write_4byte(VAR_9, 0x64, 0x30030004);

 FUNC_1(VAR_9, VAR_7, 0);


 VAR_9->btc_write_4byte(VAR_9, 0x858, 0x55555555);


 VAR_9->btc_write_1byte(VAR_9, 0x778, 0x3);

 VAR_13 = VAR_9->btc_read_1byte(VAR_9, 0x790);
 VAR_13 &= 0xc0;
 VAR_13 |= 0x5;
 VAR_9->btc_write_1byte(VAR_9, 0x790, VAR_13);


 VAR_9->btc_write_1byte(VAR_9, 0x76e, 0x4);


 VAR_9->btc_write_1byte(VAR_9, 0x40, 0x20);

 VAR_12 = VAR_9->btc_read_2byte(VAR_9, 0x40);
 VAR_12 |= VAR_2;
 VAR_9->btc_write_2byte(VAR_9, 0x40, VAR_12);


 VAR_13 = VAR_9->btc_read_1byte(VAR_9, 0x101);
 VAR_13 |= VAR_1;
 VAR_9->btc_write_1byte(VAR_9, 0x101, VAR_13);


 VAR_13 = VAR_9->btc_read_1byte(VAR_9, 0x93);
 VAR_13 |= VAR_0;
 VAR_9->btc_write_1byte(VAR_9, 0x93, VAR_13);

 VAR_13 = VAR_9->btc_read_1byte(VAR_9, 0x7);
 VAR_13 |= VAR_0;
 VAR_9->btc_write_1byte(VAR_9, 0x7, VAR_13);
}
