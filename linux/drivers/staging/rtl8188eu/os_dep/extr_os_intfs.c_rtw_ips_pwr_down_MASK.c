
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int net_closed; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*) ;

void FUNC_4(struct adapter *VAR_2)
{
 unsigned long VAR_3 = VAR_1;

 FUNC_0("===> rtw_ips_pwr_down...................\n");

 VAR_2->net_closed = 1;

 FUNC_2(VAR_2, VAR_0);

 FUNC_3(VAR_2);
 FUNC_0("<=== rtw_ips_pwr_down..................... in %dms\n",
  FUNC_1(VAR_1 - VAR_3));
}
