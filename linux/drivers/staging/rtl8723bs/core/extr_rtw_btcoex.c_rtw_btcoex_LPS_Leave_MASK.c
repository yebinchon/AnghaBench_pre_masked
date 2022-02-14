
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {scalar_t__ pwr_mode; int bpower_saving; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int) ;
 scalar_t__ VAR_0 ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,scalar_t__,int ,int ,char*) ;

void FUNC_3(struct adapter *VAR_1)
{
 struct pwrctrl_priv *VAR_2;


 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->pwr_mode != VAR_0) {
  FUNC_2(VAR_1, VAR_0, 0, 0, "BTCOEX");
  FUNC_0(VAR_1, 100);
  VAR_2->bpower_saving = 0;
 }
}
