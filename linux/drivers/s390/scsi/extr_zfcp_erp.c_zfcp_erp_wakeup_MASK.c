
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int erp_lock; int erp_done_wqh; int status; int erp_running_head; int erp_ready_head; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct zfcp_adapter *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->erp_lock, VAR_2);
 if (FUNC_1(&VAR_1->erp_ready_head) &&
     FUNC_1(&VAR_1->erp_running_head)) {
   FUNC_0(VAR_0,
       &VAR_1->status);
   FUNC_4(&VAR_1->erp_done_wqh);
 }
 FUNC_3(&VAR_1->erp_lock, VAR_2);
}
