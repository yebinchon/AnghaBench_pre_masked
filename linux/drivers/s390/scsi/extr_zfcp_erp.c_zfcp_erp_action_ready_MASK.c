
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {struct zfcp_adapter* adapter; int list; } ;
struct zfcp_adapter {int erp_ready_wq; int erp_ready_head; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct zfcp_erp_action*) ;

__attribute__((used)) static void FUNC_3(struct zfcp_erp_action *VAR_0)
{
 struct zfcp_adapter *VAR_1 = VAR_0->adapter;

 FUNC_0(&VAR_0->list, &VAR_0->adapter->erp_ready_head);
 FUNC_2("erardy1", VAR_0);
 FUNC_1(&VAR_1->erp_ready_wq);
 FUNC_2("erardy2", VAR_0);
}
