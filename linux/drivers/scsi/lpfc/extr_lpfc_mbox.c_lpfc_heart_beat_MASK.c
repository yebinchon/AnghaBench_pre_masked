
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_hba {int dummy; } ;
struct TYPE_7__ {int mbxOwner; int mbxCommand; } ;
struct TYPE_6__ {TYPE_2__ mb; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_2__ MAILBOX_t ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;

void
FUNC_1(struct lpfc_hba * VAR_2, LPFC_MBOXQ_t * VAR_3)
{
 MAILBOX_t *VAR_4;

 VAR_4 = &VAR_3->u.mb;
 FUNC_0(VAR_3, 0, sizeof (LPFC_MBOXQ_t));
 VAR_4->mbxCommand = VAR_0;
 VAR_4->mbxOwner = VAR_1;
 return;
}
