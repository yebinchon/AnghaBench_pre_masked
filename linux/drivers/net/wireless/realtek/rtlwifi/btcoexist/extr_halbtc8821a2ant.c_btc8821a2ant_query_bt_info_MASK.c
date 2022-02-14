
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int *) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int c2h_bt_info_req_sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct btc_coexist*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_4)
{
 struct rtl_priv *VAR_5 = VAR_4->adapter;
 u8 VAR_6[1] = {0};

 VAR_3->c2h_bt_info_req_sent = 1;

 VAR_6[0] |= VAR_0;

 FUNC_0(VAR_5, VAR_1, VAR_2,
   "[BTCoex], Query Bt Info, FW write 0x61 = 0x%x\n",
   VAR_6[0]);

 VAR_4->btc_fill_h2c(VAR_4, 0x61, 1, VAR_6);
}
