
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_ps_ctl {int rfpwr_state; scalar_t__ rfoff_reason; scalar_t__ inactiveps; } ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
typedef enum rf_pwrstate { ____Placeholder_rf_pwrstate } rf_pwrstate ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_ps_ctl* FUNC_0 (struct rtl_priv*) ;

__attribute__((used)) static bool FUNC_1(struct btc_coexist *VAR_2)
{
 struct rtl_priv *VAR_3 = VAR_2->adapter;
 struct rtl_ps_ctl *VAR_4 = FUNC_0(VAR_3);
 enum rf_pwrstate VAR_5;

 if (VAR_4->inactiveps) {
  VAR_5 = VAR_4->rfpwr_state;

  if (VAR_5 != VAR_0 &&
      VAR_4->rfoff_reason == VAR_1) {
   return 1;
  }
 }

 return 0;
}
