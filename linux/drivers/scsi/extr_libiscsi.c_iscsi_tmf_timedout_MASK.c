
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct iscsi_session {int frwd_lock; } ;
struct iscsi_conn {scalar_t__ tmf_state; int ehwait; struct iscsi_session* session; } ;


 int FUNC_0 (struct iscsi_session*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct iscsi_conn* VAR_2 ;
 struct iscsi_conn* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct iscsi_conn *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct iscsi_session *VAR_6 = VAR_5->session;

 FUNC_2(&VAR_6->frwd_lock);
 if (VAR_5->tmf_state == VAR_0) {
  VAR_5->tmf_state = VAR_1;
  FUNC_0(VAR_6, "tmf timedout\n");

  FUNC_4(&VAR_5->ehwait);
 }
 FUNC_3(&VAR_6->frwd_lock);
}
