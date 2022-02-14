
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_status_struct {int stat; int resp; } ;
struct sas_task {int task_state_flags; scalar_t__ task_proto; int task_state_lock; struct task_status_struct task_status; } ;
struct hisi_sas_slot {int is_internal; } ;
struct hisi_hba {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hisi_hba*,struct sas_task*,struct hisi_sas_slot*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_6, struct sas_task *VAR_7,
         struct hisi_sas_slot *VAR_8)
{
 if (VAR_7) {
  unsigned long VAR_9;
  struct task_status_struct *VAR_10;

  VAR_10 = &VAR_7->task_status;

  VAR_10->resp = VAR_3;
  VAR_10->stat = VAR_0;
  FUNC_1(&VAR_7->task_state_lock, VAR_9);
  VAR_7->task_state_flags &=
   ~(VAR_5 | VAR_2);
  if (!VAR_8->is_internal && VAR_7->task_proto != VAR_1)
   VAR_7->task_state_flags |= VAR_4;
  FUNC_2(&VAR_7->task_state_lock, VAR_9);
 }

 FUNC_0(VAR_6, VAR_7, VAR_8);
}
