
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_15__ {int* scsi_lun; } ;
struct srp_tsk_mgmt {int tsk_mgmt_func; TYPE_8__ lun; int tag; int task_tag; int sol_not; } ;
struct TYPE_10__ {struct ibmvscsis_nexus* ibmv_nexus; } ;
struct scsi_info {int intr_lock; int dev; int active_q; TYPE_2__ tport; } ;
struct iu_entry {int dummy; } ;
struct ibmvscsis_nexus {int se_sess; } ;
struct TYPE_14__ {TYPE_4__* se_tmr_req; void* tag; } ;
struct TYPE_11__ {int sol_not; } ;
struct ibmvscsis_cmd {TYPE_6__ se_cmd; int list; TYPE_3__ rsp; struct iu_entry* iue; } ;
struct TYPE_9__ {struct srp_tsk_mgmt tsk_mgmt; } ;
struct TYPE_13__ {TYPE_1__ srp; } ;
struct TYPE_12__ {int response; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_6__*,int ,int *,int ,struct srp_tsk_mgmt*,int,int ,void*,int ) ;
 int FUNC_9 (TYPE_6__*,int ,int ) ;
 TYPE_5__* FUNC_10 (struct iu_entry*) ;

__attribute__((used)) static void FUNC_11(struct scsi_info *VAR_8,
     struct ibmvscsis_cmd *VAR_9)
{
 struct iu_entry *VAR_10 = VAR_9->iue;
 struct srp_tsk_mgmt *VAR_11 = &FUNC_10(VAR_10)->srp.tsk_mgmt;
 int VAR_12;
 u64 VAR_13 = 0;
 int VAR_14 = 0;
 struct ibmvscsis_nexus *VAR_15;

 VAR_15 = VAR_8->tport.ibmv_nexus;

 VAR_9->rsp.sol_not = VAR_11->sol_not;

 switch (VAR_11->tsk_mgmt_func) {
 case 132:
  VAR_12 = VAR_1;
  VAR_13 = FUNC_0(VAR_11->task_tag);
  break;
 case 131:
  VAR_12 = VAR_2;
  break;
 case 129:
  VAR_12 = VAR_4;
  break;
 case 128:
  VAR_12 = VAR_6;
  break;
 case 130:
  VAR_12 = VAR_3;
  break;
 default:
  FUNC_2(&VAR_8->dev, "unknown task mgmt func %d\n",
   VAR_11->tsk_mgmt_func);
  VAR_9->se_cmd.se_tmr_req->response =
   VAR_7;
  VAR_14 = -1;
  break;
 }

 if (!VAR_14) {
  VAR_9->se_cmd.tag = FUNC_0(VAR_11->tag);

  FUNC_6(&VAR_8->intr_lock);
  FUNC_3(&VAR_9->list, &VAR_8->active_q);
  FUNC_7(&VAR_8->intr_lock);

  VAR_11->lun.scsi_lun[0] &= 0x3f;

  FUNC_1(&VAR_8->dev, "calling submit_tmr, func %d\n",
   VAR_11->tsk_mgmt_func);
  VAR_14 = FUNC_8(&VAR_9->se_cmd, VAR_15->se_sess, ((void*)0),
           FUNC_5(&VAR_11->lun), VAR_11,
           VAR_12, VAR_0, VAR_13, 0);
  if (VAR_14) {
   FUNC_2(&VAR_8->dev, "target_submit_tmr failed, rc %d\n",
    VAR_14);
   FUNC_6(&VAR_8->intr_lock);
   FUNC_4(&VAR_9->list);
   FUNC_7(&VAR_8->intr_lock);
   VAR_9->se_cmd.se_tmr_req->response =
    VAR_5;
  }
 }

 if (VAR_14)
  FUNC_9(&VAR_9->se_cmd, 0, 0);
}
