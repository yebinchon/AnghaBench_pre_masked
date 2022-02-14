
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union iscsi_cqe {int dummy; } iscsi_cqe ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct qedi_ctx {int num_queues; TYPE_2__** global_queues; scalar_t__ p_cpuq; int dbg_ctx; TYPE_1__* pdev; } ;
struct global_queue {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int cq_mem_size; int cq_pbl_size; scalar_t__ cq_pbl_dma; void* cq_pbl; scalar_t__ cq_dma; void* cq; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,TYPE_2__**) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,int,scalar_t__*,int ) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct qedi_ctx*) ;
 int FUNC_6 (struct qedi_ctx*) ;
 int FUNC_7 (struct qedi_ctx*) ;

__attribute__((used)) static int FUNC_8(struct qedi_ctx *VAR_5)
{
 u32 *VAR_6;
 int VAR_7;
 int VAR_8 = 0, VAR_9;
 u32 *VAR_10;
 dma_addr_t VAR_11;
 int VAR_12;





 if (!VAR_5->num_queues) {
  FUNC_0(&VAR_5->dbg_ctx, "No MSI-X vectors available!\n");
  return 1;
 }




 if (!VAR_5->p_cpuq) {
  VAR_8 = 1;
  goto mem_alloc_failure;
 }

 VAR_5->global_queues = FUNC_4((sizeof(struct global_queue *) *
           VAR_5->num_queues), VAR_1);
 if (!VAR_5->global_queues) {
  FUNC_0(&VAR_5->dbg_ctx,
    "Unable to allocate global queues array ptr memory\n");
  return -VAR_0;
 }
 FUNC_1(&VAR_5->dbg_ctx, VAR_3,
    "qedi->global_queues=%p.\n", VAR_5->global_queues);


 VAR_9 = FUNC_5(VAR_5);
 if (VAR_9)
  goto mem_alloc_failure;


 VAR_9 = FUNC_6(VAR_5);
 if (VAR_9)
  goto mem_alloc_failure;




 for (VAR_7 = 0; VAR_7 < VAR_5->num_queues; VAR_7++) {
  VAR_5->global_queues[VAR_7] =
     FUNC_4(sizeof(*VAR_5->global_queues[0]),
      VAR_1);
  if (!VAR_5->global_queues[VAR_7]) {
   FUNC_0(&VAR_5->dbg_ctx,
     "Unable to allocation global queue %d.\n", VAR_7);
   goto mem_alloc_failure;
  }

  VAR_5->global_queues[VAR_7]->cq_mem_size =
      (VAR_2 + 8) * sizeof(union iscsi_cqe);
  VAR_5->global_queues[VAR_7]->cq_mem_size =
      (VAR_5->global_queues[VAR_7]->cq_mem_size +
      (VAR_4 - 1));

  VAR_5->global_queues[VAR_7]->cq_pbl_size =
      (VAR_5->global_queues[VAR_7]->cq_mem_size /
      VAR_4) * sizeof(void *);
  VAR_5->global_queues[VAR_7]->cq_pbl_size =
      (VAR_5->global_queues[VAR_7]->cq_pbl_size +
      (VAR_4 - 1));

  VAR_5->global_queues[VAR_7]->cq = FUNC_3(&VAR_5->pdev->dev,
        VAR_5->global_queues[VAR_7]->cq_mem_size,
        &VAR_5->global_queues[VAR_7]->cq_dma,
        VAR_1);

  if (!VAR_5->global_queues[VAR_7]->cq) {
   FUNC_2(&VAR_5->dbg_ctx,
      "Could not allocate cq.\n");
   VAR_8 = -VAR_0;
   goto mem_alloc_failure;
  }
  VAR_5->global_queues[VAR_7]->cq_pbl = FUNC_3(&VAR_5->pdev->dev,
            VAR_5->global_queues[VAR_7]->cq_pbl_size,
            &VAR_5->global_queues[VAR_7]->cq_pbl_dma,
            VAR_1);

  if (!VAR_5->global_queues[VAR_7]->cq_pbl) {
   FUNC_2(&VAR_5->dbg_ctx,
      "Could not allocate cq PBL.\n");
   VAR_8 = -VAR_0;
   goto mem_alloc_failure;
  }


  VAR_12 = VAR_5->global_queues[VAR_7]->cq_mem_size /
      VAR_4;
  VAR_11 = VAR_5->global_queues[VAR_7]->cq_dma;
  VAR_10 = (u32 *)VAR_5->global_queues[VAR_7]->cq_pbl;

  while (VAR_12--) {
   *VAR_10 = (u32)VAR_11;
   VAR_10++;
   *VAR_10 = (u32)((u64)VAR_11 >> 32);
   VAR_10++;
   VAR_11 += VAR_4;
  }
 }

 VAR_6 = (u32 *)VAR_5->p_cpuq;







 for (VAR_7 = 0; VAR_7 < VAR_5->num_queues; VAR_7++) {
  *VAR_6 = (u32)VAR_5->global_queues[VAR_7]->cq_pbl_dma;
  VAR_6++;
  *VAR_6 = (u32)((u64)VAR_5->global_queues[VAR_7]->cq_pbl_dma >> 32);
  VAR_6++;

  *VAR_6 = (u32)0;
  VAR_6++;
  *VAR_6 = (u32)((u64)0 >> 32);
  VAR_6++;
 }

 return 0;

mem_alloc_failure:
 FUNC_7(VAR_5);
 return VAR_8;
}
