
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct scsi_sgl_task_params {int dummy; } ;
struct scsi_sge {int dummy; } ;
struct qedf_ioreq {void* sgl_task_params; void* task_params; void* sense_buffer; int sense_buffer_dma; int rrq_work; scalar_t__ xid; int timeout_work; } ;
struct qedf_ctx {int dbg_ctx; TYPE_1__* pdev; int num_queues; } ;
struct qedf_cmd_mgr {int free_list_cnt; struct io_bdt** io_bdt_pool; struct qedf_ioreq* cmds; int lock; struct qedf_ctx* qedf; } ;
struct io_bdt {void* bd_tbl; int bd_tbl_dma; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,char*,scalar_t__,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *,int,int *,int ) ;
 struct io_bdt* FUNC_7 (int,int ) ;
 struct io_bdt** FUNC_8 (int,int,int ) ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (struct qedf_cmd_mgr*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 struct qedf_cmd_mgr* FUNC_12 (int) ;

struct qedf_cmd_mgr *FUNC_13(struct qedf_ctx *VAR_9)
{
 struct qedf_cmd_mgr *VAR_10;
 struct io_bdt *VAR_11;
 struct qedf_ioreq *VAR_12;
 u16 VAR_13;
 int VAR_14;
 int VAR_15;
 u16 VAR_16 = 0;
 u16 VAR_17 = (VAR_0 - 1);


 if (!VAR_9->num_queues) {
  FUNC_1(&(VAR_9->dbg_ctx), "num_queues is not set.\n");
  return ((void*)0);
 }

 if (VAR_17 <= VAR_16 || VAR_17 == VAR_1) {
  FUNC_3(&(VAR_9->dbg_ctx), "Invalid min_xid 0x%x and "
      "max_xid 0x%x.\n", VAR_16, VAR_17);
  return ((void*)0);
 }

 FUNC_2(&(VAR_9->dbg_ctx), VAR_3, "min xid 0x%x, max xid "
     "0x%x.\n", VAR_16, VAR_17);

 VAR_15 = VAR_17 - VAR_16 + 1;

 VAR_10 = FUNC_12(sizeof(struct qedf_cmd_mgr));
 if (!VAR_10) {
  FUNC_3(&(VAR_9->dbg_ctx), "Failed to alloc cmd mgr.\n");
  return ((void*)0);
 }

 VAR_10->qedf = VAR_9;
 FUNC_11(&VAR_10->lock);




 VAR_13 = 0;

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  VAR_12 = &VAR_10->cmds[VAR_14];
  FUNC_0(&VAR_12->timeout_work, VAR_7);

  VAR_12->xid = VAR_13++;

  FUNC_0(&VAR_12->rrq_work, VAR_8);


  VAR_12->sense_buffer = FUNC_6(&VAR_9->pdev->dev,
      VAR_6, &VAR_12->sense_buffer_dma,
      VAR_2);
  if (!VAR_12->sense_buffer) {
   FUNC_1(&VAR_9->dbg_ctx,
     "Failed to alloc sense buffer.\n");
   goto mem_err;
  }


  VAR_12->task_params = FUNC_9(sizeof(*VAR_12->task_params),
           VAR_2);
  if (!VAR_12->task_params) {
   FUNC_1(&(VAR_9->dbg_ctx),
     "Failed to allocate task_params for xid=0x%x\n",
     VAR_14);
   goto mem_err;
  }





  VAR_12->sgl_task_params = FUNC_9(
      sizeof(struct scsi_sgl_task_params), VAR_2);
  if (!VAR_12->sgl_task_params) {
   FUNC_1(&(VAR_9->dbg_ctx),
     "Failed to allocate sgl_task_params for xid=0x%x\n",
     VAR_14);
   goto mem_err;
  }
 }


 VAR_10->io_bdt_pool = FUNC_8(VAR_15, sizeof(struct io_bdt *),
     VAR_2);

 if (!VAR_10->io_bdt_pool) {
  FUNC_3(&(VAR_9->dbg_ctx), "Failed to alloc io_bdt_pool.\n");
  goto mem_err;
 }

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  VAR_10->io_bdt_pool[VAR_14] = FUNC_7(sizeof(struct io_bdt),
      VAR_2);
  if (!VAR_10->io_bdt_pool[VAR_14]) {
   FUNC_3(&(VAR_9->dbg_ctx),
      "Failed to alloc io_bdt_pool[%d].\n", VAR_14);
   goto mem_err;
  }
 }

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  VAR_11 = VAR_10->io_bdt_pool[VAR_14];
  VAR_11->bd_tbl = FUNC_6(&VAR_9->pdev->dev,
      VAR_5 * sizeof(struct scsi_sge),
      &VAR_11->bd_tbl_dma, VAR_2);
  if (!VAR_11->bd_tbl) {
   FUNC_3(&(VAR_9->dbg_ctx),
      "Failed to alloc bdt_tbl[%d].\n", VAR_14);
   goto mem_err;
  }
 }
 FUNC_5(&VAR_10->free_list_cnt, VAR_15);
 FUNC_2(&(VAR_9->dbg_ctx), VAR_4,
     "cmgr->free_list_cnt=%d.\n",
     FUNC_4(&VAR_10->free_list_cnt));

 return VAR_10;

mem_err:
 FUNC_10(VAR_10);
 return ((void*)0);
}
