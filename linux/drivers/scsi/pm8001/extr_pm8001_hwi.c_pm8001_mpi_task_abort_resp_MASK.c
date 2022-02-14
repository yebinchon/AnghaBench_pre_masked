
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct task_status_struct {int resp; int stat; } ;
struct task_abort_resp {int scp; int tag; int status; } ;
struct sas_task {int (* task_done ) (struct sas_task*) ;int task_state_lock; int task_state_flags; struct task_status_struct task_status; } ;
struct pm8001_hba_info {struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {int id; } ;
struct pm8001_ccb_info {struct pm8001_device* device; struct sas_task* task; } ;




 int VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,size_t) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct pm8001_hba_info*,size_t) ;
 int FUNC_7 (struct sas_task*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct sas_task*) ;

int FUNC_11(struct pm8001_hba_info *VAR_7, void *VAR_8)
{
 struct sas_task *VAR_9;
 struct pm8001_ccb_info *VAR_10;
 unsigned long VAR_11;
 u32 VAR_12 ;
 u32 VAR_13, VAR_14;
 struct task_status_struct *VAR_15;
 struct pm8001_device *VAR_16;

 struct task_abort_resp *VAR_17 =
  (struct task_abort_resp *)(VAR_8 + 4);

 VAR_12 = FUNC_2(VAR_17->status);
 VAR_13 = FUNC_2(VAR_17->tag);
 if (!VAR_13) {
  FUNC_1(VAR_7,
   FUNC_5(" TAG NULL. RETURNING !!!"));
  return -1;
 }

 VAR_14 = FUNC_2(VAR_17->scp);
 VAR_10 = &VAR_7->ccb_info[VAR_13];
 VAR_9 = VAR_10->task;
 VAR_16 = VAR_10->device;

 if (!VAR_9) {
  FUNC_1(VAR_7,
   FUNC_5(" TASK NULL. RETURNING !!!"));
  return -1;
 }
 VAR_15 = &VAR_9->task_status;
 if (VAR_12 != 0)
  FUNC_1(VAR_7,
   FUNC_5("task abort failed status 0x%x ,"
   "tag = 0x%x, scp= 0x%x\n", VAR_12, VAR_13, VAR_14));
 switch (VAR_12) {
 case 128:
  FUNC_0(VAR_7, FUNC_5("IO_SUCCESS\n"));
  VAR_15->resp = VAR_3;
  VAR_15->stat = VAR_1;
  break;
 case 129:
  FUNC_0(VAR_7, FUNC_5("IO_NOT_VALID\n"));
  VAR_15->resp = VAR_6;
  break;
 }
 FUNC_8(&VAR_9->task_state_lock, VAR_11);
 VAR_9->task_state_flags &= ~VAR_5;
 VAR_9->task_state_flags &= ~VAR_2;
 VAR_9->task_state_flags |= VAR_4;
 FUNC_9(&VAR_9->task_state_lock, VAR_11);
 FUNC_4(VAR_7, VAR_9, VAR_10, VAR_13);
 FUNC_3();

 if (VAR_16->id & VAR_0) {
  FUNC_6(VAR_7, VAR_13);
  FUNC_7(VAR_9);

  VAR_16->id &= 0xBFFFFFFF;
 } else
  VAR_9->task_done(VAR_9);

 return 0;
}
