
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; int * response; } ;
struct TCP_Server_Info {scalar_t__ srv_count; int tsk; TYPE_1__ session_key; int tcpStatus; int reconnect; int echo; int tcp_ses_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct TCP_Server_Info*) ;
 int FUNC_3 (struct TCP_Server_Info*) ;
 int FUNC_4 (struct TCP_Server_Info*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct task_struct*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct task_struct* FUNC_11 (int *,int *) ;

void
FUNC_12(struct TCP_Server_Info *VAR_4, int VAR_5)
{
 struct task_struct *VAR_6;

 FUNC_9(&VAR_3);
 if (--VAR_4->srv_count > 0) {
  FUNC_10(&VAR_3);
  return;
 }

 FUNC_7(FUNC_4(VAR_4));

 FUNC_6(&VAR_4->tcp_ses_list);
 FUNC_10(&VAR_3);

 FUNC_1(&VAR_4->echo);

 if (VAR_5)






  FUNC_0(&VAR_4->reconnect);
 else
  FUNC_1(&VAR_4->reconnect);

 FUNC_9(&VAR_1);
 VAR_4->tcpStatus = VAR_0;
 FUNC_10(&VAR_1);

 FUNC_2(VAR_4);
 FUNC_3(VAR_4);

 FUNC_5(VAR_4->session_key.response);
 VAR_4->session_key.response = ((void*)0);
 VAR_4->session_key.len = 0;

 VAR_6 = FUNC_11(&VAR_4->tsk, ((void*)0));
 if (VAR_6)
  FUNC_8(VAR_2, VAR_6, 1);
}
