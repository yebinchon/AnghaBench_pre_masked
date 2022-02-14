
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_mbox_ext_buf_ctx {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; int ext_dmabuf_list; int mbx_dmabuf; } ;
struct lpfc_hba {TYPE_1__ mbox_ext_buf_ctx; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int *) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_1)
{
 if (VAR_1->mbox_ext_buf_ctx.state == VAR_0)
  return;


 FUNC_2(VAR_1,
        &VAR_1->mbox_ext_buf_ctx.ext_dmabuf_list);
 FUNC_1(VAR_1, VAR_1->mbox_ext_buf_ctx.mbx_dmabuf);

 FUNC_3((char *)&VAR_1->mbox_ext_buf_ctx, 0,
        sizeof(struct lpfc_mbox_ext_buf_ctx));
 FUNC_0(&VAR_1->mbox_ext_buf_ctx.ext_dmabuf_list);

 return;
}
