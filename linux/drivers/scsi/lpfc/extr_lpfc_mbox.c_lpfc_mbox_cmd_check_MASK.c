
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lpfc_hba {int dummy; } ;
struct TYPE_5__ {int mbxCommand; } ;
struct TYPE_6__ {TYPE_1__ mb; } ;
struct TYPE_7__ {scalar_t__ mbox_cmpl; TYPE_2__ u; int vport; } ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct lpfc_hba*,int ,int,char*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_2(struct lpfc_hba *VAR_6, LPFC_MBOXQ_t *VAR_7)
{



 if (VAR_7->mbox_cmpl && VAR_7->mbox_cmpl != VAR_4 &&
     VAR_7->mbox_cmpl != VAR_5) {
  if (!VAR_7->vport) {
   FUNC_1(VAR_6, VAR_1, VAR_2 | VAR_3,
     "1814 Mbox x%x failed, no vport\n",
     VAR_7->u.mb.mbxCommand);
   FUNC_0();
   return -VAR_0;
  }
 }
 return 0;
}
