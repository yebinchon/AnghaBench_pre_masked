
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {unsigned long status; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int erp_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (struct zfcp_erp_action*) ;
 int FUNC_3 (struct zfcp_erp_action*) ;

void FUNC_4(struct zfcp_erp_action *VAR_0, unsigned long VAR_1)
{
 struct zfcp_adapter *VAR_2 = VAR_0->adapter;
 unsigned long VAR_3;

 FUNC_0(&VAR_2->erp_lock, VAR_3);
 if (FUNC_2(VAR_0)) {
  VAR_0->status |= VAR_1;
  FUNC_3(VAR_0);
 }
 FUNC_1(&VAR_2->erp_lock, VAR_3);
}
