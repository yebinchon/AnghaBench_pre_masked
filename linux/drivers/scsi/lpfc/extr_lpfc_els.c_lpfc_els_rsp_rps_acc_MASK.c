
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_nodelist {int nlp_rpi; int nlp_state; int nlp_flag; int nlp_DID; int vport; } ;
struct TYPE_17__ {int ox_id; } ;
struct TYPE_18__ {TYPE_2__ rcvsli3; } ;
struct TYPE_14__ {int ulpContext; TYPE_3__ unsli3; } ;
struct lpfc_iocbq {int iocb_cmpl; TYPE_10__ iocb; int iotag; scalar_t__ context2; } ;
struct TYPE_21__ {int elsXmitACC; } ;
struct lpfc_hba {scalar_t__ fc_topology; TYPE_6__ fc_stat; TYPE_12__* pport; int mbox_mem_pool; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_19__ {int crcCnt; int invalidXmitWord; int primSeqErrCnt; int lossSignalCnt; int lossSyncCnt; int linkFailureCnt; } ;
struct TYPE_20__ {TYPE_4__ varRdLnk; } ;
struct TYPE_23__ {TYPE_5__ un; scalar_t__ mbxStatus; } ;
struct TYPE_16__ {TYPE_8__ mb; } ;
struct TYPE_24__ {int * ctx_buf; int * ctx_ndlp; TYPE_1__ u; } ;
struct TYPE_22__ {void* crcCnt; void* invalidXmitWord; void* primSeqErrCnt; void* lossSignalCnt; void* lossSyncCnt; void* linkFailureCnt; int portStatus; scalar_t__ rsvd1; } ;
struct TYPE_15__ {int fc_flag; } ;
typedef TYPE_7__ RPS_RSP ;
typedef TYPE_8__ MAILBOX_t ;
typedef TYPE_9__ LPFC_MBOXQ_t ;
typedef TYPE_10__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_8 ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 struct lpfc_iocbq* FUNC_4 (TYPE_12__*,int ,int,int ,struct lpfc_nodelist*,int ,int) ;
 int FUNC_5 (int ,int ,int ,char*,int ,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_7 (TYPE_9__*,int ) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_9, LPFC_MBOXQ_t *VAR_10)
{
 MAILBOX_t *VAR_11;
 IOCB_t *VAR_12;
 RPS_RSP *VAR_13;
 uint8_t *VAR_14;
 struct lpfc_iocbq *VAR_15;
 struct lpfc_nodelist *VAR_16;
 uint16_t VAR_17;
 uint16_t VAR_18;
 uint16_t VAR_19;
 uint32_t VAR_20;

 VAR_11 = &VAR_10->u.mb;

 VAR_16 = (struct lpfc_nodelist *)VAR_10->ctx_ndlp;
 VAR_19 = (uint16_t)((unsigned long)(VAR_10->ctx_buf) & 0xffff);
 VAR_18 = (uint16_t)(((unsigned long)(VAR_10->ctx_buf) >> 16) & 0xffff);
 VAR_10->ctx_ndlp = ((void*)0);
 VAR_10->ctx_buf = ((void*)0);

 if (VAR_11->mbxStatus) {
  FUNC_7(VAR_10, VAR_9->mbox_mem_pool);
  return;
 }

 VAR_20 = sizeof(RPS_RSP) + sizeof(uint32_t);
 FUNC_7(VAR_10, VAR_9->mbox_mem_pool);
 VAR_15 = FUNC_4(VAR_9->pport, 0, VAR_20,
         VAR_8, VAR_16,
         VAR_16->nlp_DID, VAR_0);


 FUNC_3(VAR_16);

 if (!VAR_15)
  return;

 VAR_12 = &VAR_15->iocb;
 VAR_12->ulpContext = VAR_19;
 VAR_12->unsli3.rcvsli3.ox_id = VAR_18;

 VAR_14 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_15->context2)->virt);
 *((uint32_t *) (VAR_14)) = VAR_0;
 VAR_14 += sizeof(uint32_t);
 VAR_13 = (RPS_RSP *)VAR_14;

 if (VAR_9->fc_topology != VAR_6)
  VAR_17 = 0x10;
 else
  VAR_17 = 0x8;
 if (VAR_9->pport->fc_flag & VAR_1)
  VAR_17 |= 0x4;

 VAR_13->rsvd1 = 0;
 VAR_13->portStatus = FUNC_0(VAR_17);
 VAR_13->linkFailureCnt = FUNC_1(VAR_11->un.varRdLnk.linkFailureCnt);
 VAR_13->lossSyncCnt = FUNC_1(VAR_11->un.varRdLnk.lossSyncCnt);
 VAR_13->lossSignalCnt = FUNC_1(VAR_11->un.varRdLnk.lossSignalCnt);
 VAR_13->primSeqErrCnt = FUNC_1(VAR_11->un.varRdLnk.primSeqErrCnt);
 VAR_13->invalidXmitWord = FUNC_1(VAR_11->un.varRdLnk.invalidXmitWord);
 VAR_13->crcCnt = FUNC_1(VAR_11->un.varRdLnk.crcCnt);

 FUNC_5(VAR_16->vport, VAR_3, VAR_4,
    "0118 Xmit ELS RPS ACC response tag x%x xri x%x, "
    "did x%x, nlp_flag x%x, nlp_state x%x, rpi x%x\n",
    VAR_15->iotag, VAR_15->iocb.ulpContext,
    VAR_16->nlp_DID, VAR_16->nlp_flag, VAR_16->nlp_state,
    VAR_16->nlp_rpi);
 VAR_15->iocb_cmpl = VAR_7;
 VAR_9->fc_stat.elsXmitACC++;
 if (FUNC_6(VAR_9, VAR_5, VAR_15, 0) == VAR_2)
  FUNC_2(VAR_9, VAR_15);
 return;
}
