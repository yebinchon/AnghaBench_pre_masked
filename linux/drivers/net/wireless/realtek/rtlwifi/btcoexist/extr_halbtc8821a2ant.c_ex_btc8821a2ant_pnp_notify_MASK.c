
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;

void FUNC_4(struct btc_coexist *VAR_4, u8 VAR_5)
{
 struct rtl_priv *VAR_6 = VAR_4->adapter;

 FUNC_0(VAR_6, VAR_2, VAR_3, "[BTCoex], Pnp notify\n");

 if (VAR_5 == VAR_0) {
  FUNC_0(VAR_6, VAR_2, VAR_3,
    "[BTCoex], Pnp notify to SLEEP\n");
 } else if (VAR_5 == VAR_1) {
  FUNC_0(VAR_6, VAR_2, VAR_3,
    "[BTCoex], Pnp notify to WAKE UP\n");
  FUNC_3(VAR_4);
  FUNC_1(VAR_4);
  FUNC_2(VAR_4);
 }
}
