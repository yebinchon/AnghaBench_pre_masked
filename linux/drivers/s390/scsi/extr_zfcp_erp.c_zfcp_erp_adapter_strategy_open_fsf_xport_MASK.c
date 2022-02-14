
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {int status; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int erp_ready_head; int erp_ready_wq; int erp_lock; } ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct zfcp_erp_action*) ;
 int FUNC_5 (struct zfcp_erp_action*) ;
 int FUNC_6 (struct zfcp_erp_action*) ;

__attribute__((used)) static enum zfcp_erp_act_result FUNC_7(
 struct zfcp_erp_action *VAR_4)
{
 int VAR_5;
 struct zfcp_adapter *VAR_6 = VAR_4->adapter;

 FUNC_2(&VAR_6->erp_lock);
 FUNC_5(VAR_4);
 FUNC_3(&VAR_6->erp_lock);

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 == -VAR_0)
  return VAR_2;
 if (VAR_5)
  return VAR_1;

 FUNC_4("erasox1", VAR_4);
 FUNC_1(VAR_6->erp_ready_wq,
     !FUNC_0(&VAR_6->erp_ready_head));
 FUNC_4("erasox2", VAR_4);
 if (VAR_4->status & VAR_3)
  return VAR_1;

 return VAR_2;
}
