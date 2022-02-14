
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*,int,int) ;

void FUNC_3(struct btc_coexist *VAR_2)
{
 struct rtl_priv *VAR_3 = VAR_2->adapter;

 FUNC_0(VAR_3, VAR_0, VAR_1,
   "[BTCoex], *****************Coex DM Reset****************\n");

 FUNC_2(VAR_2, 0, 0);
 FUNC_1(VAR_2);
}
