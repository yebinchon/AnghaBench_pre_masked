
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct serv_parm {int portName; int nodeName; } ;
struct TYPE_7__ {scalar_t__ vendorUnique; int lsRjtRsnCodeExp; int lsRjtRsnCode; scalar_t__ lsRjtRsvd0; } ;
struct TYPE_8__ {int lsRjtError; TYPE_2__ b; } ;
struct ls_rjt {TYPE_3__ un; } ;
struct lpfc_vport {TYPE_1__* phba; } ;
struct lpfc_nodelist {int nlp_type; int nlp_state; int nlp_prev_state; int nlp_last_elscmd; int nlp_flag; int nlp_delayfunc; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_9__ {scalar_t__ ulpStatus; } ;
struct lpfc_iocbq {scalar_t__ drvrTimeout; TYPE_4__ iocb; scalar_t__ context2; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_10__ {int portName; int nodeName; } ;
struct TYPE_6__ {scalar_t__ sli_rev; } ;
typedef TYPE_4__ IOCB_t ;
typedef TYPE_5__ ADISC ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_12 ;
 struct lpfc_iocbq* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_name*,struct lpfc_name*) ;
 int FUNC_2 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int VAR_13 ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_nodelist*,int ,struct lpfc_iocbq*) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(struct lpfc_vport *VAR_14, struct lpfc_nodelist *VAR_15,
  struct lpfc_iocbq *VAR_16)
{
 struct Scsi_Host *VAR_17 = FUNC_6(VAR_14);
 struct lpfc_iocbq *VAR_18;
 struct lpfc_dmabuf *VAR_19;
 struct serv_parm *VAR_20;
 struct lpfc_name *VAR_21, *VAR_22;
 struct ls_rjt VAR_23;
 ADISC *VAR_24;
 IOCB_t *VAR_25;
 uint32_t *VAR_26;
 uint32_t VAR_27;

 VAR_19 = (struct lpfc_dmabuf *) VAR_16->context2;
 VAR_26 = (uint32_t *) VAR_19->virt;

 VAR_27 = *VAR_26++;
 if (VAR_27 == VAR_0) {
  VAR_24 = (ADISC *) VAR_26;
  VAR_21 = (struct lpfc_name *) & VAR_24->nodeName;
  VAR_22 = (struct lpfc_name *) & VAR_24->portName;
 } else {
  VAR_20 = (struct serv_parm *) VAR_26;
  VAR_21 = (struct lpfc_name *) & VAR_20->nodeName;
  VAR_22 = (struct lpfc_name *) & VAR_20->portName;
 }

 VAR_25 = &VAR_16->iocb;
 if (VAR_25->ulpStatus == 0 && FUNC_1(VAR_14, VAR_15, VAR_21, VAR_22)) {






  if (VAR_14->phba->sli_rev == VAR_3) {
   VAR_18 = FUNC_0(sizeof(struct lpfc_iocbq),
    VAR_2);
   if (VAR_18) {


    FUNC_8((uint8_t *)VAR_18, (uint8_t *)VAR_16,
     sizeof(struct lpfc_iocbq));


    VAR_18->drvrTimeout = VAR_27;

    FUNC_7(VAR_15,
     VAR_13, VAR_18);
    goto out;
   }
  }

  if (VAR_27 == VAR_0) {
   FUNC_3(VAR_14, VAR_16, VAR_15);
  } else {
   FUNC_2(VAR_14, VAR_1, VAR_16,
    VAR_15, ((void*)0));
  }
out:

  if (VAR_15->nlp_type & (VAR_7 | VAR_8))
   FUNC_5(VAR_14, VAR_15, VAR_9);
  else
   FUNC_5(VAR_14, VAR_15, VAR_11);

  return 1;
 }

 VAR_23.un.b.lsRjtRsvd0 = 0;
 VAR_23.un.b.lsRjtRsnCode = VAR_5;
 VAR_23.un.b.lsRjtRsnCodeExp = VAR_4;
 VAR_23.un.b.vendorUnique = 0;
 FUNC_4(VAR_14, VAR_23.un.lsRjtError, VAR_16, VAR_15, ((void*)0));


 FUNC_9(&VAR_15->nlp_delayfunc, VAR_12 + FUNC_10(1000));

 FUNC_11(VAR_17->host_lock);
 VAR_15->nlp_flag |= VAR_6;
 FUNC_12(VAR_17->host_lock);
 VAR_15->nlp_last_elscmd = VAR_1;
 VAR_15->nlp_prev_state = VAR_15->nlp_state;
 FUNC_5(VAR_14, VAR_15, VAR_10);
 return 0;
}
