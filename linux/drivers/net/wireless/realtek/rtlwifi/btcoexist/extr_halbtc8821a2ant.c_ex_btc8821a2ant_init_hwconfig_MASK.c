
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_read_1byte ) (struct btc_coexist*,int) ;int (* btc_write_1byte_bitmask ) (struct btc_coexist*,int,int,int) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_get_rf_reg ) (struct btc_coexist*,int ,int,int) ;struct rtl_priv* adapter; } ;
struct TYPE_4__ {int bt_rf0x1e_backup; } ;
struct TYPE_3__ {scalar_t__ dis_ver_info_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct btc_coexist*,int ,int,int) ;
 int FUNC_4 (struct btc_coexist*,int) ;
 int FUNC_5 (struct btc_coexist*,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int) ;

void FUNC_9(struct btc_coexist *VAR_7)
{
 struct rtl_priv *VAR_8 = VAR_7->adapter;
 u8 VAR_9 = 0;

 FUNC_0(VAR_8, VAR_2, VAR_3,
   "[BTCoex], 2Ant Init HW Config!!\n");


 VAR_5->bt_rf0x1e_backup =
  VAR_7->btc_get_rf_reg(VAR_7, VAR_1, 0x1e, 0xfffff);


 VAR_9 = VAR_7->btc_read_1byte(VAR_7, 0x790);
 VAR_9 &= 0xc0;
 VAR_9 |= 0x5;
 VAR_7->btc_write_1byte(VAR_7, 0x790, VAR_9);


 FUNC_2(VAR_7, VAR_0, 1, 0);
 VAR_6->dis_ver_info_cnt = 0;


 FUNC_1(VAR_7, VAR_4, 0);



 VAR_7->btc_write_1byte(VAR_7, 0x76e, 0x4);
 VAR_7->btc_write_1byte(VAR_7, 0x778, 0x3);
 VAR_7->btc_write_1byte_bitmask(VAR_7, 0x40, 0x20, 0x1);
}
