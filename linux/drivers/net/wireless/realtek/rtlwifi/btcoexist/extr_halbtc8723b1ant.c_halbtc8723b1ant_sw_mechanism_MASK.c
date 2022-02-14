
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_3,
      bool VAR_4)
{
 struct rtl_priv *VAR_5 = VAR_3->adapter;

 FUNC_0(VAR_5, VAR_0, VAR_1,
   "[BTCoex], SM[LpRA] = %d\n", VAR_4);

 FUNC_1(VAR_3, VAR_2, VAR_4);
}
