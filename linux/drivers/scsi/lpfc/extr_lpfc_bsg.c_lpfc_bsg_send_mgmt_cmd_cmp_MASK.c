
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_nodelist {int dummy; } ;
struct TYPE_7__ {unsigned int bdeSize; } ;
struct TYPE_8__ {TYPE_2__ bdl; } ;
struct TYPE_9__ {int* ulpWord; TYPE_3__ genreq64; } ;
struct TYPE_10__ {scalar_t__ ulpStatus; TYPE_4__ un; } ;
struct lpfc_iocbq {TYPE_5__ iocb; struct lpfc_dmabuf* context3; struct lpfc_dmabuf* context2; int iocb_flag; struct lpfc_dmabuf* context1; } ;
struct lpfc_hba {int hbalock; int ct_ev_lock; } ;
struct lpfc_bsg_iocb {struct lpfc_dmabuf* rmp; struct lpfc_nodelist* ndlp; } ;
struct TYPE_6__ {struct lpfc_bsg_iocb iocb; } ;
struct lpfc_dmabuf {int phys; int virt; TYPE_1__ context_un; struct bsg_job* set_job; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; } ;
struct bsg_job_data {int phys; int virt; TYPE_1__ context_un; struct bsg_job* set_job; } ;
struct bsg_job {int reply_payload; int * dd_data; struct fc_bsg_reply* reply; } ;
typedef TYPE_5__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bsg_job*,int,int ) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_dmabuf*,int *,unsigned int,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ) ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_9(struct lpfc_hba *VAR_6,
   struct lpfc_iocbq *VAR_7,
   struct lpfc_iocbq *VAR_8)
{
 struct bsg_job_data *VAR_9;
 struct bsg_job *VAR_10;
 struct fc_bsg_reply *VAR_11;
 IOCB_t *VAR_12;
 struct lpfc_dmabuf *VAR_13, *VAR_14, *VAR_15;
 struct lpfc_nodelist *VAR_16;
 struct lpfc_bsg_iocb *VAR_17;
 unsigned long VAR_18;
 unsigned int VAR_19;
 int VAR_20 = 0;

 VAR_9 = VAR_7->context1;


 FUNC_7(&VAR_6->ct_ev_lock, VAR_18);
 VAR_10 = VAR_9->set_job;
 if (VAR_10) {
  VAR_11 = VAR_10->reply;

  VAR_10->dd_data = ((void*)0);
 }
 FUNC_8(&VAR_6->ct_ev_lock, VAR_18);


 FUNC_7(&VAR_6->hbalock, VAR_18);
 VAR_7->iocb_flag &= ~VAR_5;
 FUNC_8(&VAR_6->hbalock, VAR_18);

 VAR_17 = &VAR_9->context_un.iocb;
 VAR_16 = VAR_17->ndlp;
 VAR_15 = VAR_17->rmp;
 VAR_14 = VAR_7->context2;
 VAR_13 = VAR_7->context3;
 VAR_12 = &VAR_8->iocb;



 if (VAR_10) {
  if (VAR_12->ulpStatus) {
   if (VAR_12->ulpStatus == VAR_4) {
    switch (VAR_12->un.ulpWord[4] & VAR_3) {
    case 128:
     VAR_20 = -VAR_2;
     break;
    case 129:
     VAR_20 = -VAR_1;
     break;
    default:
     VAR_20 = -VAR_0;
     break;
    }
   } else {
    VAR_20 = -VAR_0;
   }
  } else {
   VAR_19 = VAR_12->un.genreq64.bdl.bdeSize;
   VAR_11->reply_payload_rcv_len =
    FUNC_2(VAR_15, &VAR_10->reply_payload,
         VAR_19, 0);
  }
 }

 FUNC_3(VAR_6, VAR_14);
 FUNC_3(VAR_6, VAR_15);
 FUNC_4(VAR_6, VAR_13->virt, VAR_13->phys);
 FUNC_1(VAR_13);
 FUNC_6(VAR_6, VAR_7);
 FUNC_5(VAR_16);
 FUNC_1(VAR_9);



 if (VAR_10) {
  VAR_11->result = VAR_20;
  FUNC_0(VAR_10, VAR_11->result,
          VAR_11->reply_payload_rcv_len);
 }
 return;
}
