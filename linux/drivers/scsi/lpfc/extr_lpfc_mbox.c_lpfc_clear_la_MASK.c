
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct lpfc_hba {int fc_eventTag; } ;
struct TYPE_9__ {int eventTag; } ;
struct TYPE_10__ {TYPE_2__ varClearLA; } ;
struct TYPE_11__ {int mbxOwner; int mbxCommand; TYPE_3__ un; } ;
struct TYPE_8__ {TYPE_4__ mb; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
typedef TYPE_4__ MAILBOX_t ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,int) ;

void
FUNC_1(struct lpfc_hba * VAR_2, LPFC_MBOXQ_t * VAR_3)
{
 MAILBOX_t *VAR_4;

 VAR_4 = &VAR_3->u.mb;
 FUNC_0(VAR_3, 0, sizeof (LPFC_MBOXQ_t));

 VAR_4->un.varClearLA.eventTag = VAR_2->fc_eventTag;
 VAR_4->mbxCommand = VAR_0;
 VAR_4->mbxOwner = VAR_1;
 return;
}
