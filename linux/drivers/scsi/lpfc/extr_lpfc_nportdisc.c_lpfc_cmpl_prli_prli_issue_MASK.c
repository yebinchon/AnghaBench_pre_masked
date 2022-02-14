
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {scalar_t__ port_type; scalar_t__ cfg_restrict_login; struct lpfc_hba* phba; } ;
struct lpfc_nvme_prli {int word5; int word4; int word1; } ;
struct lpfc_nodelist {int nlp_type; int nvme_fb_size; scalar_t__ fc4_prli_sent; int nlp_state; scalar_t__ nlp_DID; void* nlp_prev_state; int nlp_flag; int nlp_fcp_info; int nlp_nvme_info; int nlp_fc4_type; } ;
struct TYPE_6__ {scalar_t__ ulpStatus; } ;
struct TYPE_4__ {struct lpfc_iocbq* rsp_iocb; } ;
struct lpfc_iocbq {int iocb_flag; TYPE_3__ iocb; TYPE_1__ context_un; } ;
struct lpfc_hba {int nvmet_support; scalar_t__ cfg_nvme_enable_fb; scalar_t__ nsler; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_5__ {scalar_t__ acceptRspCode; scalar_t__ prliType; scalar_t__ targetFunc; scalar_t__ Retry; scalar_t__ writeXferRdyDis; scalar_t__ initiatorFunc; } ;
typedef TYPE_2__ PRLI ;
typedef TYPE_3__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct lpfc_nvme_prli*) ;
 void* FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*,scalar_t__,scalar_t__,...) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static uint32_t
FUNC_9(struct lpfc_vport *VAR_34, struct lpfc_nodelist *VAR_35,
     void *VAR_36, uint32_t VAR_37)
{
 struct Scsi_Host *VAR_38 = FUNC_6(VAR_34);
 struct lpfc_iocbq *VAR_39, *VAR_40;
 struct lpfc_hba *VAR_41 = VAR_34->phba;
 IOCB_t *VAR_42;
 PRLI *VAR_43;
 struct lpfc_nvme_prli *VAR_44;
 void *VAR_45;

 VAR_39 = (struct lpfc_iocbq *) VAR_36;
 VAR_40 = VAR_39->context_un.rsp_iocb;





 VAR_43 = ((void*)0);
 VAR_44 = ((void*)0);
 VAR_45 = FUNC_2(VAR_41, VAR_39, VAR_40);
 if (VAR_39->iocb_flag & VAR_6)
  VAR_43 = (PRLI *) VAR_45;
 else if (VAR_39->iocb_flag & VAR_7)
  VAR_44 = (struct lpfc_nvme_prli *) VAR_45;

 VAR_42 = &VAR_40->iocb;
 if (VAR_42->ulpStatus) {
  if ((VAR_34->port_type == VAR_3) &&
      VAR_34->cfg_restrict_login) {
   goto out;
  }


  if (VAR_43)
   VAR_35->nlp_fc4_type &= ~VAR_8;
  if (VAR_44)
   VAR_35->nlp_fc4_type &= ~VAR_9;


  goto out_err;
 }

 if (VAR_43 && (VAR_43->acceptRspCode == VAR_25) &&
     (VAR_43->prliType == VAR_23)) {
  FUNC_5(VAR_34, VAR_0, VAR_2,
     "6028 FCP NPR PRLI Cmpl Init %d Target %d\n",
     VAR_43->initiatorFunc,
     VAR_43->targetFunc);
  if (VAR_43->initiatorFunc)
   VAR_35->nlp_type |= VAR_11;
  if (VAR_43->targetFunc) {
   VAR_35->nlp_type |= VAR_12;
   if (VAR_43->writeXferRdyDis)
    VAR_35->nlp_flag |= VAR_13;
  }
  if (VAR_43->Retry)
   VAR_35->nlp_fcp_info |= VAR_10;

 } else if (VAR_44 &&
     (FUNC_1(VAR_26, VAR_44) ==
      VAR_25) &&
     (FUNC_1(VAR_33, VAR_44) ==
      VAR_24)) {


  if (FUNC_1(VAR_30, VAR_44))
   VAR_35->nlp_type |= VAR_15;

  if (VAR_41->nsler && FUNC_1(VAR_31, VAR_44))
   VAR_35->nlp_nvme_info |= VAR_16;
  else
   VAR_35->nlp_nvme_info &= ~VAR_16;


  if (FUNC_1(VAR_32, VAR_44)) {




   VAR_35->nlp_type |= VAR_17;
   if (FUNC_1(VAR_27, VAR_44))
    VAR_35->nlp_type |= VAR_14;







   if ((FUNC_1(VAR_29, VAR_44) == 1) &&
       (VAR_41->cfg_nvme_enable_fb) &&
       (!VAR_41->nvmet_support)) {



    VAR_35->nlp_flag |= VAR_13;
    VAR_35->nvme_fb_size = FUNC_1(VAR_28,
         VAR_44);


    if (VAR_35->nvme_fb_size)
     VAR_35->nvme_fb_size <<=
      VAR_4;
    else
     VAR_35->nvme_fb_size = VAR_5;
   }
  }

  FUNC_5(VAR_34, VAR_0, VAR_2,
     "6029 NVME PRLI Cmpl w1 x%08x "
     "w4 x%08x w5 x%08x flag x%x, "
     "fcp_info x%x nlp_type x%x\n",
     FUNC_0(VAR_44->word1),
     FUNC_0(VAR_44->word4),
     FUNC_0(VAR_44->word5),
     VAR_35->nlp_flag, VAR_35->nlp_fcp_info,
     VAR_35->nlp_type);
 }
 if (!(VAR_35->nlp_type & VAR_12) &&
     (VAR_34->port_type == VAR_3) &&
      VAR_34->cfg_restrict_login) {
out:
  FUNC_7(VAR_38->host_lock);
  VAR_35->nlp_flag |= VAR_22;
  FUNC_8(VAR_38->host_lock);
  FUNC_3(VAR_34, VAR_35, 0);

  VAR_35->nlp_prev_state = VAR_20;
  FUNC_4(VAR_34, VAR_35, VAR_19);
  return VAR_35->nlp_state;
 }

out_err:



 if (VAR_35->fc4_prli_sent == 0) {
  VAR_35->nlp_prev_state = VAR_20;
  if (VAR_35->nlp_type & (VAR_12 | VAR_17))
   FUNC_4(VAR_34, VAR_35, VAR_18);
  else if (VAR_35->nlp_type &
    (VAR_11 | VAR_15))
   FUNC_4(VAR_34, VAR_35, VAR_21);
 } else
  FUNC_5(VAR_34,
     VAR_0, VAR_1,
     "3067 PRLI's still outstanding "
     "on x%06x - count %d, Pend Node Mode "
     "transition...\n",
     VAR_35->nlp_DID, VAR_35->fc4_prli_sent);

 return VAR_35->nlp_state;
}
