
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {int fc_myDID; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_node_rrq {size_t xritag; int rxid; struct lpfc_nodelist* ndlp; } ;
struct TYPE_4__ {struct lpfc_node_rrq* rrq; } ;
struct lpfc_iocbq {int iocb_cmpl; TYPE_2__ context_un; scalar_t__ context2; } ;
struct TYPE_3__ {int * xri_ids; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct RRQ {void* rrq_exchg; void* rrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (int ,struct RRQ*,int ) ;
 void* FUNC_2 (void*) ;
 int VAR_4 ;
 int FUNC_3 (struct lpfc_vport*,int ,char*,int ,size_t,int ) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_5 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 int FUNC_6 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(struct lpfc_vport *VAR_8, struct lpfc_nodelist *VAR_9,
   uint32_t VAR_10, struct lpfc_node_rrq *VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_8->phba;
 struct RRQ *VAR_13;
 struct lpfc_iocbq *VAR_14;
 uint8_t *VAR_15;
 uint16_t VAR_16;
 int VAR_17;


 if (VAR_9 != VAR_11->ndlp)
  VAR_9 = VAR_11->ndlp;
 if (!VAR_9 || !FUNC_0(VAR_9))
  return 1;


 VAR_16 = (sizeof(uint32_t) + sizeof(struct RRQ));
 VAR_14 = FUNC_5(VAR_8, 1, VAR_16, 0, VAR_9, VAR_10,
         VAR_0);
 if (!VAR_14)
  return 1;

 VAR_15 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_14->context2)->virt);


 *((uint32_t *) (VAR_15)) = VAR_0;
 VAR_15 += sizeof(uint32_t);
 VAR_13 = (struct RRQ *) VAR_15;

 FUNC_1(VAR_6, VAR_13, VAR_12->sli4_hba.xri_ids[VAR_11->xritag]);
 FUNC_1(VAR_7, VAR_13, VAR_11->rxid);
 FUNC_1(VAR_5, VAR_13, VAR_8->fc_myDID);
 VAR_13->rrq = FUNC_2(VAR_13->rrq);
 VAR_13->rrq_exchg = FUNC_2(VAR_13->rrq_exchg);


 FUNC_3(VAR_8, VAR_2,
  "Issue RRQ:     did:x%x",
  VAR_10, VAR_11->xritag, VAR_11->rxid);
 VAR_14->context_un.rrq = VAR_11;
 VAR_14->iocb_cmpl = VAR_4;
 VAR_17 = FUNC_6(VAR_12, VAR_3, VAR_14, 0);

 if (VAR_17 == VAR_1) {
  FUNC_4(VAR_12, VAR_14);
  return 1;
 }
 return 0;
}
