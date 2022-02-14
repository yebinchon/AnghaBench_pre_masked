
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {scalar_t__ sleep_cfm; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*) ;

void FUNC_4(struct mwifiex_adapter *VAR_1)
{
 FUNC_3(VAR_1);


 FUNC_1(VAR_1, VAR_0, "info: free cmd buffer\n");
 FUNC_2(VAR_1);

 if (VAR_1->sleep_cfm)
  FUNC_0(VAR_1->sleep_cfm);
}
