
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_status_struct {int open_rej_reason; int stat; int resp; } ;
struct sas_task {int task_state_flags; int (* task_done ) (struct sas_task*) ;int task_state_lock; struct task_status_struct task_status; } ;
struct pm8001_hba_info {int lock; int devices; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {scalar_t__ dev_type; int running_req; } ;
struct pm8001_ccb_info {int ccb_tag; struct sas_task* task; struct pm8001_device* device; } ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pm8001_hba_info*,struct sas_task*,struct pm8001_ccb_info*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct sas_task*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(
 struct pm8001_hba_info *VAR_10,
 struct sas_task *VAR_11,
 struct pm8001_device *VAR_12)
{
 int VAR_13;
 unsigned long VAR_14;

 if (VAR_10 == ((void*)0))
  return;

 FUNC_2(&VAR_10->lock, VAR_14);

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  struct sas_task *VAR_15;
  struct task_status_struct *VAR_16;
  struct pm8001_device *VAR_17;
  unsigned long VAR_18;
  u32 VAR_19;
  struct pm8001_ccb_info *VAR_20 = &VAR_10->ccb_info[VAR_13];

  VAR_17 = VAR_20->device;
  if (!VAR_17 || (VAR_17->dev_type == VAR_4))
   continue;
  if (!VAR_12) {
   uintptr_t VAR_21 = (uintptr_t)VAR_17
     - (uintptr_t)&VAR_10->devices;
   if (((VAR_21 % sizeof(*VAR_17)) != 0)
    || ((VAR_21 / sizeof(*VAR_17)) >= VAR_1))
    continue;
  } else if (VAR_17 != VAR_12)
   continue;
  VAR_19 = VAR_20->ccb_tag;
  if (!VAR_19 || (VAR_19 == 0xFFFFFFFF))
   continue;
  VAR_15 = VAR_20->task;
  if (!VAR_15 || !VAR_15->task_done)
   continue;
  if (VAR_11 && (VAR_15 != VAR_11))
   continue;
  VAR_16 = &VAR_15->task_status;
  VAR_16->resp = VAR_6;

  VAR_16->stat = VAR_2;
  VAR_16->open_rej_reason = VAR_3;
  if (VAR_17)
   VAR_17->running_req--;
  FUNC_2(&VAR_15->task_state_lock, VAR_18);
  VAR_15->task_state_flags &= ~VAR_9;
  VAR_15->task_state_flags &= ~VAR_5;
  VAR_15->task_state_flags |= VAR_8;
  if (FUNC_5((VAR_15->task_state_flags
    & VAR_7))) {
   FUNC_3(&VAR_15->task_state_lock,
    VAR_18);
   FUNC_1(VAR_10, VAR_15, VAR_20, VAR_19);
  } else {
   FUNC_3(&VAR_15->task_state_lock,
    VAR_18);
   FUNC_1(VAR_10, VAR_15, VAR_20, VAR_19);
   FUNC_0();
   FUNC_3(&VAR_10->lock, VAR_14);
   VAR_15->task_done(VAR_15);
   FUNC_2(&VAR_10->lock, VAR_14);
  }
 }

 FUNC_3(&VAR_10->lock, VAR_14);
}
