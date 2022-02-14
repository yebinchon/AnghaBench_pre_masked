
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int session_usage_lock; int session_waiting_on_uc_comp; scalar_t__ session_waiting_on_uc; int session_usage_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iscsi_session *VAR_0)
{
 FUNC_1(&VAR_0->session_usage_lock);
 VAR_0->session_usage_count--;

 if (!VAR_0->session_usage_count && VAR_0->session_waiting_on_uc)
  FUNC_0(&VAR_0->session_waiting_on_uc_comp);

 FUNC_2(&VAR_0->session_usage_lock);
}
