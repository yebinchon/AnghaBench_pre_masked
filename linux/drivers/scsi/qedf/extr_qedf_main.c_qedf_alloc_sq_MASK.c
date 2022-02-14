
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qedf_rport {int sq_mem_size; int sq_pbl_size; int sq_dma; int sq_pbl_dma; void* sq; void* sq_pbl; } ;
struct qedf_ctx {TYPE_1__* pdev; int dbg_ctx; } ;
struct fcoe_wqe {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int *,int,int*,int ) ;
 int FUNC_5 (int *,int,void*,int) ;

__attribute__((used)) static int FUNC_6(struct qedf_ctx *VAR_3, struct qedf_rport *VAR_4)
{
 int VAR_5 = 0;
 u32 *VAR_6;
 dma_addr_t VAR_7;
 int VAR_8;


 VAR_4->sq_mem_size = VAR_2 * sizeof(struct fcoe_wqe);
 VAR_4->sq_mem_size = FUNC_0(VAR_4->sq_mem_size, VAR_1);
 VAR_4->sq_pbl_size = (VAR_4->sq_mem_size / VAR_1) *
     sizeof(void *);
 VAR_4->sq_pbl_size = VAR_4->sq_pbl_size + VAR_1;

 VAR_4->sq = FUNC_4(&VAR_3->pdev->dev, VAR_4->sq_mem_size,
     &VAR_4->sq_dma, VAR_0);
 if (!VAR_4->sq) {
  FUNC_1(&(VAR_3->dbg_ctx), "Could not allocate send queue.\n");
  VAR_5 = 1;
  goto out;
 }

 VAR_4->sq_pbl = FUNC_4(&VAR_3->pdev->dev,
         VAR_4->sq_pbl_size,
         &VAR_4->sq_pbl_dma, VAR_0);
 if (!VAR_4->sq_pbl) {
  FUNC_1(&(VAR_3->dbg_ctx), "Could not allocate send queue PBL.\n");
  VAR_5 = 1;
  goto out_free_sq;
 }


 VAR_8 = VAR_4->sq_mem_size / VAR_1;
 VAR_7 = VAR_4->sq_dma;
 VAR_6 = (u32 *)VAR_4->sq_pbl;

 while (VAR_8--) {
  *VAR_6 = FUNC_3(VAR_7);
  VAR_6++;
  *VAR_6 = FUNC_2(VAR_7);
  VAR_6++;
  VAR_7 += VAR_1;
 }

 return VAR_5;

out_free_sq:
 FUNC_5(&VAR_3->pdev->dev, VAR_4->sq_mem_size, VAR_4->sq,
     VAR_4->sq_dma);
out:
 return VAR_5;
}
