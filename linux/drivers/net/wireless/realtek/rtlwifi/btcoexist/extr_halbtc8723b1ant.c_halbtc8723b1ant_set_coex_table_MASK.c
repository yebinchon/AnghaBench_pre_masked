
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_write_1byte ) (struct btc_coexist*,int,int ) ;int (* btc_write_4byte ) (struct btc_coexist*,int,int ) ;struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;
 int FUNC_1 (struct btc_coexist*,int,int ) ;
 int FUNC_2 (struct btc_coexist*,int,int ) ;
 int FUNC_3 (struct btc_coexist*,int,int ) ;
 int FUNC_4 (struct btc_coexist*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct btc_coexist *VAR_2,
        u32 VAR_3, u32 VAR_4,
        u32 VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = VAR_2->adapter;

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "[BTCoex], set coex table, set 0x6c0 = 0x%x\n", VAR_3);
 VAR_2->btc_write_4byte(VAR_2, 0x6c0, VAR_3);

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "[BTCoex], set coex table, set 0x6c4 = 0x%x\n", VAR_4);
 VAR_2->btc_write_4byte(VAR_2, 0x6c4, VAR_4);

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "[BTCoex], set coex table, set 0x6c8 = 0x%x\n", VAR_5);
 VAR_2->btc_write_4byte(VAR_2, 0x6c8, VAR_5);

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "[BTCoex], set coex table, set 0x6cc = 0x%x\n", VAR_6);
 VAR_2->btc_write_1byte(VAR_2, 0x6cc, VAR_6);
}
