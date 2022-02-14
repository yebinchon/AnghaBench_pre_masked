
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_write_1byte_bitmask ) (struct btc_coexist*,int,int,int ) ;struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;
 int FUNC_1 (struct btc_coexist*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_2,
        u32 VAR_3)
{
 struct rtl_priv *VAR_4 = VAR_2->adapter;
 u8 VAR_5 = (u8) VAR_3;

 FUNC_0(VAR_4, VAR_0, VAR_1,
   "[BTCoex], Write SwDacSwing = 0x%x\n", VAR_3);
 VAR_2->btc_write_1byte_bitmask(VAR_2, 0x883, 0x3e, VAR_5);
}
