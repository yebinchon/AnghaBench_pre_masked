
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*) ;
 unsigned long VAR_1 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*) ;

int FUNC_5(struct adapter *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4 = VAR_1;

 FUNC_0("===>  rtw_ips_pwr_up..............\n");
 FUNC_4(VAR_2);

 VAR_3 = FUNC_1(VAR_2);

 FUNC_3(VAR_2, VAR_0);

 FUNC_0("<===  rtw_ips_pwr_up.............. in %dms\n",
  FUNC_2(VAR_1 - VAR_4));
 return VAR_3;
}
