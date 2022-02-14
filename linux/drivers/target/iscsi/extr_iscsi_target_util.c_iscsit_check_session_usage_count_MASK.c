
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {scalar_t__ session_usage_count; int session_waiting_on_uc; int session_usage_lock; int session_waiting_on_uc_comp; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iscsi_session *VAR_0)
{
 FUNC_1(&VAR_0->session_usage_lock);
 if (VAR_0->session_usage_count != 0) {
  VAR_0->session_waiting_on_uc = 1;
  FUNC_2(&VAR_0->session_usage_lock);
  if (FUNC_0())
   return 2;

  FUNC_3(&VAR_0->session_waiting_on_uc_comp);
  return 1;
 }
 FUNC_2(&VAR_0->session_usage_lock);

 return 0;
}
