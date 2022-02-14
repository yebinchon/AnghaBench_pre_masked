
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int bCardDisableWOHSM; int net_closed; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct adapter*) ;

void FUNC_2(struct adapter *VAR_0)
{
 FUNC_0("===> rtw_ips_pwr_down...................\n");

 VAR_0->bCardDisableWOHSM = 1;
 VAR_0->net_closed = 1;

 FUNC_1(VAR_0);
 VAR_0->bCardDisableWOHSM = 0;
 FUNC_0("<=== rtw_ips_pwr_down.....................\n");
}
