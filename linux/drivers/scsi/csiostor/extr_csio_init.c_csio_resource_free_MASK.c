
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int * mb_mempool; int * rnode_mempool; int * scsi_dma_pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct csio_hw *VAR_0)
{
 FUNC_0(VAR_0->scsi_dma_pool);
 VAR_0->scsi_dma_pool = ((void*)0);
 FUNC_1(VAR_0->rnode_mempool);
 VAR_0->rnode_mempool = ((void*)0);
 FUNC_1(VAR_0->mb_mempool);
 VAR_0->mb_mempool = ((void*)0);
}
