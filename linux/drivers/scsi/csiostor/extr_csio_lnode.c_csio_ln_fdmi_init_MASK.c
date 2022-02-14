
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct csio_lnode {int flags; TYPE_2__* mgmt_req; } ;
struct csio_ioreq {int dummy; } ;
struct csio_hw {TYPE_1__* pdev; } ;
struct csio_dma_buf {int len; int vaddr; int paddr; } ;
struct TYPE_5__ {struct csio_dma_buf dma_buf; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct csio_hw*,char*) ;
 int FUNC_2 (struct csio_lnode*,char*) ;
 struct csio_hw* FUNC_3 (struct csio_lnode*) ;
 int FUNC_4 (int *,int,int *,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(struct csio_lnode *VAR_4)
{
 struct csio_hw *VAR_5 = FUNC_3(VAR_4);
 struct csio_dma_buf *VAR_6;


 VAR_4->mgmt_req = FUNC_6(sizeof(struct csio_ioreq), VAR_2);
 if (!VAR_4->mgmt_req) {
  FUNC_2(VAR_4, "Failed to alloc ioreq for FDMI\n");
  FUNC_0(VAR_5, VAR_3);
  return -VAR_1;
 }


 VAR_6 = &VAR_4->mgmt_req->dma_buf;
 VAR_6->len = 2048;
 VAR_6->vaddr = FUNC_4(&VAR_5->pdev->dev, VAR_6->len,
      &VAR_6->paddr, VAR_2);
 if (!VAR_6->vaddr) {
  FUNC_1(VAR_5, "Failed to alloc DMA buffer for FDMI!\n");
  FUNC_5(VAR_4->mgmt_req);
  VAR_4->mgmt_req = ((void*)0);
  return -VAR_1;
 }

 VAR_4->flags |= VAR_0;
 return 0;
}
