
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lpfc_rdp_context {int (* cmpl ) (struct lpfc_hba*,struct lpfc_rdp_context*,int ) ;TYPE_2__* ndlp; int page_a2; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_9__ {int mqe; } ;
struct TYPE_11__ {struct lpfc_rdp_context* ctx_ndlp; int mbox_cmpl; int vport; TYPE_1__ u; scalar_t__ ctx_buf; } ;
struct TYPE_10__ {int vport; } ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct lpfc_hba*,TYPE_3__*) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_3__*) ;
 int FUNC_5 (int ,int *,int ) ;
 scalar_t__ FUNC_6 (struct lpfc_hba*,TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_rdp_context*,int ) ;

__attribute__((used)) static void
FUNC_9(struct lpfc_hba *VAR_6, LPFC_MBOXQ_t *VAR_7)
{
 struct lpfc_dmabuf *VAR_8 = (struct lpfc_dmabuf *)VAR_7->ctx_buf;
 struct lpfc_rdp_context *VAR_9 =
   (struct lpfc_rdp_context *)(VAR_7->ctx_ndlp);

 if (FUNC_0(VAR_5, &VAR_7->u.mqe))
  goto error_mbuf_free;

 FUNC_5(VAR_8->virt, &VAR_9->page_a2,
    VAR_0);


 FUNC_2(VAR_6, VAR_8->virt, VAR_8->phys);
 FUNC_1(VAR_8);

 FUNC_7(VAR_7, 0, sizeof(*VAR_7));
 FUNC_3(VAR_6, VAR_7);
 VAR_7->vport = VAR_9->ndlp->vport;
 VAR_7->mbox_cmpl = VAR_4;
 VAR_7->ctx_ndlp = (struct lpfc_rdp_context *)VAR_9;
 if (FUNC_6(VAR_6, VAR_7, VAR_3) == VAR_2)
  goto error_cmd_free;

 return;

error_mbuf_free:
 FUNC_2(VAR_6, VAR_8->virt, VAR_8->phys);
 FUNC_1(VAR_8);
error_cmd_free:
 FUNC_4(VAR_6, VAR_7);
 VAR_9->cmpl(VAR_6, VAR_9, VAR_1);
}
