
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int pwr_mode_val; } ;


 int FUNC_0 (int ,int*,int) ;
 struct btc_coexist* FUNC_1 (struct rtl_priv*) ;

void FUNC_2(struct rtl_priv *VAR_0, u8 *VAR_1, u8 VAR_2)
{
 struct btc_coexist *VAR_3 = FUNC_1(VAR_0);
 u8 VAR_4;

 if (!VAR_3)
  return;

 VAR_4 = sizeof(VAR_3->pwr_mode_val);

 if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;

 FUNC_0(VAR_3->pwr_mode_val, VAR_1, VAR_4);
}
