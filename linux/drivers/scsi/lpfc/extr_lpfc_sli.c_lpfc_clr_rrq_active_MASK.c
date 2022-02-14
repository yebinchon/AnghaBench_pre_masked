
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lpfc_nodelist {int active_rrqs_xri_bitmap; } ;
struct lpfc_node_rrq {scalar_t__ rrq_stop_time; scalar_t__ xritag; scalar_t__ send_rrq; struct lpfc_nodelist* ndlp; int nlp_DID; scalar_t__ vport; } ;
struct lpfc_hba {int rrq_pool; } ;


 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct lpfc_node_rrq*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

void
FUNC_4(struct lpfc_hba *VAR_0,
      uint16_t VAR_1,
      struct lpfc_node_rrq *VAR_2)
{
 struct lpfc_nodelist *VAR_3 = ((void*)0);

 if ((VAR_2->vport) && FUNC_0(VAR_2->ndlp))
  VAR_3 = FUNC_1(VAR_2->vport, VAR_2->nlp_DID);





 if ((!VAR_3) && VAR_2->ndlp)
  VAR_3 = VAR_2->ndlp;

 if (!VAR_3)
  goto out;

 if (FUNC_3(VAR_1, VAR_3->active_rrqs_xri_bitmap)) {
  VAR_2->send_rrq = 0;
  VAR_2->xritag = 0;
  VAR_2->rrq_stop_time = 0;
 }
out:
 FUNC_2(VAR_2, VAR_0->rrq_pool);
}
