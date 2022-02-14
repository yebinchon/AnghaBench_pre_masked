
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {scalar_t__ vendorUnique; int lsRjtRsnCodeExp; int lsRjtRsnCode; scalar_t__ lsRjtRsvd0; } ;
struct TYPE_12__ {int lsRjtError; TYPE_5__ b; } ;
struct ls_rjt {TYPE_6__ un; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_rpi; int nlp_state; int nlp_flag; int nlp_DID; int vport; } ;
struct TYPE_7__ {int ox_id; } ;
struct TYPE_8__ {TYPE_1__ rcvsli3; } ;
struct TYPE_9__ {int ulpContext; TYPE_2__ unsli3; } ;
struct lpfc_iocbq {int iocb_cmpl; TYPE_3__ iocb; int iotag; scalar_t__ context2; } ;
struct TYPE_10__ {int elsXmitACC; } ;
struct lpfc_hba {int fc_ratov; int fc_edtov; TYPE_4__ fc_stat; scalar_t__ fc_edtovResol; int pport; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct RTV_RSP {int qtov; void* edtov; void* ratov; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct RTV_RSP*,int) ;
 void* FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int VAR_10 ;
 struct lpfc_iocbq* FUNC_4 (int ,int ,int,int ,struct lpfc_nodelist*,int ,int) ;
 int FUNC_5 (int ,int ,int ,char*,int ,int ,int ,int ,int ,int ,void*,void*,int) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_7(struct lpfc_vport *VAR_13, struct lpfc_iocbq *VAR_14,
   struct lpfc_nodelist *VAR_15)
{
 struct lpfc_hba *VAR_16 = VAR_13->phba;
 struct ls_rjt VAR_17;
 struct RTV_RSP *VAR_18;
 uint8_t *VAR_19;
 struct lpfc_iocbq *VAR_20;
 uint32_t VAR_21;


 if ((VAR_15->nlp_state != VAR_8) &&
     (VAR_15->nlp_state != VAR_7))

  goto reject_out;

 VAR_21 = sizeof(struct RTV_RSP) + sizeof(uint32_t);
 VAR_20 = FUNC_4(VAR_16->pport, 0, VAR_21,
         VAR_10, VAR_15,
         VAR_15->nlp_DID, VAR_0);

 if (!VAR_20)
  return 1;

 VAR_19 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_20->context2)->virt);
 *((uint32_t *) (VAR_19)) = VAR_0;
 VAR_19 += sizeof(uint32_t);


 VAR_20->iocb.ulpContext = VAR_14->iocb.ulpContext;
 VAR_20->iocb.unsli3.rcvsli3.ox_id = VAR_14->iocb.unsli3.rcvsli3.ox_id;

 VAR_18 = (struct RTV_RSP *)VAR_19;


 VAR_18->ratov = FUNC_1(VAR_16->fc_ratov * 1000);
 VAR_18->edtov = FUNC_1(VAR_16->fc_edtov);
 FUNC_0(VAR_11, VAR_18, VAR_16->fc_edtovResol ? 1 : 0);
 FUNC_0(VAR_12, VAR_18, 0);
 VAR_18->qtov = FUNC_1(VAR_18->qtov);


 FUNC_5(VAR_15->vport, VAR_2, VAR_3,
    "2875 Xmit ELS RTV ACC response tag x%x xri x%x, "
    "did x%x, nlp_flag x%x, nlp_state x%x, rpi x%x, "
    "Data: x%x x%x x%x\n",
    VAR_20->iotag, VAR_20->iocb.ulpContext,
    VAR_15->nlp_DID, VAR_15->nlp_flag, VAR_15->nlp_state,
    VAR_15->nlp_rpi,
   VAR_18->ratov, VAR_18->edtov, VAR_18->qtov);
 VAR_20->iocb_cmpl = VAR_9;
 VAR_16->fc_stat.elsXmitACC++;
 if (FUNC_6(VAR_16, VAR_4, VAR_20, 0) == VAR_1)
  FUNC_2(VAR_16, VAR_20);
 return 0;

reject_out:

 VAR_17.un.b.lsRjtRsvd0 = 0;
 VAR_17.un.b.lsRjtRsnCode = VAR_6;
 VAR_17.un.b.lsRjtRsnCodeExp = VAR_5;
 VAR_17.un.b.vendorUnique = 0;
 FUNC_3(VAR_13, VAR_17.un.lsRjtError, VAR_14, VAR_15, ((void*)0));
 return 0;
}
