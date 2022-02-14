
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_read_1byte ) (struct btc_coexist*,int) ;int (* btc_read_4byte ) (struct btc_coexist*,int) ;struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int) ;
 int FUNC_3 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_4 (struct btc_coexist*,int) ;
 int FUNC_5 (struct btc_coexist*,int) ;
 int FUNC_6 (struct btc_coexist*,int) ;

__attribute__((used)) static void FUNC_7(struct btc_coexist
           *VAR_3)
{
 struct rtl_priv *VAR_4 = VAR_3->adapter;
 u32 VAR_5;
 u8 VAR_6, VAR_7;

 FUNC_1(VAR_3, VAR_2, 15);
 FUNC_2(VAR_3, VAR_2, 1, 22);

 FUNC_3(VAR_3, 0, 0, 0, 0);

 VAR_5 = VAR_3->btc_read_4byte(VAR_3, 0x948);
 VAR_6 = VAR_3->btc_read_1byte(VAR_3, 0x765);
 VAR_7 = VAR_3->btc_read_1byte(VAR_3, 0x76e);

 FUNC_0(VAR_4, VAR_0, VAR_1,
   "[BTCoex], 0x948 = 0x%x, 0x765 = 0x%x, 0x76e = 0x%x\n",
   VAR_5, VAR_6, VAR_7);
}
