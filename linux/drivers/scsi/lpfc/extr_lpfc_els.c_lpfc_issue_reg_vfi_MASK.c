
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct serv_parm {int dummy; } ;
struct lpfc_vport {int fc_flag; int port_state; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {scalar_t__ sli_rev; int link_flag; int mbox_mem_pool; int fc_fabparam; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; } ;
struct TYPE_6__ {struct lpfc_dmabuf* ctx_buf; struct lpfc_vport* vport; int mbox_cmpl; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*,int ,int *) ;
 int FUNC_5 (struct lpfc_hba*,scalar_t__,int ) ;
 int VAR_16 ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,int) ;
 int FUNC_7 (TYPE_1__*,struct lpfc_vport*,int ) ;
 int FUNC_8 (struct lpfc_hba*,TYPE_1__*,int ) ;
 int FUNC_9 (struct lpfc_vport*,int ) ;
 int FUNC_10 (scalar_t__,int *,int) ;
 TYPE_1__* FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;

int
FUNC_13(struct lpfc_vport *VAR_17)
{
 struct lpfc_hba *VAR_18 = VAR_17->phba;
 LPFC_MBOXQ_t *VAR_19 = ((void*)0);
 struct lpfc_nodelist *VAR_20;
 struct lpfc_dmabuf *VAR_21 = ((void*)0);
 int VAR_22 = 0;


 if ((VAR_18->sli_rev == VAR_11) &&
     !(VAR_18->link_flag & VAR_12) &&
     !(VAR_17->fc_flag & VAR_4)) {
  VAR_20 = FUNC_3(VAR_17, VAR_6);
  if (!VAR_20 || !FUNC_0(VAR_20)) {
   VAR_22 = -VAR_0;
   goto fail;
  }
 }

 VAR_19 = FUNC_11(VAR_18->mbox_mem_pool, VAR_7);
 if (!VAR_19) {
  VAR_22 = -VAR_1;
  goto fail;
 }


 if ((VAR_17->fc_flag & VAR_3) || (VAR_17->fc_flag & VAR_4)) {
  VAR_21 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_7);
  if (!VAR_21) {
   VAR_22 = -VAR_1;
   goto fail;
  }
  VAR_21->virt = FUNC_4(VAR_18, VAR_15, &VAR_21->phys);
  if (!VAR_21->virt) {
   VAR_22 = -VAR_1;
   goto fail;
  }
  FUNC_10(VAR_21->virt, &VAR_18->fc_fabparam,
         sizeof(struct serv_parm));
 }

 VAR_17->port_state = VAR_10;
 if (VAR_21)
  FUNC_7(VAR_19, VAR_17, VAR_21->phys);
 else
  FUNC_7(VAR_19, VAR_17, 0);

 VAR_19->mbox_cmpl = VAR_16;
 VAR_19->vport = VAR_17;
 VAR_19->ctx_buf = VAR_21;
 VAR_22 = FUNC_8(VAR_18, VAR_19, VAR_14);
 if (VAR_22 == VAR_13) {
  VAR_22 = -VAR_2;
  goto fail;
 }
 return 0;

fail:
 if (VAR_19)
  FUNC_12(VAR_19, VAR_18->mbox_mem_pool);
 if (VAR_21) {
  if (VAR_21->virt)
   FUNC_5(VAR_18, VAR_21->virt, VAR_21->phys);
  FUNC_1(VAR_21);
 }

 FUNC_9(VAR_17, VAR_5);
 FUNC_6(VAR_17, VAR_8, VAR_9,
  "0289 Issue Register VFI failed: Err %d\n", VAR_22);
 return VAR_22;
}
