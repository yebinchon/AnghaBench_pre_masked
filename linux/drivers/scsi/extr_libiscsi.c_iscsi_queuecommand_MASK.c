
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ptr; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int * cmnd; int device; TYPE_1__ SCp; } ;
struct iscsi_task {int running; } ;
struct iscsi_session {int state; int frwd_lock; int back_lock; int queued_cmdsn; int cmdsn; TYPE_2__* tt; struct iscsi_conn* leadconn; } ;
struct iscsi_host {int workq; } ;
struct iscsi_conn {int taskqueuelock; int cmdqueue; int suspend_tx; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* xmit_task ) (struct iscsi_task*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct iscsi_session*,char*,int ,int) ;


 int VAR_16 ;



 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct iscsi_task* FUNC_1 (struct iscsi_conn*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_task*,int ) ;
 int FUNC_4 (struct iscsi_conn*) ;
 int FUNC_5 (struct iscsi_task*) ;
 int FUNC_6 (struct iscsi_cls_session*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*,int ) ;
 int FUNC_10 (int ) ;
 struct iscsi_host* FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct iscsi_cls_session* FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct iscsi_task*) ;
 int FUNC_16 (struct scsi_cmnd*) ;
 int VAR_21 ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (int) ;

int FUNC_19(struct Scsi_Host *VAR_22, struct scsi_cmnd *VAR_23)
{
 struct iscsi_cls_session *VAR_24;
 struct iscsi_host *VAR_25;
 int VAR_26 = 0;
 struct iscsi_session *VAR_27;
 struct iscsi_conn *VAR_28;
 struct iscsi_task *VAR_29 = ((void*)0);

 VAR_23->result = 0;
 VAR_23->SCp.ptr = ((void*)0);

 VAR_25 = FUNC_11(VAR_22);

 VAR_24 = FUNC_14(FUNC_10(VAR_23->device));
 VAR_27 = VAR_24->dd_data;
 FUNC_12(&VAR_27->frwd_lock);

 VAR_26 = FUNC_6(VAR_24);
 if (VAR_26) {
  VAR_23->result = VAR_26;
  goto fault;
 }

 if (VAR_27->state != VAR_16) {






  switch (VAR_27->state) {
  case 132:




   if (FUNC_18(VAR_21 != VAR_20)) {
    VAR_26 = VAR_8;
    VAR_23->result = VAR_2 << 16;
    break;
   }

  case 131:
   VAR_26 = VAR_10;
   VAR_23->result = VAR_1 << 16;
   break;
  case 130:
   VAR_26 = VAR_11;
   VAR_23->result = VAR_1 << 16;
   break;
  case 129:
   VAR_26 = VAR_13;
   VAR_23->result = VAR_4 << 16;
   break;
  case 128:
   VAR_26 = VAR_14;
   VAR_23->result = VAR_2 << 16;
   break;
  default:
   VAR_26 = VAR_9;
   VAR_23->result = VAR_2 << 16;
  }
  goto fault;
 }

 VAR_28 = VAR_27->leadconn;
 if (!VAR_28) {
  VAR_26 = VAR_9;
  VAR_23->result = VAR_2 << 16;
  goto fault;
 }

 if (FUNC_17(VAR_17, &VAR_28->suspend_tx)) {
  VAR_26 = VAR_10;
  VAR_23->result = VAR_3 << 16;
  goto fault;
 }

 if (FUNC_2(VAR_28)) {
  VAR_26 = VAR_15;
  goto reject;
 }

 VAR_29 = FUNC_1(VAR_28, VAR_23);
 if (!VAR_29) {
  VAR_26 = VAR_7;
  goto reject;
 }

 if (!VAR_25->workq) {
  VAR_26 = FUNC_5(VAR_29);
  if (VAR_26) {
   if (VAR_26 == -VAR_6 || VAR_26 == -VAR_5) {
    VAR_26 = VAR_7;
    goto prepd_reject;
   } else {
    VAR_23->result = VAR_0 << 16;
    goto prepd_fault;
   }
  }
  if (VAR_27->tt->xmit_task(VAR_29)) {
   VAR_27->cmdsn--;
   VAR_26 = VAR_12;
   goto prepd_reject;
  }
 } else {
  FUNC_12(&VAR_28->taskqueuelock);
  FUNC_7(&VAR_29->running, &VAR_28->cmdqueue);
  FUNC_13(&VAR_28->taskqueuelock);
  FUNC_4(VAR_28);
 }

 VAR_27->queued_cmdsn++;
 FUNC_13(&VAR_27->frwd_lock);
 return 0;

prepd_reject:
 FUNC_12(&VAR_27->back_lock);
 FUNC_3(VAR_29, VAR_18);
 FUNC_13(&VAR_27->back_lock);
reject:
 FUNC_13(&VAR_27->frwd_lock);
 FUNC_0(VAR_27, "cmd 0x%x rejected (%d)\n",
     VAR_23->cmnd[0], VAR_26);
 return VAR_19;

prepd_fault:
 FUNC_12(&VAR_27->back_lock);
 FUNC_3(VAR_29, VAR_18);
 FUNC_13(&VAR_27->back_lock);
fault:
 FUNC_13(&VAR_27->frwd_lock);
 FUNC_0(VAR_27, "iscsi: cmd 0x%x is not queued (%d)\n",
     VAR_23->cmnd[0], VAR_26);
 FUNC_9(VAR_23, FUNC_8(VAR_23));
 VAR_23->scsi_done(VAR_23);
 return 0;
}
