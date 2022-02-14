
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvmefc_ls_req {int rqstlen; int rsplen; int timeout; struct fcnvme_ls_disconnect_acc* rspaddr; struct fcnvme_ls_disconnect_rqst* rqstaddr; void* private; } ;
struct nvmefc_ls_req_op {struct nvmefc_ls_req ls_req; } ;
struct nvme_fc_ctrl {scalar_t__ association_id; int rport; TYPE_2__* lport; } ;
struct fcnvme_lsdesc_disconn_cmd {int dummy; } ;
struct fcnvme_lsdesc_assoc_id {int dummy; } ;
struct TYPE_10__ {void* id; int scope; void* desc_len; void* desc_tag; } ;
struct TYPE_9__ {void* association_id; void* desc_len; void* desc_tag; } ;
struct TYPE_8__ {int ls_cmd; } ;
struct fcnvme_ls_disconnect_rqst {TYPE_5__ discon_cmd; TYPE_4__ associd; void* desc_list_len; TYPE_3__ w0; } ;
struct fcnvme_ls_disconnect_acc {int dummy; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {int lsrqst_priv_sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct nvmefc_ls_req_op*) ;
 struct nvmefc_ls_req_op* FUNC_4 (int,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,struct nvmefc_ls_req_op*,int ) ;

__attribute__((used)) static void
FUNC_6(struct nvme_fc_ctrl *VAR_7)
{
 struct fcnvme_ls_disconnect_rqst *VAR_8;
 struct fcnvme_ls_disconnect_acc *VAR_9;
 struct nvmefc_ls_req_op *VAR_10;
 struct nvmefc_ls_req *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4((sizeof(*VAR_10) +
    VAR_7->lport->ops->lsrqst_priv_sz +
    sizeof(*VAR_8) + sizeof(*VAR_9)),
   VAR_4);
 if (!VAR_10)

  return;

 VAR_11 = &VAR_10->ls_req;

 VAR_11->private = (void *)&VAR_10[1];
 VAR_8 = (struct fcnvme_ls_disconnect_rqst *)
   (VAR_11->private + VAR_7->lport->ops->lsrqst_priv_sz);
 VAR_9 = (struct fcnvme_ls_disconnect_acc *)&VAR_8[1];

 VAR_8->w0.ls_cmd = VAR_3;
 VAR_8->desc_list_len = FUNC_0(
    sizeof(struct fcnvme_lsdesc_assoc_id) +
    sizeof(struct fcnvme_lsdesc_disconn_cmd));

 VAR_8->associd.desc_tag = FUNC_0(VAR_1);
 VAR_8->associd.desc_len =
   FUNC_2(
    sizeof(struct fcnvme_lsdesc_assoc_id));

 VAR_8->associd.association_id = FUNC_1(VAR_7->association_id);

 VAR_8->discon_cmd.desc_tag = FUNC_0(
      VAR_2);
 VAR_8->discon_cmd.desc_len =
   FUNC_2(
    sizeof(struct fcnvme_lsdesc_disconn_cmd));
 VAR_8->discon_cmd.scope = VAR_0;
 VAR_8->discon_cmd.id = FUNC_1(VAR_7->association_id);

 VAR_11->rqstaddr = VAR_8;
 VAR_11->rqstlen = sizeof(*VAR_8);
 VAR_11->rspaddr = VAR_9;
 VAR_11->rsplen = sizeof(*VAR_9);
 VAR_11->timeout = VAR_5;

 VAR_12 = FUNC_5(VAR_7->rport, VAR_10,
    VAR_6);
 if (VAR_12)
  FUNC_3(VAR_10);


 VAR_7->association_id = 0;
}
