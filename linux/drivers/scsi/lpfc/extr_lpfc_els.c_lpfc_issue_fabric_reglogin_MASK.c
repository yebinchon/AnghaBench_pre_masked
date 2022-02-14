
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct serv_parm {int dummy; } ;
struct lpfc_vport {int vpi; int port_state; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_rpi; } ;
struct lpfc_hba {int mbox_mem_pool; struct serv_parm fc_fabparam; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_7__ {scalar_t__ ctx_buf; int ctx_ndlp; struct lpfc_vport* vport; int mbox_cmpl; } ;
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
 int FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_1__*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ) ;
 int VAR_9 ;
 int FUNC_5 (struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_nodelist*) ;
 int FUNC_7 (struct lpfc_vport*,int ,int ,char*,int) ;
 int FUNC_8 (struct lpfc_hba*,int ,int ,int *,TYPE_1__*,int ) ;
 int VAR_10 ;
 int FUNC_9 (struct lpfc_hba*,TYPE_1__*,int ) ;
 int FUNC_10 (struct lpfc_vport*,int ) ;
 TYPE_1__* FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;

int
FUNC_13(struct lpfc_vport *VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_11->phba;
 LPFC_MBOXQ_t *VAR_13;
 struct lpfc_dmabuf *VAR_14;
 struct lpfc_nodelist *VAR_15;
 struct serv_parm *VAR_16;
 int VAR_17;
 int VAR_18 = 0;

 VAR_16 = &VAR_12->fc_fabparam;
 VAR_15 = FUNC_3(VAR_11, VAR_2);
 if (!VAR_15 || !FUNC_0(VAR_15)) {
  VAR_18 = 1;
  goto fail;
 }

 VAR_13 = FUNC_11(VAR_12->mbox_mem_pool, VAR_3);
 if (!VAR_13) {
  VAR_18 = 2;
  goto fail;
 }

 VAR_11->port_state = VAR_6;
 FUNC_2(VAR_12, VAR_13);
 VAR_13->mbox_cmpl = VAR_10;
 VAR_13->vport = VAR_11;

 VAR_17 = FUNC_9(VAR_12, VAR_13, VAR_8);
 if (VAR_17 == VAR_7) {
  VAR_18 = 3;
  goto fail_free_mbox;
 }

 VAR_13 = FUNC_11(VAR_12->mbox_mem_pool, VAR_3);
 if (!VAR_13) {
  VAR_18 = 4;
  goto fail;
 }
 VAR_17 = FUNC_8(VAR_12, VAR_11->vpi, VAR_2, (uint8_t *)VAR_16, VAR_13,
     VAR_15->nlp_rpi);
 if (VAR_17) {
  VAR_18 = 5;
  goto fail_free_mbox;
 }

 VAR_13->mbox_cmpl = VAR_9;
 VAR_13->vport = VAR_11;



 VAR_13->ctx_ndlp = FUNC_5(VAR_15);

 VAR_17 = FUNC_9(VAR_12, VAR_13, VAR_8);
 if (VAR_17 == VAR_7) {
  VAR_18 = 6;
  goto fail_issue_reg_login;
 }

 return 0;

fail_issue_reg_login:



 FUNC_6(VAR_15);
 VAR_14 = (struct lpfc_dmabuf *)VAR_13->ctx_buf;
 FUNC_4(VAR_12, VAR_14->virt, VAR_14->phys);
 FUNC_1(VAR_14);
fail_free_mbox:
 FUNC_12(VAR_13, VAR_12->mbox_mem_pool);

fail:
 FUNC_10(VAR_11, VAR_1);
 FUNC_7(VAR_11, VAR_4, VAR_5,
  "0249 Cannot issue Register Fabric login: Err %d\n", VAR_18);
 return -VAR_0;
}
