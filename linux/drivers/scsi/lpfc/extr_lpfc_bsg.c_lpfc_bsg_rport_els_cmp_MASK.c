
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef void* uint8_t ;
struct TYPE_12__ {struct lpfc_nodelist* ndlp; } ;
struct TYPE_13__ {TYPE_1__ iocb; } ;
struct lpfc_nodelist {struct bsg_job* set_job; TYPE_2__ context_un; } ;
struct TYPE_15__ {unsigned int bdeSize; } ;
struct TYPE_16__ {TYPE_4__ bdl; } ;
struct TYPE_18__ {int * ulpWord; TYPE_5__ elsreq64; } ;
struct TYPE_11__ {scalar_t__ ulpStatus; TYPE_7__ un; } ;
struct lpfc_iocbq {scalar_t__ context2; TYPE_10__ iocb; int iocb_flag; struct lpfc_nodelist* context1; } ;
struct lpfc_hba {int hbalock; int ct_ev_lock; } ;
struct TYPE_14__ {scalar_t__ next; } ;
struct lpfc_dmabuf {int virt; TYPE_3__ list; } ;
struct TYPE_20__ {void* vendor_unique; void* reason_explanation; void* reason_code; void* action; } ;
struct fc_bsg_ctels_reply {TYPE_9__ rjt_data; int status; } ;
struct TYPE_19__ {struct fc_bsg_ctels_reply ctels_reply; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; TYPE_8__ reply_data; } ;
struct bsg_job_data {struct bsg_job* set_job; TYPE_2__ context_un; } ;
struct TYPE_17__ {int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_6__ reply_payload; int * dd_data; struct fc_bsg_reply* reply; } ;
typedef TYPE_10__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bsg_job*,int,int) ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_5,
   struct lpfc_iocbq *VAR_6,
   struct lpfc_iocbq *VAR_7)
{
 struct bsg_job_data *VAR_8;
 struct bsg_job *VAR_9;
 struct fc_bsg_reply *VAR_10;
 IOCB_t *VAR_11;
 struct lpfc_nodelist *VAR_12;
 struct lpfc_dmabuf *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 struct fc_bsg_ctels_reply *VAR_15;
 uint8_t *VAR_16;
 unsigned long VAR_17;
 unsigned int VAR_18;
 int VAR_19 = 0;

 VAR_8 = VAR_6->context1;
 VAR_12 = VAR_8->context_un.iocb.ndlp;
 VAR_6->context1 = VAR_12;


 FUNC_5(&VAR_5->ct_ev_lock, VAR_17);
 VAR_9 = VAR_8->set_job;
 if (VAR_9) {
  VAR_10 = VAR_9->reply;

  VAR_9->dd_data = ((void*)0);
 }
 FUNC_6(&VAR_5->ct_ev_lock, VAR_17);


 FUNC_5(&VAR_5->hbalock, VAR_17);
 VAR_6->iocb_flag &= ~VAR_4;
 FUNC_6(&VAR_5->hbalock, VAR_17);

 VAR_11 = &VAR_7->iocb;
 VAR_13 = (struct lpfc_dmabuf *)VAR_6->context2;
 VAR_14 = (struct lpfc_dmabuf *)VAR_13->list.next;





 if (VAR_9) {
  if (VAR_11->ulpStatus == VAR_3) {
   VAR_18 = VAR_11->un.elsreq64.bdl.bdeSize;
   VAR_10->reply_payload_rcv_len =
    FUNC_4(VAR_9->reply_payload.sg_list,
          VAR_9->reply_payload.sg_cnt,
          VAR_14->virt,
          VAR_18);
  } else if (VAR_11->ulpStatus == VAR_2) {
   VAR_10->reply_payload_rcv_len =
    sizeof(struct fc_bsg_ctels_reply);

   VAR_16 = (uint8_t *)&VAR_11->un.ulpWord[4];
   VAR_15 = &VAR_10->reply_data.ctels_reply;
   VAR_15->status = VAR_1;
   VAR_15->rjt_data.action = VAR_16[3];
   VAR_15->rjt_data.reason_code = VAR_16[2];
   VAR_15->rjt_data.reason_explanation = VAR_16[1];
   VAR_15->rjt_data.vendor_unique = VAR_16[0];
  } else {
   VAR_19 = -VAR_0;
  }
 }

 FUNC_3(VAR_12);
 FUNC_2(VAR_5, VAR_6);
 FUNC_1(VAR_8);



 if (VAR_9) {
  VAR_10->result = VAR_19;
  FUNC_0(VAR_9, VAR_10->result,
          VAR_10->reply_payload_rcv_len);
 }
 return;
}
