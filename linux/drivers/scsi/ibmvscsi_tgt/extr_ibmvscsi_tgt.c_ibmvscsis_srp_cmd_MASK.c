
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct viosrp_crq {int dummy; } ;
struct srp_tsk_mgmt {int tag; } ;
struct srp_cmd {int opcode; int tag; } ;
struct scsi_info {scalar_t__ request_limit; scalar_t__ debit; scalar_t__ state; int dev; int work_q; int schedule_q; } ;
struct iu_entry {int dummy; } ;
struct TYPE_5__ {int tag; } ;
struct ibmvscsis_cmd {int work; int list; int type; TYPE_2__ rsp; struct iu_entry* iue; } ;
struct TYPE_4__ {struct srp_tsk_mgmt tsk_mgmt; struct srp_cmd cmd; } ;
struct TYPE_6__ {TYPE_1__ srp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 scalar_t__ VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,char*,scalar_t__,...) ;
 long FUNC_2 (struct scsi_info*,struct ibmvscsis_cmd*,struct viosrp_crq*) ;
 int FUNC_3 (struct scsi_info*,struct ibmvscsis_cmd*) ;
 struct ibmvscsis_cmd* FUNC_4 (struct scsi_info*) ;
 int FUNC_5 (struct scsi_info*,int ,int ) ;
 long FUNC_6 (struct scsi_info*,struct ibmvscsis_cmd*,struct viosrp_crq*) ;
 long FUNC_7 (struct scsi_info*,struct ibmvscsis_cmd*,struct viosrp_crq*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int *) ;
 TYPE_3__* FUNC_10 (struct iu_entry*) ;

__attribute__((used)) static void FUNC_11(struct scsi_info *VAR_5, struct viosrp_crq *VAR_6)
{
 struct ibmvscsis_cmd *VAR_7;
 struct iu_entry *VAR_8;
 struct srp_cmd *VAR_9;
 struct srp_tsk_mgmt *VAR_10;
 long VAR_11;

 if (VAR_5->request_limit - VAR_5->debit <= 0) {

  FUNC_1(&VAR_5->dev, "Client exceeded the request limit (%d), debit %d\n",
   VAR_5->request_limit, VAR_5->debit);
  FUNC_5(VAR_5, VAR_1, 0);
  return;
 }

 VAR_7 = FUNC_4(VAR_5);
 if (!VAR_7) {
  FUNC_1(&VAR_5->dev, "srp_cmd failed to get cmd, debit %d\n",
   VAR_5->debit);
  FUNC_5(VAR_5, VAR_1, 0);
  return;
 }
 VAR_8 = VAR_7->iue;
 VAR_9 = &FUNC_10(VAR_8)->srp.cmd;

 VAR_11 = FUNC_2(VAR_5, VAR_7, VAR_6);
 if (VAR_11) {
  FUNC_3(VAR_5, VAR_7);
  return;
 }

 if (VAR_5->state == VAR_3) {
  switch (VAR_9->opcode) {
  case 129:
   VAR_11 = FUNC_7(VAR_5, VAR_7, VAR_6);
   break;

  case 128:
   VAR_10 = &FUNC_10(VAR_8)->srp.tsk_mgmt;
   FUNC_0(&VAR_5->dev, "tsk_mgmt tag: %llu (0x%llx)\n",
    VAR_10->tag, VAR_10->tag);
   VAR_7->rsp.tag = VAR_10->tag;
   VAR_5->debit += 1;
   VAR_7->type = VAR_4;
   FUNC_8(&VAR_7->list, &VAR_5->schedule_q);
   FUNC_9(VAR_5->work_q, &VAR_7->work);
   break;

  case 132:
   FUNC_0(&VAR_5->dev, "srp_cmd tag: %llu (0x%llx)\n",
    VAR_9->tag, VAR_9->tag);
   VAR_7->rsp.tag = VAR_9->tag;
   VAR_5->debit += 1;
   VAR_7->type = VAR_2;




   FUNC_8(&VAR_7->list, &VAR_5->schedule_q);
   FUNC_9(VAR_5->work_q, &VAR_7->work);
   break;

  case 130:
   VAR_11 = FUNC_6(VAR_5, VAR_7, VAR_6);
   break;

  case 131:
  case 133:
  default:
   FUNC_3(VAR_5, VAR_7);
   FUNC_1(&VAR_5->dev, "invalid srp cmd, opcode %d\n",
    (uint)VAR_9->opcode);
   FUNC_5(VAR_5,
        VAR_1, 0);
   break;
  }
 } else if (VAR_9->opcode == 129 && VAR_5->state == VAR_0) {
  VAR_11 = FUNC_7(VAR_5, VAR_7, VAR_6);
 } else {
  FUNC_3(VAR_5, VAR_7);
  FUNC_1(&VAR_5->dev, "Invalid state %d to handle srp cmd\n",
   VAR_5->state);
  FUNC_5(VAR_5, VAR_1, 0);
 }
}
