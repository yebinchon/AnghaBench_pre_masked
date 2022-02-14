
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int comm; } ;
struct audit_context {void* aux_pids; int target_comm; int target_sid; void* target_sessionid; void* target_uid; void* target_auid; void* target_pid; } ;
struct TYPE_2__ {void* next; int type; } ;
struct audit_aux_data_pids {size_t pid_count; int * target_comm; int * target_sid; void** target_sessionid; void** target_uid; void** target_auid; void** target_pid; TYPE_1__ d; } ;
typedef void* kuid_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct audit_context* FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 void* FUNC_3 (struct task_struct*) ;
 void* FUNC_4 (struct task_struct*) ;
 int VAR_5 ;
 struct audit_aux_data_pids* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct task_struct*,int *) ;
 void* FUNC_8 (struct task_struct*) ;
 void* FUNC_9 (struct task_struct*) ;

int FUNC_10(struct task_struct *VAR_6)
{
 struct audit_aux_data_pids *VAR_7;
 struct audit_context *VAR_8 = FUNC_1();
 kuid_t VAR_9 = FUNC_9(VAR_6);

 if (!VAR_5 || FUNC_2())
  return 0;



 if (!VAR_8->target_pid) {
  VAR_8->target_pid = FUNC_8(VAR_6);
  VAR_8->target_auid = FUNC_3(VAR_6);
  VAR_8->target_uid = VAR_9;
  VAR_8->target_sessionid = FUNC_4(VAR_6);
  FUNC_7(VAR_6, &VAR_8->target_sid);
  FUNC_6(VAR_8->target_comm, VAR_6->comm, VAR_4);
  return 0;
 }

 VAR_7 = (void *)VAR_8->aux_pids;
 if (!VAR_7 || VAR_7->pid_count == VAR_0) {
  VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_3);
  if (!VAR_7)
   return -VAR_2;

  VAR_7->d.type = VAR_1;
  VAR_7->d.next = VAR_8->aux_pids;
  VAR_8->aux_pids = (void *)VAR_7;
 }
 FUNC_0(VAR_7->pid_count >= VAR_0);

 VAR_7->target_pid[VAR_7->pid_count] = FUNC_8(VAR_6);
 VAR_7->target_auid[VAR_7->pid_count] = FUNC_3(VAR_6);
 VAR_7->target_uid[VAR_7->pid_count] = VAR_9;
 VAR_7->target_sessionid[VAR_7->pid_count] = FUNC_4(VAR_6);
 FUNC_7(VAR_6, &VAR_7->target_sid[VAR_7->pid_count]);
 FUNC_6(VAR_7->target_comm[VAR_7->pid_count], VAR_6->comm, VAR_4);
 VAR_7->pid_count++;

 return 0;
}
