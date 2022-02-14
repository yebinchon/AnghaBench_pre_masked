
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int* ps_tdma_para; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct btc_coexist*,int,int,int*) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_3,
     u8 VAR_4, u8 VAR_5, u8 VAR_6,
     u8 VAR_7, u8 VAR_8)
{
 struct rtl_priv *VAR_9 = VAR_3->adapter;
 u8 VAR_10[5];

 VAR_10[0] = VAR_4;
 VAR_10[1] = VAR_5;
 VAR_10[2] = VAR_6;
 VAR_10[3] = VAR_7;
 VAR_10[4] = VAR_8;

 VAR_2->ps_tdma_para[0] = VAR_4;
 VAR_2->ps_tdma_para[1] = VAR_5;
 VAR_2->ps_tdma_para[2] = VAR_6;
 VAR_2->ps_tdma_para[3] = VAR_7;
 VAR_2->ps_tdma_para[4] = VAR_8;

 FUNC_0(VAR_9, VAR_0, VAR_1,
   "[BTCoex], FW write 0x60(5bytes) = 0x%x%08x\n",
   VAR_10[0],
   VAR_10[1] << 24 |
   VAR_10[2] << 16 |
   VAR_10[3] << 8 |
   VAR_10[4]);

 VAR_3->btc_fill_h2c(VAR_3, 0x60, 5, VAR_10);
}
