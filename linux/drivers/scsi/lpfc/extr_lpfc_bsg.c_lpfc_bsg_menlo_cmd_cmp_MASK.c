
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct menlo_response {int xri; } ;
struct TYPE_11__ {unsigned int bdeSize; } ;
struct TYPE_12__ {TYPE_4__ bdl; } ;
struct TYPE_13__ {int* ulpWord; TYPE_5__ genreq64; } ;
struct TYPE_14__ {scalar_t__ ulpStatus; TYPE_6__ un; int ulpContext; } ;
struct lpfc_iocbq {TYPE_7__ iocb; struct lpfc_dmabuf* context3; struct lpfc_dmabuf* context2; struct lpfc_dmabuf* context1; } ;
struct lpfc_hba {int ct_ev_lock; } ;
struct lpfc_bsg_menlo {struct lpfc_dmabuf* rmp; } ;
struct TYPE_8__ {struct lpfc_bsg_menlo menlo; } ;
struct lpfc_dmabuf {int phys; int virt; struct bsg_job* set_job; TYPE_1__ context_un; } ;
struct TYPE_9__ {scalar_t__ vendor_rsp; } ;
struct TYPE_10__ {TYPE_2__ vendor_reply; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; TYPE_3__ reply_data; } ;
struct bsg_job_data {int phys; int virt; struct bsg_job* set_job; TYPE_1__ context_un; } ;
struct bsg_job {int reply_payload; int * dd_data; struct fc_bsg_reply* reply; } ;
typedef TYPE_7__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bsg_job*,int,int ) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_dmabuf*,int *,unsigned int,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_5,
   struct lpfc_iocbq *VAR_6,
   struct lpfc_iocbq *VAR_7)
{
 struct bsg_job_data *VAR_8;
 struct bsg_job *VAR_9;
 struct fc_bsg_reply *VAR_10;
 IOCB_t *VAR_11;
 struct lpfc_dmabuf *VAR_12, *VAR_13, *VAR_14;
 struct lpfc_bsg_menlo *VAR_15;
 unsigned long VAR_16;
 struct menlo_response *VAR_17;
 unsigned int VAR_18;
 int VAR_19 = 0;

 VAR_8 = VAR_6->context1;
 VAR_13 = VAR_6->context2;
 VAR_12 = VAR_6->context3;
 VAR_15 = &VAR_8->context_un.menlo;
 VAR_14 = VAR_15->rmp;
 VAR_11 = &VAR_7->iocb;


 FUNC_6(&VAR_5->ct_ev_lock, VAR_16);
 VAR_9 = VAR_8->set_job;
 if (VAR_9) {
  VAR_10 = VAR_9->reply;

  VAR_9->dd_data = ((void*)0);
 }
 FUNC_7(&VAR_5->ct_ev_lock, VAR_16);



 if (VAR_9) {





  VAR_17 = (struct menlo_response *)
   VAR_10->reply_data.vendor_reply.vendor_rsp;
  VAR_17->xri = VAR_11->ulpContext;
  if (VAR_11->ulpStatus) {
   if (VAR_11->ulpStatus == VAR_4) {
    switch (VAR_11->un.ulpWord[4] & VAR_3) {
    case 128:
     VAR_19 = -VAR_2;
     break;
    case 129:
     VAR_19 = -VAR_1;
     break;
    default:
     VAR_19 = -VAR_0;
     break;
    }
   } else {
    VAR_19 = -VAR_0;
   }
  } else {
   VAR_18 = VAR_11->un.genreq64.bdl.bdeSize;
   VAR_10->reply_payload_rcv_len =
    FUNC_2(VAR_14, &VAR_9->reply_payload,
         VAR_18, 0);
  }

 }

 FUNC_5(VAR_5, VAR_6);
 FUNC_3(VAR_5, VAR_13);
 FUNC_3(VAR_5, VAR_14);
 FUNC_4(VAR_5, VAR_12->virt, VAR_12->phys);
 FUNC_1(VAR_12);
 FUNC_1(VAR_8);



 if (VAR_9) {
  VAR_10->result = VAR_19;
  FUNC_0(VAR_9, VAR_10->result,
          VAR_10->reply_payload_rcv_len);
 }

 return;
}
