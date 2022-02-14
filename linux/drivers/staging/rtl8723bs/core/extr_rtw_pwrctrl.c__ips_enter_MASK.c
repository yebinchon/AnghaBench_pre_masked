
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {int bips_processing; scalar_t__ ips_mode; scalar_t__ ips_mode_req; scalar_t__ change_rfpwrstate; int bpower_saving; int bkeepfwalive; scalar_t__ rf_pwrstate; int ips_enter_cnts; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct adapter*) ;

void FUNC_3(struct adapter *VAR_2)
{
 struct pwrctrl_priv *VAR_3 = FUNC_1(VAR_2);

 VAR_3->bips_processing = 1;


 VAR_3->ips_mode = VAR_3->ips_mode_req;

 VAR_3->ips_enter_cnts++;
 FUNC_0("==>ips_enter cnts:%d\n", VAR_3->ips_enter_cnts);

 if (VAR_1 == VAR_3->change_rfpwrstate) {
  VAR_3->bpower_saving = 1;
  FUNC_0("nolinked power save enter\n");

  if (VAR_3->ips_mode == VAR_0)
   VAR_3->bkeepfwalive = 1;

  FUNC_2(VAR_2);
  VAR_3->rf_pwrstate = VAR_1;
 }
 VAR_3->bips_processing = 0;

}
