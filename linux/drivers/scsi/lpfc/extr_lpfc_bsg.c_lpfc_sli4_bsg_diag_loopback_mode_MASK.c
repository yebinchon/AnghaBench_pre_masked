
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int lnk_no; } ;
struct TYPE_9__ {int conf_trunk; TYPE_3__ lnk_info; } ;
struct lpfc_hba {scalar_t__ link_state; int hbalock; int link_flag; TYPE_5__* pport; TYPE_4__ sli4_hba; } ;
struct TYPE_6__ {scalar_t__ vendor_cmd; } ;
struct TYPE_7__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; } ;
struct diag_mode_set {int type; int timeout; int physical_link; } ;
struct bsg_job {int request_len; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct TYPE_10__ {int fc_myDID; } ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct bsg_job*,int,scalar_t__) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,int) ;
 int FUNC_6 (struct lpfc_hba*,int ,int) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct lpfc_hba *VAR_17, struct bsg_job *VAR_18)
{
 struct fc_bsg_request *VAR_19 = VAR_18->request;
 struct fc_bsg_reply *VAR_20 = VAR_18->reply;
 struct diag_mode_set *VAR_21;
 uint32_t VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26 = 0;


 VAR_20->reply_payload_rcv_len = 0;

 if (VAR_18->request_len < sizeof(struct fc_bsg_request) +
     sizeof(struct diag_mode_set)) {
  FUNC_3(VAR_17, VAR_7, VAR_8,
    "3011 Received DIAG MODE request size:%d "
    "below the minimum size:%d\n",
    VAR_18->request_len,
    (int)(sizeof(struct fc_bsg_request) +
    sizeof(struct diag_mode_set)));
  VAR_26 = -VAR_1;
  goto job_done;
 }

 VAR_21 = (struct diag_mode_set *)
  VAR_19->rqst_data.h_vendor.vendor_cmd;
 VAR_22 = VAR_21->type;
 VAR_23 = VAR_21->timeout * 100;

 if (VAR_21->physical_link == -1)
  VAR_24 = VAR_17->sli4_hba.lnk_info.lnk_no;
 else
  VAR_24 = VAR_21->physical_link;

 if (VAR_22 == VAR_0) {
  VAR_26 = FUNC_6(VAR_17,
     VAR_9,
     VAR_24);
  if (!VAR_26) {

   VAR_17->sli4_hba.conf_trunk &= ~((1 << VAR_24) << 4);
  }
  goto job_done;
 } else {

  if (VAR_17->sli4_hba.conf_trunk & ((1 << VAR_24) << 4)) {
   VAR_26 = -VAR_3;
   goto job_done;
  }
 }

 VAR_26 = FUNC_1(VAR_17);
 if (VAR_26)
  goto job_done;


 FUNC_9(&VAR_17->hbalock);
 VAR_17->link_flag |= VAR_16;
 FUNC_10(&VAR_17->hbalock);


 VAR_26 = FUNC_4(VAR_17);
 if (VAR_26)
  goto job_done;


 FUNC_3(VAR_17, VAR_6, VAR_8,
   "3129 Bring link to diagnostic state.\n");

 VAR_26 = FUNC_5(VAR_17, 1);
 if (VAR_26) {
  FUNC_3(VAR_17, VAR_7, VAR_8,
    "3130 Failed to bring link to diagnostic "
    "state, rc:x%x\n", VAR_26);
  goto loopback_mode_exit;
 }


 VAR_25 = 0;
 while (VAR_17->link_state != VAR_14) {
  if (VAR_25++ > VAR_23) {
   VAR_26 = -VAR_4;
   FUNC_3(VAR_17, VAR_6, VAR_8,
     "3131 Timeout waiting for link to "
     "diagnostic mode, timeout:%d ms\n",
     VAR_23 * 10);
   goto loopback_mode_exit;
  }
  FUNC_8(10);
 }


 FUNC_3(VAR_17, VAR_6, VAR_8,
   "3132 Set up loopback mode:x%x\n", VAR_22);

 switch (VAR_22) {
 case 128:
  if (VAR_17->sli4_hba.conf_trunk & (1 << VAR_24)) {
   VAR_26 = FUNC_6(VAR_17,
     VAR_11,
     VAR_24);
  } else {

   if (VAR_17->sli4_hba.conf_trunk) {
    VAR_26 = -VAR_2;
    goto loopback_mode_exit;
   }

   VAR_26 = FUNC_6(VAR_17,
     VAR_11,
     VAR_24);
  }

  if (!VAR_26) {

   VAR_17->sli4_hba.conf_trunk |= (1 << VAR_24) << 4;
  }

  break;
 case 129:
  if (VAR_17->sli4_hba.conf_trunk & (1 << VAR_24)) {
   VAR_26 = FUNC_6(VAR_17,
    VAR_10,
    VAR_24);
  } else {

   if (VAR_17->sli4_hba.conf_trunk) {
    VAR_26 = -VAR_2;
    goto loopback_mode_exit;
   }

   VAR_26 = FUNC_6(VAR_17,
      VAR_12,
      VAR_24);
  }

  if (!VAR_26) {

   VAR_17->sli4_hba.conf_trunk |= (1 << VAR_24) << 4;
  }

  break;
 default:
  VAR_26 = -VAR_1;
  FUNC_3(VAR_17, VAR_5, VAR_8,
    "3141 Loopback mode:x%x not supported\n",
    VAR_22);
  goto loopback_mode_exit;
 }

 if (!VAR_26) {

  FUNC_8(100);
  VAR_25 = 0;
  while (VAR_17->link_state < VAR_15) {
   if (VAR_25++ > VAR_23) {
    VAR_26 = -VAR_4;
    FUNC_3(VAR_17, VAR_6, VAR_8,
     "3137 Timeout waiting for link up "
     "in loopback mode, timeout:%d ms\n",
     VAR_23 * 10);
    break;
   }
   FUNC_8(10);
  }
 }


 if (!VAR_26) {

  VAR_17->pport->fc_myDID = 1;
  VAR_26 = FUNC_7(VAR_17);
 } else
  goto loopback_mode_exit;

 if (!VAR_26) {

  FUNC_8(100);
  VAR_25 = 0;
  while (VAR_17->link_state != VAR_13) {
   if (VAR_25++ > VAR_23) {
    VAR_26 = -VAR_4;
    FUNC_3(VAR_17, VAR_6, VAR_8,
     "3133 Timeout waiting for port "
     "loopback mode ready, timeout:%d ms\n",
     VAR_23 * 10);
    break;
   }
   FUNC_8(10);
  }
 }

loopback_mode_exit:

 if (VAR_26) {
  FUNC_9(&VAR_17->hbalock);
  VAR_17->link_flag &= ~VAR_16;
  FUNC_10(&VAR_17->hbalock);
 }
 FUNC_2(VAR_17);

job_done:

 VAR_20->result = VAR_26;

 if (VAR_26 == 0)
  FUNC_0(VAR_18, VAR_20->result,
          VAR_20->reply_payload_rcv_len);
 return VAR_26;
}
