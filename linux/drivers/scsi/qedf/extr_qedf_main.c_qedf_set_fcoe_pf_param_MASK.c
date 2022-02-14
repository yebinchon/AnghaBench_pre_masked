
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct qedf_glbl_q_params {int dummy; } ;
struct TYPE_5__ {int sq_num_pbl_pages; int cq_num_entries; int num_cqs; int mtu; int * bdq_pbl_num_entries; int * bdq_pbl_base_addr; int rq_buffer_size; int gl_cmd_pi; int gl_rq_pi; int log_page_size; scalar_t__ rq_buffer_log_size; scalar_t__ glbl_q_params_addr; int num_tasks; int num_cons; } ;
struct TYPE_6__ {TYPE_2__ fcoe_pf_params; } ;
struct qedf_ctx {int num_queues; TYPE_3__ pf_params; int dbg_ctx; int bdq_pbl_list; int bdq_pbl_list_num_entries; int bdq_pbl_list_dma; scalar_t__ hw_p_cpuq; int p_cpuq; TYPE_1__* pdev; } ;
struct fcoe_wqe {int dummy; } ;
struct fcoe_cqe {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qedf_ctx*) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,char*,int,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int,scalar_t__*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (struct qedf_ctx*) ;

__attribute__((used)) static int FUNC_8(struct qedf_ctx *VAR_10)
{
 u8 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15;
 VAR_10->num_queues = FUNC_1(VAR_10);

 FUNC_3(&(VAR_10->dbg_ctx), VAR_6, "Number of CQs is %d.\n",
     VAR_10->num_queues);

 VAR_10->p_cpuq = FUNC_4(&VAR_10->pdev->dev,
     VAR_10->num_queues * sizeof(struct qedf_glbl_q_params),
     &VAR_10->hw_p_cpuq, VAR_2);

 if (!VAR_10->p_cpuq) {
  FUNC_2(&(VAR_10->dbg_ctx), "dma_alloc_coherent failed.\n");
  return 1;
 }

 VAR_15 = FUNC_7(VAR_10);
 if (VAR_15) {
  FUNC_2(&(VAR_10->dbg_ctx), "Global queue allocation "
     "failed.\n");
  return 1;
 }


 VAR_12 = VAR_9 * sizeof(struct fcoe_wqe);
 VAR_12 = FUNC_0(VAR_12, VAR_8);
 VAR_11 = (VAR_12 / VAR_8);


 VAR_13 = VAR_0 * sizeof(struct fcoe_cqe);
 VAR_13 = FUNC_0(VAR_13, VAR_8);
 VAR_14 = VAR_13 / sizeof(struct fcoe_cqe);

 FUNC_6(&(VAR_10->pf_params), 0, sizeof(VAR_10->pf_params));


 VAR_10->pf_params.fcoe_pf_params.num_cons = VAR_7;
 VAR_10->pf_params.fcoe_pf_params.num_tasks = VAR_1;
 VAR_10->pf_params.fcoe_pf_params.glbl_q_params_addr =
     (u64)VAR_10->hw_p_cpuq;
 VAR_10->pf_params.fcoe_pf_params.sq_num_pbl_pages = VAR_11;

 VAR_10->pf_params.fcoe_pf_params.rq_buffer_log_size = 0;

 VAR_10->pf_params.fcoe_pf_params.cq_num_entries = VAR_14;
 VAR_10->pf_params.fcoe_pf_params.num_cqs = VAR_10->num_queues;


 VAR_10->pf_params.fcoe_pf_params.log_page_size = FUNC_5(VAR_8);

 VAR_10->pf_params.fcoe_pf_params.mtu = 9000;
 VAR_10->pf_params.fcoe_pf_params.gl_rq_pi = VAR_5;
 VAR_10->pf_params.fcoe_pf_params.gl_cmd_pi = VAR_4;


 VAR_10->pf_params.fcoe_pf_params.bdq_pbl_base_addr[0] =
     VAR_10->bdq_pbl_list_dma;
 VAR_10->pf_params.fcoe_pf_params.bdq_pbl_num_entries[0] =
     VAR_10->bdq_pbl_list_num_entries;
 VAR_10->pf_params.fcoe_pf_params.rq_buffer_size = VAR_3;

 FUNC_3(&(VAR_10->dbg_ctx), VAR_6,
     "bdq_list=%p bdq_pbl_list_dma=%llx bdq_pbl_list_entries=%d.\n",
     VAR_10->bdq_pbl_list,
     VAR_10->pf_params.fcoe_pf_params.bdq_pbl_base_addr[0],
     VAR_10->pf_params.fcoe_pf_params.bdq_pbl_num_entries[0]);

 FUNC_3(&(VAR_10->dbg_ctx), VAR_6,
     "cq_num_entries=%d.\n",
     VAR_10->pf_params.fcoe_pf_params.cq_num_entries);

 return 0;
}
