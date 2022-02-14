
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct lpfc_vport {scalar_t__ cfg_enable_fc4_type; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_type; int nlp_flag; int nlp_DID; int nlp_fc4_type; int nlp_nvme_info; int nlp_fcp_info; struct fc_rport* rport; } ;
struct lpfc_iocbq {scalar_t__ context2; } ;
struct lpfc_hba {scalar_t__ nvmet_support; scalar_t__ nsler; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct fc_rport {int dummy; } ;
struct TYPE_2__ {scalar_t__ prliType; scalar_t__ Retry; scalar_t__ writeXferRdyDis; scalar_t__ targetFunc; scalar_t__ initiatorFunc; } ;
typedef TYPE_1__ PRLI ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct fc_rport*,int ) ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_vport *VAR_17, struct lpfc_nodelist *VAR_18,
       struct lpfc_iocbq *VAR_19)
{
 struct lpfc_hba *VAR_20 = VAR_17->phba;
 struct lpfc_dmabuf *VAR_21;
 uint32_t *VAR_22;
 PRLI *VAR_23;
 struct fc_rport *VAR_24 = VAR_18->rport;
 u32 VAR_25;

 VAR_21 = (struct lpfc_dmabuf *) VAR_19->context2;
 VAR_22 = (uint32_t *) VAR_21->virt;
 VAR_23 = (PRLI *) ((uint8_t *) VAR_22 + sizeof (uint32_t));

 if ((VAR_23->prliType == VAR_15) ||
     (VAR_23->prliType == VAR_16)) {
  if (VAR_23->initiatorFunc) {
   if (VAR_23->prliType == VAR_15)
    VAR_18->nlp_type |= VAR_8;
   if (VAR_23->prliType == VAR_16)
    VAR_18->nlp_type |= VAR_11;
  }
  if (VAR_23->targetFunc) {
   if (VAR_23->prliType == VAR_15)
    VAR_18->nlp_type |= VAR_9;
   if (VAR_23->prliType == VAR_16)
    VAR_18->nlp_type |= VAR_13;
   if (VAR_23->writeXferRdyDis)
    VAR_18->nlp_flag |= VAR_10;
  }
  if (VAR_23->Retry && VAR_18->nlp_type &
     (VAR_8 | VAR_9))
   VAR_18->nlp_fcp_info |= VAR_7;

  if (VAR_23->Retry && VAR_20->nsler &&
      VAR_18->nlp_type & (VAR_11 | VAR_13))
   VAR_18->nlp_nvme_info |= VAR_12;







  if (VAR_20->nvmet_support && (VAR_23->prliType == VAR_16)) {
   VAR_18->nlp_fc4_type |= VAR_6;
   FUNC_2(VAR_17, VAR_18, VAR_14);
  }
  if (VAR_23->prliType == VAR_15)
   VAR_18->nlp_fc4_type |= VAR_5;
 }
 if (VAR_24) {

  VAR_25 = VAR_2;
  if (VAR_18->nlp_type & VAR_8)
   VAR_25 |= VAR_0;
  if (VAR_18->nlp_type & VAR_9)
   VAR_25 |= VAR_1;

  FUNC_1(VAR_17, VAR_3,
   "rport rolechg:   role:x%x did:x%x flg:x%x",
   VAR_25, VAR_18->nlp_DID, VAR_18->nlp_flag);

  if (VAR_17->cfg_enable_fc4_type != VAR_4)
   FUNC_0(VAR_24, VAR_25);
 }
}
