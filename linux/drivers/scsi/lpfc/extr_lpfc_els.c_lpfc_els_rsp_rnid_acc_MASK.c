
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


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {int fc_portname; int fc_nodename; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_DID; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_8__ {int ox_id; } ;
struct TYPE_9__ {TYPE_1__ rcvsli3; } ;
struct TYPE_14__ {int ulpContext; TYPE_2__ unsli3; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; TYPE_7__ iocb; int iotag; int retry; } ;
struct TYPE_12__ {int elsXmitACC; } ;
struct lpfc_hba {TYPE_5__ fc_stat; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_10__ {int attachedNodes; int physPort; int unitType; int portName; } ;
struct TYPE_11__ {TYPE_3__ topologyDisc; } ;
struct TYPE_13__ {int Format; int CommonLen; int SpecificLen; TYPE_4__ un; int nodeName; int portName; } ;
typedef int RNID_TOP_DISC ;
typedef TYPE_6__ RNID ;
typedef TYPE_7__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_vport*,int ,int,int ,struct lpfc_nodelist*,int ,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,int ) ;
 int FUNC_4 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_vport *VAR_8, uint8_t VAR_9,
        struct lpfc_iocbq *VAR_10, struct lpfc_nodelist *VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_8->phba;
 RNID *VAR_13;
 IOCB_t *VAR_14, *VAR_15;
 struct lpfc_iocbq *VAR_16;
 uint8_t *VAR_17;
 uint16_t VAR_18;
 int VAR_19;

 VAR_18 = sizeof(uint32_t) + sizeof(uint32_t)
     + (2 * sizeof(struct lpfc_name));
 if (VAR_9)
  VAR_18 += sizeof(RNID_TOP_DISC);

 VAR_16 = FUNC_2(VAR_8, 0, VAR_18, VAR_10->retry, VAR_11,
         VAR_11->nlp_DID, VAR_0);
 if (!VAR_16)
  return 1;

 VAR_14 = &VAR_16->iocb;
 VAR_15 = &VAR_10->iocb;
 VAR_14->ulpContext = VAR_15->ulpContext;
 VAR_14->unsli3.rcvsli3.ox_id = VAR_15->unsli3.rcvsli3.ox_id;


 FUNC_3(VAR_8, VAR_2, VAR_3,
    "0132 Xmit RNID ACC response tag x%x xri x%x\n",
    VAR_16->iotag, VAR_16->iocb.ulpContext);
 VAR_17 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_16->context2)->virt);
 *((uint32_t *) (VAR_17)) = VAR_0;
 VAR_17 += sizeof(uint32_t);

 FUNC_6(VAR_17, 0, sizeof(RNID));
 VAR_13 = (RNID *) (VAR_17);
 VAR_13->Format = VAR_9;
 VAR_13->CommonLen = (2 * sizeof(struct lpfc_name));
 FUNC_5(&VAR_13->portName, &VAR_8->fc_portname, sizeof(struct lpfc_name));
 FUNC_5(&VAR_13->nodeName, &VAR_8->fc_nodename, sizeof(struct lpfc_name));
 switch (VAR_9) {
 case 0:
  VAR_13->SpecificLen = 0;
  break;
 case 128:
  VAR_13->SpecificLen = sizeof(RNID_TOP_DISC);
  FUNC_5(&VAR_13->un.topologyDisc.portName,
         &VAR_8->fc_portname, sizeof(struct lpfc_name));
  VAR_13->un.topologyDisc.unitType = VAR_6;
  VAR_13->un.topologyDisc.physPort = 0;
  VAR_13->un.topologyDisc.attachedNodes = 0;
  break;
 default:
  VAR_13->CommonLen = 0;
  VAR_13->SpecificLen = 0;
  break;
 }

 FUNC_0(VAR_8, VAR_4,
  "Issue ACC RNID:  did:x%x flg:x%x",
  VAR_11->nlp_DID, VAR_11->nlp_flag, 0);

 VAR_12->fc_stat.elsXmitACC++;
 VAR_16->iocb_cmpl = VAR_7;

 VAR_19 = FUNC_4(VAR_12, VAR_5, VAR_16, 0);
 if (VAR_19 == VAR_1) {
  FUNC_1(VAR_12, VAR_16);
  return 1;
 }
 return 0;
}
