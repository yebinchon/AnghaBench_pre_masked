
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_nodelist {int vport; int nlp_usg_map; int kref; int nlp_flag; int nlp_DID; int nlp_rpi; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_4__ {int * ctx_ndlp; int * ctx_buf; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ) ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 int FUNC_7 (int ,int ,int ,char*,int ,int ,int ,int ,int ,struct lpfc_nodelist*) ;
 int FUNC_8 (TYPE_1__*,int ) ;

void
FUNC_9(struct lpfc_hba *VAR_2, LPFC_MBOXQ_t *VAR_3)
{
 struct lpfc_dmabuf *VAR_4 = (struct lpfc_dmabuf *)(VAR_3->ctx_buf);
 struct lpfc_nodelist *VAR_5 = (struct lpfc_nodelist *)VAR_3->ctx_ndlp;

 VAR_3->ctx_buf = ((void*)0);
 VAR_3->ctx_ndlp = ((void*)0);

 FUNC_4(VAR_2, VAR_4->virt, VAR_4->phys);
 FUNC_1(VAR_4);
 FUNC_8(VAR_3, VAR_2->mbox_mem_pool);
 if (VAR_5) {
  FUNC_7(VAR_5->vport, VAR_0, VAR_1,
     "0006 rpi%x DID:%x flg:%x %d map:%x x%px\n",
     VAR_5->nlp_rpi, VAR_5->nlp_DID, VAR_5->nlp_flag,
     FUNC_2(&VAR_5->kref),
     VAR_5->nlp_usg_map, VAR_5);
  if (FUNC_0(VAR_5)) {
   FUNC_6(VAR_5);




   FUNC_5(VAR_5);
  } else {
   FUNC_3(VAR_5->vport, VAR_5);
  }
 }

 return;
}
