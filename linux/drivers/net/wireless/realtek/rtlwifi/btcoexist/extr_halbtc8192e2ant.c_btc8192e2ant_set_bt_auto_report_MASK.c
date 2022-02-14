
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int *) ;struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char*,int ) ;
 int FUNC_1 (struct btc_coexist*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_3,
         bool VAR_4)
{
 struct rtl_priv *VAR_5 = VAR_3->adapter;
 u8 VAR_6[1] = {0};

 VAR_6[0] = 0;

 if (VAR_4)
  VAR_6[0] |= VAR_0;

 FUNC_0(VAR_5, VAR_1, VAR_2,
   "[BTCoex], BT FW auto report : %s, FW write 0x68 = 0x%x\n",
   (VAR_4 ? "Enabled!!" : "Disabled!!"),
   VAR_6[0]);

 VAR_3->btc_fill_h2c(VAR_3, 0x68, 1, VAR_6);
}
