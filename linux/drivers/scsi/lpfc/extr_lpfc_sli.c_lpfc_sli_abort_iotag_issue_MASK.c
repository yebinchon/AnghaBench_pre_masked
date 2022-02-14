
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_sli_ring {scalar_t__ ringno; int ring_lock; } ;
struct lpfc_nodelist {int nlp_rpi; } ;
struct TYPE_4__ {int abortContextTag; int abortIoTag; int abortType; } ;
struct TYPE_5__ {TYPE_1__ acxri; } ;
struct TYPE_6__ {scalar_t__ ulpCommand; int ulpLe; TYPE_2__ un; int ulpClass; int ulpIoTag; int ulpContext; } ;
struct lpfc_iocbq {int iocb_flag; int iotag; struct lpfc_vport* vport; int iocb_cmpl; int hba_wqidx; scalar_t__ context1; int sli4_xritag; TYPE_3__ iocb; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ link_state; int hbalock; } ;
typedef TYPE_3__ IOCB_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct lpfc_iocbq* FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,scalar_t__,struct lpfc_iocbq*,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ) ;
 struct lpfc_sli_ring* FUNC_5 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_12 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_hba *VAR_13, struct lpfc_sli_ring *VAR_14,
      struct lpfc_iocbq *VAR_15)
{
 struct lpfc_vport *VAR_16 = VAR_15->vport;
 struct lpfc_iocbq *VAR_17;
 IOCB_t *VAR_18 = ((void*)0);
 IOCB_t *VAR_19 = ((void*)0);
 int VAR_20;
 unsigned long VAR_21;
 struct lpfc_nodelist *VAR_22;

 FUNC_3(&VAR_13->hbalock);






 VAR_18 = &VAR_15->iocb;
 if (VAR_18->ulpCommand == VAR_1 ||
     VAR_18->ulpCommand == VAR_2 ||
     (VAR_15->iocb_flag & VAR_5) != 0)
  return 0;


 VAR_17 = FUNC_0(VAR_13);
 if (VAR_17 == ((void*)0))
  return 0;




 VAR_15->iocb_flag |= VAR_5;

 VAR_19 = &VAR_17->iocb;
 VAR_19->un.acxri.abortType = VAR_0;
 VAR_19->un.acxri.abortContextTag = VAR_18->ulpContext;
 if (VAR_13->sli_rev == VAR_10) {
  VAR_19->un.acxri.abortIoTag = VAR_15->sli4_xritag;
  VAR_19->un.acxri.abortContextTag = VAR_15->iotag;
 } else {
  VAR_19->un.acxri.abortIoTag = VAR_18->ulpIoTag;
  if (VAR_14->ringno == VAR_6) {
   VAR_22 = (struct lpfc_nodelist *)(VAR_15->context1);
   VAR_19->un.acxri.abortContextTag = VAR_22->nlp_rpi;
  }
 }
 VAR_19->ulpLe = 1;
 VAR_19->ulpClass = VAR_18->ulpClass;


 VAR_17->hba_wqidx = VAR_15->hba_wqidx;
 if (VAR_15->iocb_flag & VAR_7)
  VAR_17->iocb_flag |= VAR_11;
 if (VAR_15->iocb_flag & VAR_8)
  VAR_17->iocb_flag |= VAR_8;

 if (VAR_13->link_state >= VAR_9)
  VAR_19->ulpCommand = VAR_1;
 else
  VAR_19->ulpCommand = VAR_2;

 VAR_17->iocb_cmpl = VAR_12;
 VAR_17->vport = VAR_16;

 FUNC_4(VAR_16, VAR_3, VAR_4,
    "0339 Abort xri x%x, original iotag x%x, "
    "abort cmd iotag x%x\n",
    VAR_19->un.acxri.abortIoTag,
    VAR_19->un.acxri.abortContextTag,
    VAR_17->iotag);

 if (VAR_13->sli_rev == VAR_10) {
  VAR_14 = FUNC_5(VAR_13, VAR_17);
  if (FUNC_8(VAR_14 == ((void*)0)))
   return 0;

  FUNC_6(&VAR_14->ring_lock, VAR_21);
  VAR_20 = FUNC_1(VAR_13, VAR_14->ringno,
   VAR_17, 0);
  FUNC_7(&VAR_14->ring_lock, VAR_21);
 } else {
  VAR_20 = FUNC_1(VAR_13, VAR_14->ringno,
   VAR_17, 0);
 }

 if (VAR_20)
  FUNC_2(VAR_13, VAR_17);






 return VAR_20;
}
