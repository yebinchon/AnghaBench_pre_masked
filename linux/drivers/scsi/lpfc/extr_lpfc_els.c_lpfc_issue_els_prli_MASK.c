
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
typedef int u32 ;
struct lpfc_vport {int fc_flag; int fc_prli_sent; scalar_t__ cfg_first_burst_size; scalar_t__ nvmei_support; struct lpfc_hba* phba; } ;
struct lpfc_nvme_prli {void* word4; void* word1; } ;
struct lpfc_nodelist {int nlp_fc4_type; int nlp_type; int nlp_flag; int fc4_prli_sent; int nlp_DID; scalar_t__ nvme_fb_size; int nlp_fcp_info; } ;
struct lpfc_iocbq {int iocb_cmpl; int iocb_flag; scalar_t__ context2; } ;
struct TYPE_7__ {int elsXmitPRLI; } ;
struct TYPE_5__ {int feaLevelHigh; } ;
struct TYPE_6__ {TYPE_1__ rev; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_3__ fc_stat; scalar_t__ nvmet_support; scalar_t__ cfg_nvme_enable_fb; scalar_t__ nsler; TYPE_2__ vpd; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_8__ {int ConfmComplAllowed; int Retry; int TaskRetryIdReq; int estabImagePair; int readXferRdyDis; int writeXferRdyDis; int initiatorFunc; int prliType; } ;
typedef TYPE_4__ PRLI ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ,struct lpfc_nvme_prli*,int) ;
 void* FUNC_1 (void*) ;
 int VAR_25 ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int *,int ) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_5 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,int,...) ;
 struct Scsi_Host* FUNC_7 (struct lpfc_vport*) ;
 scalar_t__ FUNC_8 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_9 (int *,int ,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

int
FUNC_12(struct lpfc_vport *VAR_34, struct lpfc_nodelist *VAR_35,
      uint8_t VAR_36)
{
 struct Scsi_Host *VAR_37 = FUNC_7(VAR_34);
 struct lpfc_hba *VAR_38 = VAR_34->phba;
 PRLI *VAR_39;
 struct lpfc_nvme_prli *VAR_40;
 struct lpfc_iocbq *VAR_41;
 uint8_t *VAR_42;
 uint16_t VAR_43;
 u32 VAR_44, VAR_45;







 if (VAR_38->sli_rev == VAR_11 &&
     VAR_34->fc_flag & VAR_2 &&
     VAR_34->nvmei_support)
  VAR_35->nlp_fc4_type |= VAR_14;
 VAR_44 = VAR_35->nlp_fc4_type;




 VAR_35->nlp_type &= ~(VAR_17 | VAR_16);
 VAR_35->nlp_type &= ~(VAR_21 | VAR_20);
 VAR_35->nlp_fcp_info &= ~VAR_15;
 VAR_35->nlp_flag &= ~(VAR_18 | VAR_19);
 VAR_35->nvme_fb_size = 0;

 send_next_prli:
 if (VAR_44 & VAR_13) {

  VAR_43 = (sizeof(uint32_t) + sizeof(PRLI));
  VAR_45 = VAR_1;
 } else if (VAR_44 & VAR_14) {

  VAR_43 = (sizeof(uint32_t) + sizeof(struct lpfc_nvme_prli));
  VAR_45 = VAR_0;
 } else {
  FUNC_6(VAR_34, VAR_4, VAR_5,
     "3083 Unknown FC_TYPE x%x ndlp x%06x\n",
     VAR_35->nlp_fc4_type, VAR_35->nlp_DID);
  return 1;
 }




 if (VAR_38->sli_rev == VAR_10 &&
     VAR_35->nlp_fc4_type == VAR_14) {
  FUNC_6(VAR_34, VAR_4, VAR_5,
     "3088 Rport fc4 type 0x%x not supported by SLI3 adapter\n",
     VAR_35->nlp_type);
  FUNC_3(VAR_34, VAR_35, ((void*)0), VAR_12);
  return 1;
 }

 VAR_41 = FUNC_5(VAR_34, 1, VAR_43, VAR_36, VAR_35,
         VAR_35->nlp_DID, VAR_45);
 if (!VAR_41)
  return 1;

 VAR_42 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_41->context2)->virt);


 FUNC_9(VAR_42, 0, VAR_43);

 if (VAR_44 & VAR_13) {





  *((uint32_t *)(VAR_42)) = VAR_1;
  VAR_42 += sizeof(uint32_t);
  VAR_39 = (PRLI *)VAR_42;





  if (VAR_38->vpd.rev.feaLevelHigh >= 0x02) {
   VAR_39->ConfmComplAllowed = 1;
   VAR_39->Retry = 1;
   VAR_39->TaskRetryIdReq = 1;
  }
  VAR_39->estabImagePair = 1;
  VAR_39->readXferRdyDis = 1;
  if (VAR_34->cfg_first_burst_size)
   VAR_39->writeXferRdyDis = 1;


  VAR_39->prliType = VAR_23;
  VAR_39->initiatorFunc = 1;
  VAR_41->iocb_flag |= VAR_8;


  VAR_44 &= ~VAR_13;
 } else if (VAR_44 & VAR_14) {




  *((uint32_t *)(VAR_42)) = VAR_0;
  VAR_42 += sizeof(uint32_t);
  VAR_40 = (struct lpfc_nvme_prli *)VAR_42;
  FUNC_0(VAR_33, VAR_40, VAR_24);
  FUNC_0(VAR_28, VAR_40, 0);
  if (VAR_38->nsler) {
   FUNC_0(VAR_31, VAR_40, 1);
   FUNC_0(VAR_26, VAR_40, 1);
  }


  if ((VAR_38->cfg_nvme_enable_fb) &&
      !VAR_38->nvmet_support)
   FUNC_0(VAR_29, VAR_40, 1);

  if (VAR_38->nvmet_support) {
   FUNC_0(VAR_32, VAR_40, 1);
   FUNC_0(VAR_27, VAR_40, 1);
  } else {
   FUNC_0(VAR_30, VAR_40, 1);
   FUNC_0(VAR_26, VAR_40, 1);
  }

  VAR_40->word1 = FUNC_1(VAR_40->word1);
  VAR_40->word4 = FUNC_1(VAR_40->word4);
  VAR_41->iocb_flag |= VAR_9;


  VAR_44 &= ~VAR_14;
 }

 FUNC_2(VAR_34, VAR_6,
  "Issue PRLI:      did:x%x",
  VAR_35->nlp_DID, 0, 0);

 VAR_38->fc_stat.elsXmitPRLI++;
 VAR_41->iocb_cmpl = VAR_25;
 FUNC_10(VAR_37->host_lock);
 VAR_35->nlp_flag |= VAR_22;





 VAR_34->fc_prli_sent++;
 VAR_35->fc4_prli_sent++;
 FUNC_11(VAR_37->host_lock);
 if (FUNC_8(VAR_38, VAR_7, VAR_41, 0) ==
     VAR_3) {
  FUNC_10(VAR_37->host_lock);
  VAR_35->nlp_flag &= ~VAR_22;
  FUNC_11(VAR_37->host_lock);
  FUNC_4(VAR_38, VAR_41);
  return 1;
 }





 if (VAR_38->sli_rev == VAR_11 &&
     VAR_44 & (VAR_13 | VAR_14))
  goto send_next_prli;

 return 0;
}
