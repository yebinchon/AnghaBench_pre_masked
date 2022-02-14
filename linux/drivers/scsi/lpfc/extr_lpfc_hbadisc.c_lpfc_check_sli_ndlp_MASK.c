
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef int uint8_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_sli_ring {scalar_t__ ringno; } ;
struct lpfc_nodelist {int nlp_type; int nlp_flag; scalar_t__ nlp_rpi; int nlp_DID; struct lpfc_vport* vport; } ;
struct TYPE_5__ {struct lpfc_nodelist* ndlp; } ;
struct TYPE_6__ {int remoteID; } ;
struct TYPE_7__ {TYPE_2__ elsreq64; } ;
struct TYPE_8__ {int ulpCommand; scalar_t__ volatile ulpContext; TYPE_3__ un; } ;
struct lpfc_iocbq {int * context1; TYPE_1__ context_un; struct lpfc_vport* vport; TYPE_4__ iocb; } ;
struct lpfc_hba {int dummy; } ;
typedef TYPE_4__ IOCB_t ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(struct lpfc_hba *VAR_4,
      struct lpfc_sli_ring *VAR_5,
      struct lpfc_iocbq *VAR_6,
      struct lpfc_nodelist *VAR_7)
{
 IOCB_t *VAR_8 = &VAR_6->iocb;
 struct lpfc_vport *VAR_9 = VAR_7->vport;

 if (VAR_6->vport != VAR_9)
  return 0;

 if (VAR_5->ringno == VAR_0) {
  switch (VAR_8->ulpCommand) {
  case 129:
   if (VAR_6->context_un.ndlp == VAR_7)
    return 1;

  case 130:
   if (VAR_8->un.elsreq64.remoteID == VAR_7->nlp_DID)
    return 1;

  case 128:
   if (VAR_6->context1 == (uint8_t *) VAR_7)
    return 1;

  }
 } else if (VAR_5->ringno == VAR_1) {

  if ((VAR_7->nlp_type & VAR_3) &&
      (VAR_7->nlp_flag & VAR_2)) {
   return 0;
  }
  if (VAR_8->ulpContext == (volatile ushort)VAR_7->nlp_rpi) {
   return 1;
  }
 }
 return 0;
}
