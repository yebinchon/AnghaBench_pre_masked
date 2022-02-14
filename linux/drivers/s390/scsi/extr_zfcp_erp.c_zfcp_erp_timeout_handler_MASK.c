
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fsf_req {struct zfcp_erp_action* erp_action; } ;
struct zfcp_erp_action {int dummy; } ;
struct timer_list {int dummy; } ;


 int VAR_0 ;
 struct zfcp_fsf_req* FUNC_0 (int ,struct timer_list*,int ) ;
 struct zfcp_fsf_req* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct zfcp_erp_action*,int ) ;

void FUNC_2(struct timer_list *VAR_3)
{
 struct zfcp_fsf_req *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 struct zfcp_erp_action *VAR_5 = VAR_4->erp_action;

 FUNC_1(VAR_5, VAR_0);
}
