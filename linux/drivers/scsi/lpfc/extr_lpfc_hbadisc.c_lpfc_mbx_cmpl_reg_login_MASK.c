
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; scalar_t__ nlp_state; int nlp_usg_map; int kref; int nlp_DID; int nlp_rpi; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_5__ {int * ctx_ndlp; int * ctx_buf; struct lpfc_vport* vport; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,TYPE_1__*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ) ;
 int FUNC_4 (struct lpfc_nodelist*) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*,int ,int ,int,int ,int ,struct lpfc_nodelist*) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(struct lpfc_hba *VAR_7, LPFC_MBOXQ_t *VAR_8)
{
 struct lpfc_vport *VAR_9 = VAR_8->vport;
 struct lpfc_dmabuf *VAR_10 = (struct lpfc_dmabuf *)(VAR_8->ctx_buf);
 struct lpfc_nodelist *VAR_11 = (struct lpfc_nodelist *)VAR_8->ctx_ndlp;
 struct Scsi_Host *VAR_12 = FUNC_6(VAR_9);

 VAR_8->ctx_buf = ((void*)0);
 VAR_8->ctx_ndlp = ((void*)0);

 FUNC_5(VAR_9, VAR_0, VAR_1,
    "0002 rpi:%x DID:%x flg:%x %d map:%x x%px\n",
    VAR_11->nlp_rpi, VAR_11->nlp_DID, VAR_11->nlp_flag,
    FUNC_1(&VAR_11->kref),
    VAR_11->nlp_usg_map, VAR_11);
 if (VAR_11->nlp_flag & VAR_4)
  VAR_11->nlp_flag &= ~VAR_4;

 if (VAR_11->nlp_flag & VAR_3 ||
     VAR_11->nlp_state != VAR_6) {
  FUNC_9(VAR_12->host_lock);
  VAR_11->nlp_flag &= ~VAR_3;
  FUNC_10(VAR_12->host_lock);






  VAR_11->nlp_flag |= VAR_5;
  FUNC_7(VAR_9, VAR_11);
 }


 FUNC_2(VAR_9, VAR_11, VAR_8, VAR_2);

 FUNC_3(VAR_7, VAR_10->virt, VAR_10->phys);
 FUNC_0(VAR_10);
 FUNC_8(VAR_8, VAR_7->mbox_mem_pool);



 FUNC_4(VAR_11);

 return;
}
