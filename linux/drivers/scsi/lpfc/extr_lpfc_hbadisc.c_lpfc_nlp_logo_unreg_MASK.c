
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_vport {int phba; } ;
struct lpfc_nodelist {int nlp_flag; scalar_t__ nlp_defer_did; int nlp_rpi; int nlp_DID; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_4__ {scalar_t__ ctx_ndlp; struct lpfc_vport* vport; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*,int ,int ,scalar_t__,struct lpfc_nodelist*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_5(struct lpfc_hba *VAR_5, LPFC_MBOXQ_t *VAR_6)
{
 struct lpfc_vport *VAR_7 = VAR_6->vport;
 struct lpfc_nodelist *VAR_8;

 VAR_8 = (struct lpfc_nodelist *)(VAR_6->ctx_ndlp);
 if (!VAR_8)
  return;
 FUNC_0(VAR_7, VAR_8, 0);
 FUNC_4(VAR_6, VAR_5->mbox_mem_pool);


 if ((VAR_8->nlp_flag & VAR_4) &&
     (VAR_8->nlp_defer_did != VAR_2)) {
  FUNC_2(VAR_7, VAR_0, VAR_1,
     "1434 UNREG cmpl deferred logo x%x "
     "on NPort x%x Data: x%x x%px\n",
     VAR_8->nlp_rpi, VAR_8->nlp_DID,
     VAR_8->nlp_defer_did, VAR_8);

  VAR_8->nlp_flag &= ~VAR_4;
  VAR_8->nlp_defer_did = VAR_2;
  FUNC_1(VAR_7, VAR_8->nlp_DID, 0);
 } else {
  if (VAR_8->nlp_flag & VAR_3) {
   FUNC_3(VAR_7->phba, VAR_8->nlp_rpi);
   VAR_8->nlp_flag &= ~VAR_3;
  }
  VAR_8->nlp_flag &= ~VAR_4;
 }
}
