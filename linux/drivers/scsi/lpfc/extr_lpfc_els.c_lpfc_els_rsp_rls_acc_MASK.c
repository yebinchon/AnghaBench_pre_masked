
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


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct lpfc_nodelist {int nlp_rpi; int nlp_state; int nlp_flag; int nlp_DID; int vport; } ;
struct TYPE_13__ {void* ox_id; } ;
struct TYPE_14__ {TYPE_2__ rcvsli3; } ;
struct TYPE_20__ {void* ulpContext; TYPE_3__ unsli3; } ;
struct lpfc_iocbq {int iocb_cmpl; TYPE_9__ iocb; int iotag; scalar_t__ context2; } ;
struct TYPE_17__ {int elsXmitACC; } ;
struct lpfc_hba {TYPE_6__ fc_stat; int mbox_mem_pool; int pport; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct RLS_RSP {void* crcCnt; void* invalidXmitWord; void* primSeqErrCnt; void* lossSignalCnt; void* lossSyncCnt; void* linkFailureCnt; } ;
struct TYPE_15__ {int crcCnt; int invalidXmitWord; int primSeqErrCnt; int lossSignalCnt; int lossSyncCnt; int linkFailureCnt; } ;
struct TYPE_16__ {TYPE_4__ varRdLnk; } ;
struct TYPE_18__ {TYPE_5__ un; scalar_t__ mbxStatus; } ;
struct TYPE_12__ {TYPE_7__ mb; } ;
struct TYPE_19__ {int * ctx_ndlp; int * ctx_buf; TYPE_1__ u; } ;
typedef TYPE_7__ MAILBOX_t ;
typedef TYPE_8__ LPFC_MBOXQ_t ;
typedef TYPE_9__ IOCB_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_6 ;
 int FUNC_2 (struct lpfc_nodelist*) ;
 struct lpfc_iocbq* FUNC_3 (int ,int ,int,int ,struct lpfc_nodelist*,int ,int) ;
 int FUNC_4 (int ,int ,int ,char*,int ,void*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_6 (TYPE_8__*,int ) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_7, LPFC_MBOXQ_t *VAR_8)
{
 MAILBOX_t *VAR_9;
 IOCB_t *VAR_10;
 struct RLS_RSP *VAR_11;
 uint8_t *VAR_12;
 struct lpfc_iocbq *VAR_13;
 struct lpfc_nodelist *VAR_14;
 uint16_t VAR_15;
 uint16_t VAR_16;
 uint32_t VAR_17;

 VAR_9 = &VAR_8->u.mb;

 VAR_14 = (struct lpfc_nodelist *)VAR_8->ctx_ndlp;
 VAR_16 = (uint16_t)((unsigned long)(VAR_8->ctx_buf) & 0xffff);
 VAR_15 = (uint16_t)(((unsigned long)(VAR_8->ctx_buf) >> 16) & 0xffff);
 VAR_8->ctx_buf = ((void*)0);
 VAR_8->ctx_ndlp = ((void*)0);

 if (VAR_9->mbxStatus) {
  FUNC_6(VAR_8, VAR_7->mbox_mem_pool);
  return;
 }

 VAR_17 = sizeof(struct RLS_RSP) + sizeof(uint32_t);
 VAR_13 = FUNC_3(VAR_7->pport, 0, VAR_17,
         VAR_6, VAR_14,
         VAR_14->nlp_DID, VAR_0);


 FUNC_2(VAR_14);

 if (!VAR_13) {
  FUNC_6(VAR_8, VAR_7->mbox_mem_pool);
  return;
 }

 VAR_10 = &VAR_13->iocb;
 VAR_10->ulpContext = VAR_16;
 VAR_10->unsli3.rcvsli3.ox_id = VAR_15;

 VAR_12 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_13->context2)->virt);
 *((uint32_t *) (VAR_12)) = VAR_0;
 VAR_12 += sizeof(uint32_t);
 VAR_11 = (struct RLS_RSP *)VAR_12;

 VAR_11->linkFailureCnt = FUNC_0(VAR_9->un.varRdLnk.linkFailureCnt);
 VAR_11->lossSyncCnt = FUNC_0(VAR_9->un.varRdLnk.lossSyncCnt);
 VAR_11->lossSignalCnt = FUNC_0(VAR_9->un.varRdLnk.lossSignalCnt);
 VAR_11->primSeqErrCnt = FUNC_0(VAR_9->un.varRdLnk.primSeqErrCnt);
 VAR_11->invalidXmitWord = FUNC_0(VAR_9->un.varRdLnk.invalidXmitWord);
 VAR_11->crcCnt = FUNC_0(VAR_9->un.varRdLnk.crcCnt);
 FUNC_6(VAR_8, VAR_7->mbox_mem_pool);

 FUNC_4(VAR_14->vport, VAR_2, VAR_3,
    "2874 Xmit ELS RLS ACC response tag x%x xri x%x, "
    "did x%x, nlp_flag x%x, nlp_state x%x, rpi x%x\n",
    VAR_13->iotag, VAR_13->iocb.ulpContext,
    VAR_14->nlp_DID, VAR_14->nlp_flag, VAR_14->nlp_state,
    VAR_14->nlp_rpi);
 VAR_13->iocb_cmpl = VAR_5;
 VAR_7->fc_stat.elsXmitACC++;
 if (FUNC_5(VAR_7, VAR_4, VAR_13, 0) == VAR_1)
  FUNC_1(VAR_7, VAR_13);
}
