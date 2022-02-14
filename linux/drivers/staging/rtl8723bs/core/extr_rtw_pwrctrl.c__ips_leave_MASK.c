
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {scalar_t__ rf_pwrstate; int bips_processing; int bkeepfwalive; int bpower_saving; int ips_leave_cnts; void* change_rfpwrstate; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int) ;

int FUNC_4(struct adapter *VAR_3)
{
 struct pwrctrl_priv *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = VAR_0;

 if ((VAR_4->rf_pwrstate == VAR_1) && (!VAR_4->bips_processing)) {
  VAR_4->bips_processing = 1;
  VAR_4->change_rfpwrstate = VAR_2;
  VAR_4->ips_leave_cnts++;
  FUNC_0("==>ips_leave cnts:%d\n", VAR_4->ips_leave_cnts);

  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 == VAR_0) {
   VAR_4->rf_pwrstate = VAR_2;
  }
  FUNC_0("nolinked power save leave\n");

  FUNC_0("==> ips_leave.....LED(0x%08x)...\n", FUNC_3(VAR_3, 0x4c));
  VAR_4->bips_processing = 0;

  VAR_4->bkeepfwalive = 0;
  VAR_4->bpower_saving = 0;
 }

 return VAR_5;
}
