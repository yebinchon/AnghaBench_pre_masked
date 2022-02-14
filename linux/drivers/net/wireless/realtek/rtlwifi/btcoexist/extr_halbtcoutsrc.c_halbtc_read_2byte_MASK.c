
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 int FUNC_0 (struct rtl_priv*,int ) ;

__attribute__((used)) static u16 FUNC_1(void *VAR_0, u32 VAR_1)
{
 struct btc_coexist *VAR_2 = (struct btc_coexist *)VAR_0;
 struct rtl_priv *VAR_3 = VAR_2->adapter;

 return FUNC_0(VAR_3, VAR_1);
}
