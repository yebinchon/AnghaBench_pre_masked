
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct btc_coexist {int stop_coex_dm; int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int,int ) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ) ;
 int FUNC_7 (struct btc_coexist*,int ,int*) ;

void FUNC_8(struct btc_coexist *VAR_7)
{
 struct rtl_priv *VAR_8 = VAR_7->adapter;
 bool VAR_9 = 0;

 FUNC_0(VAR_8, VAR_4, VAR_5,
   "[BTCoex], Halt notify\n");
 VAR_7->btc_get(VAR_7, VAR_1, &VAR_9);
 if (VAR_9) {
  FUNC_0(VAR_8, VAR_4, VAR_5,
    "[BTCoex], RunCoexistMechanism(), return for 5G <===\n");
  FUNC_1(VAR_7);
  return;
 }


 VAR_7->stop_coex_dm = 1;

 FUNC_5(VAR_7, VAR_0, 0, 1);
 FUNC_2(VAR_7, VAR_6, 1);

 FUNC_3(VAR_7, VAR_3, 0x0, 0x0);
 FUNC_4(VAR_7, VAR_6, 0, 0);

 FUNC_6(VAR_7, VAR_2);
}
