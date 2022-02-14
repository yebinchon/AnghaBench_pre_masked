
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;scalar_t__ initilized; struct rtl_priv* adapter; } ;
struct TYPE_2__ {int bt_rf0x1e_backup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct btc_coexist *VAR_4,
       bool VAR_5)
{
 struct rtl_priv *VAR_6 = VAR_4->adapter;

 if (VAR_5) {

  FUNC_0(VAR_6, VAR_1, VAR_2,
    "[BTCoex], Shrink RF Rx LPF corner!!\n");
  VAR_4->btc_set_rf_reg(VAR_4, VAR_0, 0x1e,
       0xfffff, 0xffffc);
 } else {



  if (VAR_4->initilized) {
   FUNC_0(VAR_6, VAR_1, VAR_2,
     "[BTCoex], Resume RF Rx LPF corner!!\n");
   VAR_4->btc_set_rf_reg(VAR_4, VAR_0, 0x1e,
        0xfffff,
        VAR_3->bt_rf0x1e_backup);
  }
 }
}
