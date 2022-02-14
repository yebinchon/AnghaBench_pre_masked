
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nvmefc_ls_req {int (* done ) (struct nvmefc_ls_req*,int) ;} ;
struct lpfc_wcqe_complete {int parameter; } ;
struct lpfc_vport {TYPE_1__* localport; } ;
struct lpfc_nvme_lport {int cmpl_ls_err; int cmpl_ls_xb; int fc4NvmeLsCmpls; } ;
struct lpfc_nodelist {int nlp_DID; } ;
struct lpfc_iocbq {int * context1; int sli4_xritag; int * context3; scalar_t__ context2; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_2__ {scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct lpfc_wcqe_complete*) ;
 int FUNC_2 (struct lpfc_dmabuf*) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ) ;
 int FUNC_4 (struct lpfc_nodelist*) ;
 int FUNC_5 (struct lpfc_hba*,char*,int ,int,int) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,struct nvmefc_ls_req*,int ,int ,int,...) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct nvmefc_ls_req*,int) ;

__attribute__((used)) static void
FUNC_9(struct lpfc_hba *VAR_6, struct lpfc_iocbq *VAR_7,
         struct lpfc_wcqe_complete *VAR_8)
{
 struct lpfc_vport *VAR_9 = VAR_7->vport;
 struct lpfc_nvme_lport *VAR_10;
 uint32_t VAR_11;
 struct nvmefc_ls_req *VAR_12;
 struct lpfc_dmabuf *VAR_13;
 struct lpfc_nodelist *VAR_14;

 VAR_12 = (struct nvmefc_ls_req *)VAR_7->context2;
 VAR_11 = FUNC_1(VAR_4, VAR_8) & VAR_3;

 if (VAR_9->localport) {
  VAR_10 = (struct lpfc_nvme_lport *)VAR_9->localport->private;
  if (VAR_10) {
   FUNC_0(&VAR_10->fc4NvmeLsCmpls);
   if (VAR_11) {
    if (FUNC_1(VAR_5, VAR_8))
     FUNC_0(&VAR_10->cmpl_ls_xb);
    FUNC_0(&VAR_10->cmpl_ls_err);
   }
  }
 }

 VAR_14 = (struct lpfc_nodelist *)VAR_7->context1;
 FUNC_6(VAR_9, VAR_1, VAR_2,
    "6047 nvme cmpl Enter "
    "Data %px DID %x Xri: %x status %x reason x%x "
    "cmd:x%px lsreg:x%px bmp:x%px ndlp:x%px\n",
    VAR_12, VAR_14 ? VAR_14->nlp_DID : 0,
    VAR_7->sli4_xritag, VAR_11,
    (VAR_8->parameter & 0xffff),
    VAR_7, VAR_12, VAR_7->context3, VAR_14);

 FUNC_5(VAR_6, "NVME LS  CMPL: xri x%x stat x%x parm x%x\n",
    VAR_7->sli4_xritag, VAR_11, VAR_8->parameter);

 if (VAR_7->context3) {
  VAR_13 = (struct lpfc_dmabuf *)VAR_7->context3;
  FUNC_3(VAR_6, VAR_13->virt, VAR_13->phys);
  FUNC_2(VAR_13);
  VAR_7->context3 = ((void*)0);
 }
 if (VAR_12->done)
  VAR_12->done(VAR_12, VAR_11);
 else
  FUNC_6(VAR_9, VAR_0, VAR_2,
     "6046 nvme cmpl without done call back? "
     "Data %px DID %x Xri: %x status %x\n",
    VAR_12, VAR_14 ? VAR_14->nlp_DID : 0,
    VAR_7->sli4_xritag, VAR_11);
 if (VAR_14) {
  FUNC_4(VAR_14);
  VAR_7->context1 = ((void*)0);
 }
 FUNC_7(VAR_6, VAR_7);
}
