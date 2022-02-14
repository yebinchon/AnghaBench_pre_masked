
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mboxType; scalar_t__ state; } ;
struct lpfc_hba {TYPE_1__ mbox_ext_buf_ctx; } ;
struct lpfc_dmabuf {int dummy; } ;
struct bsg_job {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,struct bsg_job*) ;
 int FUNC_3 (struct lpfc_hba*,struct bsg_job*,struct lpfc_dmabuf*) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*,scalar_t__) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_5(struct lpfc_hba *VAR_8, struct bsg_job *VAR_9,
        struct lpfc_dmabuf *VAR_10)
{
 int VAR_11;

 FUNC_4(VAR_8, VAR_2, VAR_3,
   "2971 SLI_CONFIG buffer (type:x%x)\n",
   VAR_8->mbox_ext_buf_ctx.mboxType);

 if (VAR_8->mbox_ext_buf_ctx.mboxType == VAR_7) {
  if (VAR_8->mbox_ext_buf_ctx.state != VAR_4) {
   FUNC_4(VAR_8, VAR_1, VAR_3,
     "2972 SLI_CONFIG rd buffer state "
     "mismatch:x%x\n",
     VAR_8->mbox_ext_buf_ctx.state);
   FUNC_1(VAR_8);
   return -VAR_0;
  }
  VAR_11 = FUNC_2(VAR_8, VAR_9);
  if (VAR_11 == VAR_6)
   FUNC_0(VAR_8, VAR_10);
 } else {
  if (VAR_8->mbox_ext_buf_ctx.state != VAR_5) {
   FUNC_4(VAR_8, VAR_1, VAR_3,
     "2973 SLI_CONFIG wr buffer state "
     "mismatch:x%x\n",
     VAR_8->mbox_ext_buf_ctx.state);
   FUNC_1(VAR_8);
   return -VAR_0;
  }
  VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_10);
 }
 return VAR_11;
}
