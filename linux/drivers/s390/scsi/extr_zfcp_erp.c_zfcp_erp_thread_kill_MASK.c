
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int erp_running_head; int erp_ready_head; int * erp_thread; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct zfcp_adapter *VAR_0)
{
 FUNC_1(VAR_0->erp_thread);
 VAR_0->erp_thread = ((void*)0);
 FUNC_0(!FUNC_2(&VAR_0->erp_ready_head));
 FUNC_0(!FUNC_2(&VAR_0->erp_running_head));
}
