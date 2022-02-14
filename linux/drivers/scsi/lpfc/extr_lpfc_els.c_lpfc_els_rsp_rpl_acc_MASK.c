
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {int portName; void* portID; scalar_t__ portNum; } ;
struct TYPE_12__ {TYPE_3__ port_num_blk; scalar_t__ index; void* listLen; } ;
struct lpfc_vport {int fc_myDID; TYPE_5__ fc_portname; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_rpi; int nlp_state; int nlp_flag; int nlp_DID; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_8__ {int ox_id; } ;
struct TYPE_9__ {TYPE_1__ rcvsli3; } ;
struct TYPE_13__ {int ulpContext; TYPE_2__ unsli3; } ;
struct lpfc_iocbq {int iocb_cmpl; TYPE_6__ iocb; int iotag; scalar_t__ context2; int retry; } ;
struct TYPE_11__ {int elsXmitACC; } ;
struct lpfc_hba {TYPE_4__ fc_stat; } ;
struct lpfc_dmabuf {int * virt; } ;
typedef TYPE_5__ RPL_RSP ;
typedef TYPE_6__ IOCB_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_3 (struct lpfc_vport*,int ,int,int ,struct lpfc_nodelist*,int ,int ) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_6 (int *,TYPE_5__*,int) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_vport *VAR_6, uint16_t VAR_7,
       struct lpfc_iocbq *VAR_8, struct lpfc_nodelist *VAR_9)
{
 struct lpfc_hba *VAR_10 = VAR_6->phba;
 IOCB_t *VAR_11, *VAR_12;
 RPL_RSP VAR_13;
 struct lpfc_iocbq *VAR_14;
 uint8_t *VAR_15;

 VAR_14 = FUNC_3(VAR_6, 0, VAR_7, VAR_8->retry, VAR_9,
         VAR_9->nlp_DID, VAR_0);

 if (!VAR_14)
  return 1;

 VAR_11 = &VAR_14->iocb;
 VAR_12 = &VAR_8->iocb;
 VAR_11->ulpContext = VAR_12->ulpContext;
 VAR_11->unsli3.rcvsli3.ox_id = VAR_12->unsli3.rcvsli3.ox_id;

 VAR_15 = (((struct lpfc_dmabuf *) VAR_14->context2)->virt);
 *((uint32_t *) (VAR_15)) = VAR_0;
 VAR_15 += sizeof(uint16_t);
 *((uint16_t *)(VAR_15)) = FUNC_0(VAR_7);
 VAR_15 += sizeof(uint16_t);


 VAR_13.listLen = FUNC_1(1);
 VAR_13.index = 0;
 VAR_13.port_num_blk.portNum = 0;
 VAR_13.port_num_blk.portID = FUNC_1(VAR_6->fc_myDID);
 FUNC_6(&VAR_13.port_num_blk.portName, &VAR_6->fc_portname,
     sizeof(struct lpfc_name));
 FUNC_6(VAR_15, &VAR_13, VAR_7 - sizeof(uint32_t));

 FUNC_4(VAR_6, VAR_2, VAR_3,
    "0120 Xmit ELS RPL ACC response tag x%x "
    "xri x%x, did x%x, nlp_flag x%x, nlp_state x%x, "
    "rpi x%x\n",
    VAR_14->iotag, VAR_14->iocb.ulpContext,
    VAR_9->nlp_DID, VAR_9->nlp_flag, VAR_9->nlp_state,
    VAR_9->nlp_rpi);
 VAR_14->iocb_cmpl = VAR_5;
 VAR_10->fc_stat.elsXmitACC++;
 if (FUNC_5(VAR_10, VAR_4, VAR_14, 0) ==
     VAR_1) {
  FUNC_2(VAR_10, VAR_14);
  return 1;
 }
 return 0;
}
