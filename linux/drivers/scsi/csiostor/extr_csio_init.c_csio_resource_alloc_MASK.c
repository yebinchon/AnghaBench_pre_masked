
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_wrm {scalar_t__ num_q; } ;
struct csio_rnode {int dummy; } ;
struct csio_mb {int dummy; } ;
struct csio_hw {int * mb_mempool; int * rnode_mempool; int scsi_dma_pool; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct csio_wrm* FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (char*,int *,int ,int,int ) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct csio_hw *VAR_8)
{
 struct csio_wrm *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = -VAR_7;

 VAR_9->num_q = ((VAR_4 * 2) + VAR_3 +
         VAR_0 + VAR_1 + VAR_2);

 VAR_8->mb_mempool = FUNC_2(VAR_5,
        sizeof(struct csio_mb));
 if (!VAR_8->mb_mempool)
  goto err;

 VAR_8->rnode_mempool = FUNC_2(VAR_5,
           sizeof(struct csio_rnode));
 if (!VAR_8->rnode_mempool)
  goto err_free_mb_mempool;

 VAR_8->scsi_dma_pool = FUNC_1("csio_scsi_dma_pool",
         &VAR_8->pdev->dev, VAR_6,
         8, 0);
 if (!VAR_8->scsi_dma_pool)
  goto err_free_rn_pool;

 return 0;

err_free_rn_pool:
 FUNC_3(VAR_8->rnode_mempool);
 VAR_8->rnode_mempool = ((void*)0);
err_free_mb_mempool:
 FUNC_3(VAR_8->mb_mempool);
 VAR_8->mb_mempool = ((void*)0);
err:
 return VAR_10;
}
