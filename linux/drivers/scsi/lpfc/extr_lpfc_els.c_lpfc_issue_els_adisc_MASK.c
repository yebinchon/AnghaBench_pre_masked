
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {int fc_myDID; int fc_nodename; int fc_portname; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_DID; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; } ;
struct TYPE_3__ {int elsXmitADISC; } ;
struct lpfc_hba {TYPE_1__ fc_stat; int fc_pref_ALPA; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_4__ {int DID; int nodeName; int portName; int hardAL_PA; } ;
typedef TYPE_2__ ADISC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_3 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 scalar_t__ FUNC_5 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct lpfc_vport *VAR_6, struct lpfc_nodelist *VAR_7,
       uint8_t VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_4(VAR_6);
 struct lpfc_hba *VAR_10 = VAR_6->phba;
 ADISC *VAR_11;
 struct lpfc_iocbq *VAR_12;
 uint8_t *VAR_13;
 uint16_t VAR_14;

 VAR_14 = (sizeof(uint32_t) + sizeof(ADISC));
 VAR_12 = FUNC_3(VAR_6, 1, VAR_14, VAR_8, VAR_7,
         VAR_7->nlp_DID, VAR_0);
 if (!VAR_12)
  return 1;

 VAR_13 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_12->context2)->virt);


 *((uint32_t *) (VAR_13)) = VAR_0;
 VAR_13 += sizeof(uint32_t);


 VAR_11 = (ADISC *) VAR_13;
 VAR_11->hardAL_PA = VAR_10->fc_pref_ALPA;
 FUNC_6(&VAR_11->portName, &VAR_6->fc_portname, sizeof(struct lpfc_name));
 FUNC_6(&VAR_11->nodeName, &VAR_6->fc_nodename, sizeof(struct lpfc_name));
 VAR_11->DID = FUNC_0(VAR_6->fc_myDID);

 FUNC_1(VAR_6, VAR_2,
  "Issue ADISC:     did:x%x",
  VAR_7->nlp_DID, 0, 0);

 VAR_10->fc_stat.elsXmitADISC++;
 VAR_12->iocb_cmpl = VAR_5;
 FUNC_7(VAR_9->host_lock);
 VAR_7->nlp_flag |= VAR_4;
 FUNC_8(VAR_9->host_lock);
 if (FUNC_5(VAR_10, VAR_3, VAR_12, 0) ==
     VAR_1) {
  FUNC_7(VAR_9->host_lock);
  VAR_7->nlp_flag &= ~VAR_4;
  FUNC_8(VAR_9->host_lock);
  FUNC_2(VAR_10, VAR_12);
  return 1;
 }
 return 0;
}
