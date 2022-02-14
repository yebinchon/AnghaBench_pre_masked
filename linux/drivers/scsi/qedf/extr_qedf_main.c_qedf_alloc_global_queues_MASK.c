
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qedf_ctx {int num_queues; TYPE_2__** global_queues; scalar_t__ p_cpuq; int dbg_ctx; TYPE_1__* pdev; } ;
struct global_queue {int dummy; } ;
struct fcoe_cqe {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int cq_mem_size; int cq_pbl_size; int cq_dma; int cq_pbl_dma; scalar_t__ cq_cons_idx; void* cq_pbl; void* cq; } ;
struct TYPE_3__ {int dev; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,char*,TYPE_2__**) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int *,int,int*,int ) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (struct qedf_ctx*) ;
 int FUNC_9 (struct qedf_ctx*) ;

__attribute__((used)) static int FUNC_10(struct qedf_ctx *VAR_6)
{
 u32 *VAR_7;
 int VAR_8;
 int VAR_9 = 0, VAR_10;
 u32 *VAR_11;
 dma_addr_t VAR_12;
 int VAR_13;






 if (!VAR_6->num_queues) {
  FUNC_1(&(VAR_6->dbg_ctx), "No MSI-X vectors available!\n");
  return 1;
 }





 if (!VAR_6->p_cpuq) {
  VAR_9 = 1;
  FUNC_1(&VAR_6->dbg_ctx, "p_cpuq is NULL.\n");
  goto mem_alloc_failure;
 }

 VAR_6->global_queues = FUNC_7((sizeof(struct global_queue *)
     * VAR_6->num_queues), VAR_2);
 if (!VAR_6->global_queues) {
  FUNC_1(&(VAR_6->dbg_ctx), "Unable to allocate global "
     "queues array ptr memory\n");
  return -VAR_0;
 }
 FUNC_2(&(VAR_6->dbg_ctx), VAR_4,
     "qedf->global_queues=%p.\n", VAR_6->global_queues);


 VAR_10 = FUNC_8(VAR_6);
 if (VAR_10) {
  FUNC_1(&VAR_6->dbg_ctx, "Unable to allocate bdq.\n");
  goto mem_alloc_failure;
 }


 for (VAR_8 = 0; VAR_8 < VAR_6->num_queues; VAR_8++) {
  VAR_6->global_queues[VAR_8] = FUNC_7(sizeof(struct global_queue),
      VAR_2);
  if (!VAR_6->global_queues[VAR_8]) {
   FUNC_3(&(VAR_6->dbg_ctx), "Unable to allocate "
       "global queue %d.\n", VAR_8);
   VAR_9 = -VAR_0;
   goto mem_alloc_failure;
  }

  VAR_6->global_queues[VAR_8]->cq_mem_size =
      VAR_1 * sizeof(struct fcoe_cqe);
  VAR_6->global_queues[VAR_8]->cq_mem_size =
      FUNC_0(VAR_6->global_queues[VAR_8]->cq_mem_size, VAR_5);

  VAR_6->global_queues[VAR_8]->cq_pbl_size =
      (VAR_6->global_queues[VAR_8]->cq_mem_size /
      VAR_3) * sizeof(void *);
  VAR_6->global_queues[VAR_8]->cq_pbl_size =
      FUNC_0(VAR_6->global_queues[VAR_8]->cq_pbl_size, VAR_5);

  VAR_6->global_queues[VAR_8]->cq =
      FUNC_6(&VAR_6->pdev->dev,
           VAR_6->global_queues[VAR_8]->cq_mem_size,
           &VAR_6->global_queues[VAR_8]->cq_dma,
           VAR_2);

  if (!VAR_6->global_queues[VAR_8]->cq) {
   FUNC_3(&(VAR_6->dbg_ctx), "Could not allocate cq.\n");
   VAR_9 = -VAR_0;
   goto mem_alloc_failure;
  }

  VAR_6->global_queues[VAR_8]->cq_pbl =
      FUNC_6(&VAR_6->pdev->dev,
           VAR_6->global_queues[VAR_8]->cq_pbl_size,
           &VAR_6->global_queues[VAR_8]->cq_pbl_dma,
           VAR_2);

  if (!VAR_6->global_queues[VAR_8]->cq_pbl) {
   FUNC_3(&(VAR_6->dbg_ctx), "Could not allocate cq PBL.\n");
   VAR_9 = -VAR_0;
   goto mem_alloc_failure;
  }


  VAR_13 = VAR_6->global_queues[VAR_8]->cq_mem_size /
      VAR_5;
  VAR_12 = VAR_6->global_queues[VAR_8]->cq_dma;
  VAR_11 = (u32 *)VAR_6->global_queues[VAR_8]->cq_pbl;

  while (VAR_13--) {
   *VAR_11 = FUNC_5(VAR_12);
   VAR_11++;
   *VAR_11 = FUNC_4(VAR_12);
   VAR_11++;
   VAR_12 += VAR_5;
  }

  VAR_6->global_queues[VAR_8]->cq_cons_idx = 0;
 }

 VAR_7 = (u32 *)VAR_6->p_cpuq;







 for (VAR_8 = 0; VAR_8 < VAR_6->num_queues; VAR_8++) {
  *VAR_7 = FUNC_5(VAR_6->global_queues[VAR_8]->cq_pbl_dma);
  VAR_7++;
  *VAR_7 = FUNC_4(VAR_6->global_queues[VAR_8]->cq_pbl_dma);
  VAR_7++;
  *VAR_7 = FUNC_5(0);
  VAR_7++;
  *VAR_7 = FUNC_4(0);
  VAR_7++;
 }

 return 0;

mem_alloc_failure:
 FUNC_9(VAR_6);
 return VAR_9;
}
