
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct status_block_e4 {int* pi_array; } ;
struct qedf_ioreq {unsigned int cpu; int int_cpu; } ;
struct qedf_io_work {int work; int * fp; struct qedf_ctx* qedf; int cqe; } ;
struct qedf_fastpath {size_t sb_id; size_t cq_num_entries; struct qedf_ctx* qedf; int completions; struct qed_sb_info* sb_info; } ;
struct qedf_ctx {int dbg_ctx; int io_mempool; TYPE_1__* cmd_mgr; struct global_queue** global_queues; } ;
struct qed_sb_info {struct status_block_e4* sb_virt; } ;
struct global_queue {int cq_prod_idx; size_t cq_cons_idx; struct fcoe_cqe* cq; } ;
struct fcoe_cqe {int cqe_data; } ;
struct TYPE_2__ {struct qedf_ioreq* cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 size_t VAR_5 ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct fcoe_cqe*,int) ;
 struct qedf_io_work* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct qedf_io_work*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct qedf_ctx*,size_t,struct fcoe_cqe*) ;
 int FUNC_7 (unsigned int,int ,int *) ;
 int FUNC_8 () ;

__attribute__((used)) static bool FUNC_9(struct qedf_fastpath *VAR_9)
{
 struct qedf_ctx *VAR_10 = VAR_9->qedf;
 struct qed_sb_info *VAR_11 = VAR_9->sb_info;
 struct status_block_e4 *VAR_12 = VAR_11->sb_virt;
 struct global_queue *VAR_13;
 u16 VAR_14;
 struct fcoe_cqe *VAR_15;
 struct qedf_io_work *VAR_16;
 int VAR_17 = 0;
 unsigned int VAR_18;
 struct qedf_ioreq *VAR_19 = ((void*)0);
 u16 VAR_20;
 u16 VAR_21;
 u32 VAR_22;


 VAR_14 = VAR_12->pi_array[VAR_5];


 VAR_13 = VAR_10->global_queues[VAR_9->sb_id];


 VAR_21 = (VAR_14 >= VAR_13->cq_prod_idx) ?
     (VAR_14 - VAR_13->cq_prod_idx) :
     0x10000 - VAR_13->cq_prod_idx + VAR_14;


 VAR_13->cq_prod_idx = VAR_14;

 while (VAR_21) {
  VAR_9->completions++;
  VAR_17++;
  VAR_15 = &VAR_13->cq[VAR_13->cq_cons_idx];

  VAR_22 = (VAR_15->cqe_data >> VAR_1) &
      VAR_0;





  if (VAR_22 == VAR_3) {
   FUNC_1(&(VAR_10->dbg_ctx), VAR_6,
      "Unsolicated CQE.\n");
   FUNC_6(VAR_10, VAR_9->sb_id, VAR_15);




   goto inc_idx;
  }

  VAR_20 = VAR_15->cqe_data & VAR_2;
  VAR_19 = &VAR_10->cmd_mgr->cmds[VAR_20];





  if (!VAR_19)



   VAR_18 = 0;
  else {
   VAR_18 = VAR_19->cpu;
   VAR_19->int_cpu = FUNC_8();
  }

  VAR_16 = FUNC_4(VAR_10->io_mempool, VAR_4);
  if (!VAR_16) {
   FUNC_2(&(VAR_10->dbg_ctx), "Could not allocate "
       "work for I/O completion.\n");
   continue;
  }
  FUNC_5(VAR_16, 0, sizeof(struct qedf_io_work));

  FUNC_0(&VAR_16->work, VAR_7);


  FUNC_3(&VAR_16->cqe, VAR_15, sizeof(struct fcoe_cqe));

  VAR_16->qedf = VAR_9->qedf;
  VAR_16->fp = ((void*)0);

  FUNC_7(VAR_18, VAR_8, &VAR_16->work);

inc_idx:
  VAR_13->cq_cons_idx++;
  if (VAR_13->cq_cons_idx == VAR_9->cq_num_entries)
   VAR_13->cq_cons_idx = 0;
  VAR_21--;
 }

 return 1;
}
