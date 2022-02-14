
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int *) ;struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,int ) ;
 int FUNC_1 (struct btc_coexist*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_2,
        u8 VAR_3)
{
 struct rtl_priv *VAR_4 = VAR_2->adapter;
 u8 VAR_5[1] = {0};

 VAR_5[0] = VAR_3;

 FUNC_0(VAR_4, VAR_0, VAR_1,
   "[BTCoex], decrease Bt Power Level : %u, FW write 0x62 = 0x%x\n",
   VAR_3, VAR_5[0]);

 VAR_2->btc_fill_h2c(VAR_2, 0x62, 1, VAR_5);
}
