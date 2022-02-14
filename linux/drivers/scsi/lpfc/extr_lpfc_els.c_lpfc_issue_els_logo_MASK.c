
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {int fc_portname; int fc_myDID; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_prev_state; int nlp_DID; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; } ;
struct TYPE_2__ {int elsXmitLOGO; } ;
struct lpfc_hba {TYPE_1__ fc_stat; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_iocbq* FUNC_4 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 struct Scsi_Host* FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10(struct lpfc_vport *VAR_8, struct lpfc_nodelist *VAR_9,
      uint8_t VAR_10)
{
 struct Scsi_Host *VAR_11 = FUNC_5(VAR_8);
 struct lpfc_hba *VAR_12 = VAR_8->phba;
 struct lpfc_iocbq *VAR_13;
 uint8_t *VAR_14;
 uint16_t VAR_15;
 int VAR_16;

 FUNC_8(VAR_11->host_lock);
 if (VAR_9->nlp_flag & VAR_5) {
  FUNC_9(VAR_11->host_lock);
  return 0;
 }
 FUNC_9(VAR_11->host_lock);

 VAR_15 = (2 * sizeof(uint32_t)) + sizeof(struct lpfc_name);
 VAR_13 = FUNC_4(VAR_8, 1, VAR_15, VAR_10, VAR_9,
         VAR_9->nlp_DID, VAR_0);
 if (!VAR_13)
  return 1;

 VAR_14 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_13->context2)->virt);
 *((uint32_t *) (VAR_14)) = VAR_0;
 VAR_14 += sizeof(uint32_t);


 *((uint32_t *) (VAR_14)) = FUNC_0(VAR_8->fc_myDID);
 VAR_14 += sizeof(uint32_t);
 FUNC_7(VAR_14, &VAR_8->fc_portname, sizeof(struct lpfc_name));

 FUNC_1(VAR_8, VAR_2,
  "Issue LOGO:      did:x%x",
  VAR_9->nlp_DID, 0, 0);

 VAR_12->fc_stat.elsXmitLOGO++;
 VAR_13->iocb_cmpl = VAR_7;
 FUNC_8(VAR_11->host_lock);
 VAR_9->nlp_flag |= VAR_5;
 VAR_9->nlp_flag &= ~VAR_4;
 FUNC_9(VAR_11->host_lock);
 VAR_16 = FUNC_6(VAR_12, VAR_3, VAR_13, 0);
 if (VAR_16 == VAR_1) {
  FUNC_8(VAR_11->host_lock);
  VAR_9->nlp_flag &= ~VAR_5;
  FUNC_9(VAR_11->host_lock);
  FUNC_2(VAR_12, VAR_13);
  return 1;
 }

 FUNC_8(VAR_11->host_lock);
 VAR_9->nlp_prev_state = VAR_9->nlp_state;
 FUNC_9(VAR_11->host_lock);
 FUNC_3(VAR_8, VAR_9, VAR_6);
 return 0;
}
