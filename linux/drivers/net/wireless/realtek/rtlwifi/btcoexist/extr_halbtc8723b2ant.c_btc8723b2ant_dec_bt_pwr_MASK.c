
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_2__ {scalar_t__ cur_dec_bt_pwr_lvl; scalar_t__ pre_dec_bt_pwr_lvl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,...) ;
 int FUNC_1 (struct btc_coexist*,scalar_t__) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_3,
        bool VAR_4, u8 VAR_5)
{
 struct rtl_priv *VAR_6 = VAR_3->adapter;

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "[BTCoex], Dec BT power level = %u\n", VAR_5);
 VAR_2->cur_dec_bt_pwr_lvl = VAR_5;

 if (!VAR_4) {
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "[BTCoex], PreDecBtPwrLvl=%d, CurDecBtPwrLvl=%d\n",
       VAR_2->pre_dec_bt_pwr_lvl,
       VAR_2->cur_dec_bt_pwr_lvl);

  if (VAR_2->pre_dec_bt_pwr_lvl == VAR_2->cur_dec_bt_pwr_lvl)
   return;
 }
 FUNC_1(VAR_3, VAR_2->cur_dec_bt_pwr_lvl);

 VAR_2->pre_dec_bt_pwr_lvl = VAR_2->cur_dec_bt_pwr_lvl;
}
