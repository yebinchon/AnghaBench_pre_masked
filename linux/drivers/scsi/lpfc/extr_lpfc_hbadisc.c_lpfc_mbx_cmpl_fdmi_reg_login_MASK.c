
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ port_type; } ;
struct lpfc_nodelist {int nlp_usg_map; int kref; int nlp_flag; int nlp_DID; int nlp_rpi; int nlp_type; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_8__ {int * varWords; } ;
struct TYPE_9__ {TYPE_2__ un; } ;
struct TYPE_7__ {TYPE_3__ mb; } ;
struct TYPE_10__ {int * ctx_ndlp; int * ctx_buf; struct lpfc_vport* vport; TYPE_1__ u; } ;
typedef TYPE_3__ MAILBOX_t ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ) ;
 int FUNC_4 (struct lpfc_nodelist*) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int ,int ,struct lpfc_nodelist*) ;
 int FUNC_7 (TYPE_4__*,int ) ;

void
FUNC_8(struct lpfc_hba *VAR_9, LPFC_MBOXQ_t *VAR_10)
{
 MAILBOX_t *VAR_11 = &VAR_10->u.mb;
 struct lpfc_dmabuf *VAR_12 = (struct lpfc_dmabuf *)(VAR_10->ctx_buf);
 struct lpfc_nodelist *VAR_13 = (struct lpfc_nodelist *)VAR_10->ctx_ndlp;
 struct lpfc_vport *VAR_14 = VAR_10->vport;

 VAR_10->ctx_buf = ((void*)0);
 VAR_10->ctx_ndlp = ((void*)0);

 if (VAR_9->sli_rev < VAR_3)
  VAR_13->nlp_rpi = VAR_11->un.varWords[0];
 VAR_13->nlp_flag |= VAR_5;
 VAR_13->nlp_type |= VAR_4;
 FUNC_5(VAR_14, VAR_13, VAR_6);
 FUNC_6(VAR_14, VAR_0, VAR_1,
    "0004 rpi:%x DID:%x flg:%x %d map:%x x%px\n",
    VAR_13->nlp_rpi, VAR_13->nlp_DID, VAR_13->nlp_flag,
    FUNC_1(&VAR_13->kref),
    VAR_13->nlp_usg_map, VAR_13);






 if (VAR_14->port_type == VAR_2)
  FUNC_2(VAR_14, VAR_13, VAR_7, 0);
 else
  FUNC_2(VAR_14, VAR_13, VAR_8, 0);





 FUNC_4(VAR_13);
 FUNC_3(VAR_9, VAR_12->virt, VAR_12->phys);
 FUNC_0(VAR_12);
 FUNC_7(VAR_10, VAR_9->mbox_mem_pool);

 return;
}
