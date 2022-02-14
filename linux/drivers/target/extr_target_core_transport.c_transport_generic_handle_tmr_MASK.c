
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int transport_state; int work; int tag; TYPE_1__* se_tmr_req; int t_state_lock; int t_state; } ;
struct TYPE_2__ {int ref_task_tag; int function; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct se_cmd*) ;
 int VAR_3 ;

int FUNC_6(
 struct se_cmd *VAR_4)
{
 unsigned long VAR_5;
 bool VAR_6 = 0;

 FUNC_3(&VAR_4->t_state_lock, VAR_5);
 if (VAR_4->transport_state & VAR_0) {
  VAR_6 = 1;
 } else {
  VAR_4->t_state = VAR_2;
  VAR_4->transport_state |= VAR_1;
 }
 FUNC_4(&VAR_4->t_state_lock, VAR_5);

 if (VAR_6) {
  FUNC_1("handle_tmr caught CMD_T_ABORTED TMR %d ref_tag: %llu tag: %llu\n",
        VAR_4->se_tmr_req->function,
        VAR_4->se_tmr_req->ref_task_tag, VAR_4->tag);
  FUNC_5(VAR_4);
  return 0;
 }

 FUNC_0(&VAR_4->work, VAR_3);
 FUNC_2(&VAR_4->work);
 return 0;
}
