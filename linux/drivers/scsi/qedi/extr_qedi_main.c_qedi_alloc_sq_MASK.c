
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct qedi_endpoint {int sq_mem_size; int sq_pbl_size; scalar_t__ sq_dma; void* sq; void* sq_pbl; scalar_t__ sq_pbl_dma; } ;
struct qedi_ctx {TYPE_1__* pdev; int dbg_ctx; } ;
struct iscsi_wqe {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,int,scalar_t__*,int ) ;
 int FUNC_2 (int *,int,void*,scalar_t__) ;

int FUNC_3(struct qedi_ctx *VAR_5, struct qedi_endpoint *VAR_6)
{
 int VAR_7 = 0;
 u32 *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10;

 if (!VAR_6)
  return -VAR_0;


 VAR_6->sq_mem_size = VAR_4 * sizeof(struct iscsi_wqe);
 VAR_6->sq_mem_size += VAR_3 - 1;

 VAR_6->sq_pbl_size = (VAR_6->sq_mem_size / VAR_3) * sizeof(void *);
 VAR_6->sq_pbl_size = VAR_6->sq_pbl_size + VAR_3;

 VAR_6->sq = FUNC_1(&VAR_5->pdev->dev, VAR_6->sq_mem_size,
        &VAR_6->sq_dma, VAR_2);
 if (!VAR_6->sq) {
  FUNC_0(&VAR_5->dbg_ctx,
     "Could not allocate send queue.\n");
  VAR_7 = -VAR_1;
  goto out;
 }
 VAR_6->sq_pbl = FUNC_1(&VAR_5->pdev->dev, VAR_6->sq_pbl_size,
     &VAR_6->sq_pbl_dma, VAR_2);
 if (!VAR_6->sq_pbl) {
  FUNC_0(&VAR_5->dbg_ctx,
     "Could not allocate send queue PBL.\n");
  VAR_7 = -VAR_1;
  goto out_free_sq;
 }


 VAR_10 = VAR_6->sq_mem_size / VAR_3;
 VAR_9 = VAR_6->sq_dma;
 VAR_8 = (u32 *)VAR_6->sq_pbl;

 while (VAR_10--) {
  *VAR_8 = (u32)VAR_9;
  VAR_8++;
  *VAR_8 = (u32)((u64)VAR_9 >> 32);
  VAR_8++;
  VAR_9 += VAR_3;
 }

 return VAR_7;

out_free_sq:
 FUNC_2(&VAR_5->pdev->dev, VAR_6->sq_mem_size, VAR_6->sq,
     VAR_6->sq_dma);
out:
 return VAR_7;
}
