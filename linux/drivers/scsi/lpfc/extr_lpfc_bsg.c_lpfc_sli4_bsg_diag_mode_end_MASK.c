
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_5__ {int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ link_state; TYPE_4__* pport; int hbalock; int link_flag; TYPE_1__ sli4_hba; } ;
struct TYPE_6__ {scalar_t__ vendor_cmd; } ;
struct TYPE_7__ {TYPE_2__ h_vendor; } ;
struct fc_bsg_request {TYPE_3__ rqst_data; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; } ;
struct diag_mode_set {int timeout; } ;
struct bsg_job {struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_8__ {scalar_t__ fc_myDID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bsg_job*,int,int ) ;
 struct Scsi_Host* FUNC_2 (struct bsg_job*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,int ) ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 struct lpfc_vport* FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct bsg_job *VAR_9)
{
 struct fc_bsg_request *VAR_10 = VAR_9->request;
 struct fc_bsg_reply *VAR_11 = VAR_9->reply;
 struct Scsi_Host *VAR_12;
 struct lpfc_vport *VAR_13;
 struct lpfc_hba *VAR_14;
 struct diag_mode_set *VAR_15;
 uint32_t VAR_16;
 int VAR_17, VAR_18;

 VAR_12 = FUNC_2(VAR_9);
 if (!VAR_12)
  return -VAR_0;
 VAR_13 = FUNC_7(VAR_12);
 if (!VAR_13)
  return -VAR_0;
 VAR_14 = VAR_13->phba;
 if (!VAR_14)
  return -VAR_0;

 if (VAR_14->sli_rev < VAR_6)
  return -VAR_0;
 if (FUNC_0(VAR_8, &VAR_14->sli4_hba.sli_intf) <
     VAR_5)
  return -VAR_0;


 FUNC_8(&VAR_14->hbalock);
 VAR_14->link_flag &= ~VAR_7;
 FUNC_9(&VAR_14->hbalock);
 VAR_15 = (struct diag_mode_set *)
   VAR_10->rqst_data.h_vendor.vendor_cmd;
 VAR_16 = VAR_15->timeout * 100;

 VAR_17 = FUNC_5(VAR_14, 0);
 if (VAR_17) {
  FUNC_3(VAR_14, VAR_2, VAR_3,
    "3139 Failed to bring link to diagnostic "
    "state, rc:x%x\n", VAR_17);
  goto loopback_mode_end_exit;
 }


 VAR_18 = 0;
 while (VAR_14->link_state != VAR_4) {
  if (VAR_18++ > VAR_16) {
   FUNC_3(VAR_14, VAR_1, VAR_3,
     "3140 Timeout waiting for link to "
     "diagnostic mode_end, timeout:%d ms\n",
     VAR_16 * 10);

   break;
  }
  FUNC_6(10);
 }


 VAR_17 = FUNC_4(VAR_14);
 VAR_14->pport->fc_myDID = 0;

loopback_mode_end_exit:

 VAR_11->result = VAR_17;

 if (VAR_17 == 0)
  FUNC_1(VAR_9, VAR_11->result,
          VAR_11->reply_payload_rcv_len);
 return VAR_17;
}
