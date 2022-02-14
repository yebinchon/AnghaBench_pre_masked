
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_write_4byte ) (struct btc_coexist*,int,int) ;struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int,int) ;
 int FUNC_2 (struct btc_coexist*,int,int) ;
 int FUNC_3 (struct btc_coexist*,int,int) ;
 int FUNC_4 (struct btc_coexist*,int,int) ;
 int FUNC_5 (struct btc_coexist*,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int) ;
 int FUNC_11 (struct btc_coexist*,int,int) ;
 int FUNC_12 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_13(struct btc_coexist *VAR_2,
           bool VAR_3)
{
 struct rtl_priv *VAR_4 = VAR_2->adapter;


 if (VAR_3) {
  FUNC_0(VAR_4, VAR_0, VAR_1,
    "[BTCoex], BB Agc Table On!\n");
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0x0a1A0001);
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0x091B0001);
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0x081C0001);
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0x071D0001);
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0x061E0001);
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0x051F0001);
 } else {
  FUNC_0(VAR_4, VAR_0, VAR_1,
    "[BTCoex], BB Agc Table Off!\n");
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0xaa1A0001);
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0xa91B0001);
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0xa81C0001);
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0xa71D0001);
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0xa61E0001);
  VAR_2->btc_write_4byte(VAR_2, 0xc78, 0xa51F0001);
 }
}
