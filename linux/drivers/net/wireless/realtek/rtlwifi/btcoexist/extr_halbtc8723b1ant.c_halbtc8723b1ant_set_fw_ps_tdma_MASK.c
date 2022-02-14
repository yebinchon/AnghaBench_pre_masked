
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int*) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int* ps_tdma_para; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (struct btc_coexist*,int ,int*) ;
 int FUNC_2 (struct btc_coexist*,int,int,int*) ;

__attribute__((used)) static void FUNC_3(struct btc_coexist *VAR_7,
        u8 VAR_8, u8 VAR_9, u8 VAR_10,
        u8 VAR_11, u8 VAR_12)
{
 struct rtl_priv *VAR_13 = VAR_7->adapter;
 u8 VAR_14[5] = {0};
 u8 VAR_15 = VAR_8, VAR_16 = VAR_12;
 bool VAR_17 = 0;

 VAR_7->btc_get(VAR_7, VAR_3,
      &VAR_17);

 if (VAR_17) {
  if ((VAR_8 & VAR_0) && !(VAR_8 & VAR_1)) {
   FUNC_0(VAR_13, VAR_4, VAR_5,
     "[BTCoex], FW for 1Ant AP mode\n");
   VAR_15 &= ~VAR_0;
   VAR_15 |= VAR_1;

   VAR_16 |= VAR_1;
   VAR_16 &= ~VAR_2;
  }
 }

 VAR_14[0] = VAR_15;
 VAR_14[1] = VAR_9;
 VAR_14[2] = VAR_10;
 VAR_14[3] = VAR_11;
 VAR_14[4] = VAR_16;

 VAR_6->ps_tdma_para[0] = VAR_15;
 VAR_6->ps_tdma_para[1] = VAR_9;
 VAR_6->ps_tdma_para[2] = VAR_10;
 VAR_6->ps_tdma_para[3] = VAR_11;
 VAR_6->ps_tdma_para[4] = VAR_16;

 FUNC_0(VAR_13, VAR_4, VAR_5,
   "[BTCoex], PS-TDMA H2C cmd =0x%x%08x\n",
      VAR_14[0],
      VAR_14[1] << 24 |
      VAR_14[2] << 16 |
      VAR_14[3] << 8 |
      VAR_14[4]);

 VAR_7->btc_fill_h2c(VAR_7, 0x60, 5, VAR_14);
}
