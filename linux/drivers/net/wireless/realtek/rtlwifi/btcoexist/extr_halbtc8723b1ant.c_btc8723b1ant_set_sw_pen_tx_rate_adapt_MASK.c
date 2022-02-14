
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_fill_h2c ) (struct btc_coexist*,int,int,int*) ;struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char*) ;
 int FUNC_1 (struct btc_coexist*,int,int,int*) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_3,
        bool VAR_4)
{
 struct rtl_priv *VAR_5 = VAR_3->adapter;
 u8 VAR_6[6] = {0};

 VAR_6[0] = 0x6;

 if (VAR_4) {
  VAR_6[1] |= VAR_0;

  VAR_6[2] = 0x00;
  VAR_6[3] = 0xf7;
  VAR_6[4] = 0xf8;
  VAR_6[5] = 0xf9;
 }

 FUNC_0(VAR_5, VAR_1, VAR_2,
   "[BTCoex], set WiFi Low-Penalty Retry: %s",
   (VAR_4 ? "ON!!" : "OFF!!"));

 VAR_3->btc_fill_h2c(VAR_3, 0x69, 6, VAR_6);
}
