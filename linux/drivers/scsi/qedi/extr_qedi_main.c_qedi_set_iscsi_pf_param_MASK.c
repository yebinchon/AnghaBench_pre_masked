
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct qedi_glbl_q_params {int dummy; } ;
struct TYPE_6__ {int half_way_close_timeout; int num_queues; int two_msl_timer; int max_fin_rt; int log_page_size; int rqe_log_size; int cq_num_entries; int gl_cmd_pi; int gl_rq_pi; int rq_buffer_size; int * bdq_pbl_num_entries; int * bdq_pbl_base_addr; scalar_t__ glbl_q_params_addr; int debug_mode; void* num_uhq_pages_in_ring; void* num_r2tq_pages_in_ring; void* num_sq_pages_in_ring; int num_tasks; int num_cons; } ;
struct TYPE_5__ {TYPE_3__ iscsi_pf_params; } ;
struct qedi_ctx {int num_queues; TYPE_2__ pf_params; int bdq_pbl_list_num_entries; int bdq_pbl_list_dma; scalar_t__ hw_p_cpuq; int dbg_ctx; int p_cpuq; TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qedi_ctx*) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int,scalar_t__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (struct qedi_ctx*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct qedi_ctx *VAR_10)
{
 u8 VAR_11;
 u32 VAR_12;
 int VAR_13 = 0;


 VAR_11 = (VAR_2 * 8) / VAR_7;

 VAR_10->num_queues = FUNC_0(VAR_10);

 FUNC_2(&VAR_10->dbg_ctx, VAR_4,
    "Number of CQ count is %d\n", VAR_10->num_queues);

 FUNC_4(&VAR_10->pf_params.iscsi_pf_params, 0,
        sizeof(VAR_10->pf_params.iscsi_pf_params));

 VAR_10->p_cpuq = FUNC_3(&VAR_10->pdev->dev,
   VAR_10->num_queues * sizeof(struct qedi_glbl_q_params),
   &VAR_10->hw_p_cpuq, VAR_1);
 if (!VAR_10->p_cpuq) {
  FUNC_1(&VAR_10->dbg_ctx, "dma_alloc_coherent fail\n");
  VAR_13 = -1;
  goto err_alloc_mem;
 }

 VAR_13 = FUNC_5(VAR_10);
 if (VAR_13) {
  FUNC_1(&VAR_10->dbg_ctx, "Global queue allocation failed.\n");
  VAR_13 = -1;
  goto err_alloc_mem;
 }

 VAR_10->pf_params.iscsi_pf_params.num_cons = VAR_5;
 VAR_10->pf_params.iscsi_pf_params.num_tasks = VAR_6;
 VAR_10->pf_params.iscsi_pf_params.half_way_close_timeout = 10;
 VAR_10->pf_params.iscsi_pf_params.num_sq_pages_in_ring = VAR_11;
 VAR_10->pf_params.iscsi_pf_params.num_r2tq_pages_in_ring = VAR_11;
 VAR_10->pf_params.iscsi_pf_params.num_uhq_pages_in_ring = VAR_11;
 VAR_10->pf_params.iscsi_pf_params.num_queues = VAR_10->num_queues;
 VAR_10->pf_params.iscsi_pf_params.debug_mode = VAR_9;
 VAR_10->pf_params.iscsi_pf_params.two_msl_timer = 4000;
 VAR_10->pf_params.iscsi_pf_params.max_fin_rt = 2;

 for (VAR_12 = 0 ; VAR_12 < 32 ; VAR_12++) {
  if ((1 << VAR_12) == VAR_7)
   break;
 }
 VAR_10->pf_params.iscsi_pf_params.log_page_size = VAR_12;

 VAR_10->pf_params.iscsi_pf_params.glbl_q_params_addr =
          (u64)VAR_10->hw_p_cpuq;





 VAR_10->pf_params.iscsi_pf_params.rqe_log_size = 8;

 VAR_10->pf_params.iscsi_pf_params.bdq_pbl_base_addr[VAR_0] =
       VAR_10->bdq_pbl_list_dma;
 VAR_10->pf_params.iscsi_pf_params.bdq_pbl_num_entries[VAR_0] =
      VAR_10->bdq_pbl_list_num_entries;
 VAR_10->pf_params.iscsi_pf_params.rq_buffer_size = VAR_3;


 VAR_10->pf_params.iscsi_pf_params.cq_num_entries = 2048;

 VAR_10->pf_params.iscsi_pf_params.gl_rq_pi = VAR_8;
 VAR_10->pf_params.iscsi_pf_params.gl_cmd_pi = 1;

err_alloc_mem:
 return VAR_13;
}
