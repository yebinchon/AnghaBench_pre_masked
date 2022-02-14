
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {int fc_portname; int fc_myDID; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_DID; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;


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
FUNC_9(struct lpfc_vport *VAR_6, struct lpfc_nodelist *VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_4(VAR_6);
 struct lpfc_hba *VAR_9 = VAR_6->phba;
 struct lpfc_iocbq *VAR_10;
 uint8_t *VAR_11;
 uint16_t VAR_12;

 VAR_12 = 2 * sizeof(uint32_t) + sizeof(struct lpfc_name);
 VAR_10 = FUNC_3(VAR_6, 1, VAR_12, 0, VAR_7, VAR_7->nlp_DID,
         VAR_0);
 if (!VAR_10)
  return 1;

 VAR_11 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_10->context2)->virt);
 *((uint32_t *) (VAR_11)) = VAR_0;
 VAR_11 += sizeof(uint32_t);


 *((uint32_t *) (VAR_11)) = FUNC_0(VAR_6->fc_myDID);
 VAR_11 += sizeof(uint32_t);
 FUNC_6(VAR_11, &VAR_6->fc_portname, sizeof(struct lpfc_name));

 FUNC_1(VAR_6, VAR_2,
  "Issue LOGO npiv  did:x%x flg:x%x",
  VAR_7->nlp_DID, VAR_7->nlp_flag, 0);

 VAR_10->iocb_cmpl = VAR_5;
 FUNC_7(VAR_8->host_lock);
 VAR_7->nlp_flag |= VAR_4;
 FUNC_8(VAR_8->host_lock);
 if (FUNC_5(VAR_9, VAR_3, VAR_10, 0) ==
     VAR_1) {
  FUNC_7(VAR_8->host_lock);
  VAR_7->nlp_flag &= ~VAR_4;
  FUNC_8(VAR_8->host_lock);
  FUNC_2(VAR_9, VAR_10);
  return 1;
 }
 return 0;
}
