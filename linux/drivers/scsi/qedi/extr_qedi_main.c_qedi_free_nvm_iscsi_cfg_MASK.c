
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedi_nvm_iscsi_image {int dummy; } ;
struct qedi_ctx {int nvm_buf_dma; scalar_t__ iscsi_image; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct qedi_ctx *VAR_0)
{
 if (VAR_0->iscsi_image)
  FUNC_0(&VAR_0->pdev->dev,
      sizeof(struct qedi_nvm_iscsi_image),
      VAR_0->iscsi_image, VAR_0->nvm_buf_dma);
}
