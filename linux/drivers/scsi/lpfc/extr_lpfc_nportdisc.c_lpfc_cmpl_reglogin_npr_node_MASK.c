
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {TYPE_1__* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_rpi; } ;
struct TYPE_7__ {int * varWords; } ;
struct TYPE_9__ {TYPE_2__ un; int mbxStatus; } ;
struct TYPE_8__ {TYPE_4__ mb; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
struct TYPE_6__ {scalar_t__ sli_rev; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*) ;

__attribute__((used)) static uint32_t
FUNC_2(struct lpfc_vport *VAR_5,
       struct lpfc_nodelist *VAR_6,
       void *VAR_7, uint32_t VAR_8)
{
 LPFC_MBOXQ_t *VAR_9 = (LPFC_MBOXQ_t *) VAR_7;
 MAILBOX_t *VAR_10 = &VAR_9->u.mb;

 if (!VAR_10->mbxStatus) {

  if (VAR_5->phba->sli_rev < VAR_0)
   VAR_6->nlp_rpi = VAR_10->un.varWords[0];
  VAR_6->nlp_flag |= VAR_3;
  if (VAR_6->nlp_flag & VAR_1) {
   FUNC_1(VAR_5, VAR_6);
  }
 } else {
  if (VAR_6->nlp_flag & VAR_2) {
   FUNC_0(VAR_5, VAR_6);
   return VAR_4;
  }
 }
 return VAR_6->nlp_state;
}
