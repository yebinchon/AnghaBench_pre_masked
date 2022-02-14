
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_hba {scalar_t__ link_state; int mbox_mem_pool; int hbalock; int link_flag; } ;
struct TYPE_11__ {scalar_t__ vendor_cmd; } ;
struct TYPE_12__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int result; scalar_t__ reply_payload_rcv_len; } ;
struct diag_mode_set {scalar_t__ type; int timeout; } ;
struct bsg_job {int request_len; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct TYPE_13__ {int link_flags; } ;
struct TYPE_14__ {TYPE_3__ varInitLnk; } ;
struct TYPE_15__ {scalar_t__ mbxStatus; void* mbxOwner; int mbxCommand; TYPE_4__ un; } ;
struct TYPE_16__ {TYPE_5__ mb; } ;
struct TYPE_17__ {TYPE_6__ u; } ;
typedef TYPE_7__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int FUNC_0 (struct bsg_job*,int,scalar_t__) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int,int) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_7__*,int ) ;
 TYPE_7__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct lpfc_hba *VAR_19, struct bsg_job *VAR_20)
{
 struct fc_bsg_request *VAR_21 = VAR_20->request;
 struct fc_bsg_reply *VAR_22 = VAR_20->reply;
 struct diag_mode_set *VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 LPFC_MBOXQ_t *VAR_26 = ((void*)0);
 int VAR_27 = VAR_16;
 int VAR_28 = 0;
 int VAR_29 = 0;


 VAR_22->reply_payload_rcv_len = 0;

 if (VAR_20->request_len < sizeof(struct fc_bsg_request) +
     sizeof(struct diag_mode_set)) {
  FUNC_3(VAR_19, VAR_8, VAR_9,
    "2738 Received DIAG MODE request size:%d "
    "below the minimum size:%d\n",
    VAR_20->request_len,
    (int)(sizeof(struct fc_bsg_request) +
    sizeof(struct diag_mode_set)));
  VAR_29 = -VAR_0;
  goto job_error;
 }

 VAR_29 = FUNC_1(VAR_19);
 if (VAR_29)
  goto job_error;


 VAR_23 = (struct diag_mode_set *)
  VAR_21->rqst_data.h_vendor.vendor_cmd;
 VAR_24 = VAR_23->type;
 VAR_25 = VAR_23->timeout * 100;

 VAR_26 = FUNC_5(VAR_19->mbox_mem_pool, VAR_6);
 if (!VAR_26) {
  VAR_29 = -VAR_2;
  goto loopback_mode_exit;
 }
 FUNC_7((void *)VAR_26, 0, sizeof(LPFC_MBOXQ_t));
 VAR_26->u.mb.mbxCommand = VAR_14;
 VAR_26->u.mb.mbxOwner = VAR_18;

 VAR_27 = FUNC_4(VAR_19, VAR_26, VAR_12);

 if ((VAR_27 == VAR_16) && (VAR_26->u.mb.mbxStatus == 0)) {

  VAR_28 = 0;
  while (VAR_19->link_state != VAR_11) {
   if (VAR_28++ > VAR_25) {
    VAR_29 = -VAR_3;
    goto loopback_mode_exit;
   }
   FUNC_8(10);
  }

  FUNC_7((void *)VAR_26, 0, sizeof(LPFC_MBOXQ_t));
  if (VAR_24 == VAR_7)
   VAR_26->u.mb.un.varInitLnk.link_flags = VAR_4;
  else
   VAR_26->u.mb.un.varInitLnk.link_flags =
    VAR_5;

  VAR_26->u.mb.mbxCommand = VAR_15;
  VAR_26->u.mb.mbxOwner = VAR_18;

  VAR_27 = FUNC_4(VAR_19, VAR_26,
           VAR_12);

  if ((VAR_27 != VAR_16) || (VAR_26->u.mb.mbxStatus))
   VAR_29 = -VAR_1;
  else {
   FUNC_9(&VAR_19->hbalock);
   VAR_19->link_flag |= VAR_13;
   FUNC_10(&VAR_19->hbalock);

   FUNC_8(100);

   VAR_28 = 0;
   while (VAR_19->link_state != VAR_10) {
    if (VAR_28++ > VAR_25) {
     VAR_29 = -VAR_3;
     break;
    }

    FUNC_8(10);
   }
  }

 } else
  VAR_29 = -VAR_1;

loopback_mode_exit:
 FUNC_2(VAR_19);




 if (VAR_26 && VAR_27 != VAR_17)
  FUNC_6(VAR_26, VAR_19->mbox_mem_pool);

job_error:

 VAR_22->result = VAR_29;

 if (VAR_29 == 0)
  FUNC_0(VAR_20, VAR_22->result,
          VAR_22->reply_payload_rcv_len);
 return VAR_29;
}
