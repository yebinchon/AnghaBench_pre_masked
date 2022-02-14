
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_4__ {int* ps_tdma_para; } ;
struct TYPE_3__ {scalar_t__ hid_exist; scalar_t__ a2dp_exist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct btc_coexist*,int,int,int*) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_4, u8 VAR_5,
     u8 VAR_6, u8 VAR_7, u8 VAR_8, u8 VAR_9)
{
 struct rtl_priv *VAR_10 = VAR_4->adapter;
 u8 VAR_11[5];
 if ((VAR_3->a2dp_exist) && (VAR_3->hid_exist))
  VAR_9 = VAR_9 | 0x1;

 VAR_11[0] = VAR_5;
 VAR_11[1] = VAR_6;
 VAR_11[2] = VAR_7;
 VAR_11[3] = VAR_8;
 VAR_11[4] = VAR_9;

 VAR_2->ps_tdma_para[0] = VAR_5;
 VAR_2->ps_tdma_para[1] = VAR_6;
 VAR_2->ps_tdma_para[2] = VAR_7;
 VAR_2->ps_tdma_para[3] = VAR_8;
 VAR_2->ps_tdma_para[4] = VAR_9;

 FUNC_0(VAR_10, VAR_0, VAR_1,
   "[BTCoex], FW write 0x60(5bytes)=0x%x%08x\n",
   VAR_11[0],
   VAR_11[1] << 24 | VAR_11[2] << 16 |
   VAR_11[3] << 8 | VAR_11[4]);

 VAR_4->btc_fill_h2c(VAR_4, 0x60, 5, VAR_11);
}
