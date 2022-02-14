
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct btc_coexist {int stop_coex_dm; struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int,int ) ;
 int FUNC_5 (struct btc_coexist*,int ,int ,int,int) ;

void FUNC_6(struct btc_coexist *VAR_6)
{
 struct rtl_priv *VAR_7 = VAR_6->adapter;

 FUNC_0(VAR_7, VAR_3, VAR_4, "[BTCoex], Halt notify\n");

 VAR_6->stop_coex_dm = 1;

 FUNC_5(VAR_6, VAR_0, VAR_5,
         0, 1);

 FUNC_2(VAR_6, VAR_5, 1);

 FUNC_3(VAR_6, VAR_2,
      0x0, 0x0);
 FUNC_4(VAR_6, VAR_5, 0, 0);

 FUNC_1(VAR_6, VAR_1);

 VAR_6->stop_coex_dm = 1;
}
