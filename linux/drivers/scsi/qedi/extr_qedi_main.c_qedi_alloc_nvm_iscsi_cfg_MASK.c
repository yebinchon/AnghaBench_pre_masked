
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedi_nvm_iscsi_image {int dummy; } ;
struct qedi_ctx {int nvm_buf_dma; int iscsi_image; int dbg_ctx; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct qedi_ctx *VAR_3)
{
 VAR_3->iscsi_image = FUNC_2(&VAR_3->pdev->dev,
            sizeof(struct qedi_nvm_iscsi_image),
            &VAR_3->nvm_buf_dma, VAR_1);
 if (!VAR_3->iscsi_image) {
  FUNC_0(&VAR_3->dbg_ctx, "Could not allocate NVM BUF.\n");
  return -VAR_0;
 }
 FUNC_1(&VAR_3->dbg_ctx, VAR_2,
    "NVM BUF addr=0x%p dma=0x%llx.\n", VAR_3->iscsi_image,
    VAR_3->nvm_buf_dma);

 return 0;
}
