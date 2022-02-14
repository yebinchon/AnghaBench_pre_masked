
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*,int ) ;

void FUNC_4(struct btc_coexist *VAR_4)
{
 struct rtl_priv *VAR_5 = VAR_4->adapter;

 FUNC_0(VAR_5, VAR_1, VAR_2,
   "[BTCoex], Halt notify\n");

 FUNC_2(VAR_4);
 FUNC_1(VAR_4, VAR_3, 1);
 FUNC_3(VAR_4, VAR_0);
}
