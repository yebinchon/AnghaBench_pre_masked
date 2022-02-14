
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int comm; } ;
struct audit_context {int target_comm; int target_sid; int target_sessionid; int target_uid; int target_auid; int target_pid; } ;


 int VAR_0 ;
 struct audit_context* FUNC_0 () ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct task_struct*,int *) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;

void FUNC_7(struct task_struct *VAR_1)
{
 struct audit_context *VAR_2 = FUNC_0();

 VAR_2->target_pid = FUNC_5(VAR_1);
 VAR_2->target_auid = FUNC_1(VAR_1);
 VAR_2->target_uid = FUNC_6(VAR_1);
 VAR_2->target_sessionid = FUNC_2(VAR_1);
 FUNC_4(VAR_1, &VAR_2->target_sid);
 FUNC_3(VAR_2->target_comm, VAR_1->comm, VAR_0);
}
