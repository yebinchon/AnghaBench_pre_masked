
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_rdp_context {int (* cmpl ) (struct lpfc_hba*,struct lpfc_rdp_context*,int) ;int link_stat; } ;
struct lpfc_hba {int dummy; } ;
struct TYPE_7__ {int varRdLnk; } ;
struct TYPE_9__ {TYPE_1__ un; scalar_t__ mbxStatus; } ;
struct TYPE_8__ {TYPE_3__ mb; } ;
struct TYPE_10__ {TYPE_2__ u; scalar_t__ ctx_ndlp; } ;
typedef int READ_LNK_VAR ;
typedef TYPE_3__ MAILBOX_t ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_4__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_rdp_context*,int) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_2, LPFC_MBOXQ_t *VAR_3)
{
 MAILBOX_t *VAR_4;
 int VAR_5 = VAR_0;
 struct lpfc_rdp_context *VAR_6 =
   (struct lpfc_rdp_context *)(VAR_3->ctx_ndlp);

 VAR_4 = &VAR_3->u.mb;
 if (VAR_4->mbxStatus)
  goto mbx_failed;

 FUNC_1(&VAR_6->link_stat, &VAR_4->un.varRdLnk, sizeof(READ_LNK_VAR));

 VAR_5 = VAR_1;

mbx_failed:
 FUNC_0(VAR_2, VAR_3);
 VAR_6->cmpl(VAR_2, VAR_6, VAR_5);
}
