
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct csio_lnode {TYPE_2__* mgmt_req; } ;
struct csio_hw {TYPE_1__* pdev; } ;
struct csio_dma_buf {int paddr; scalar_t__ vaddr; int len; } ;
struct TYPE_4__ {struct csio_dma_buf dma_buf; } ;
struct TYPE_3__ {int dev; } ;


 struct csio_hw* FUNC_0 (struct csio_lnode*) ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(struct csio_lnode *VAR_0)
{
 struct csio_dma_buf *VAR_1;
 struct csio_hw *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_0->mgmt_req)
  return 0;

 VAR_1 = &VAR_0->mgmt_req->dma_buf;
 if (VAR_1->vaddr)
  FUNC_1(&VAR_2->pdev->dev, VAR_1->len, VAR_1->vaddr,
        VAR_1->paddr);

 FUNC_2(VAR_0->mgmt_req);
 return 0;
}
