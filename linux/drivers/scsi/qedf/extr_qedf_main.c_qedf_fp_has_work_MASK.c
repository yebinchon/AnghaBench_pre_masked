
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct status_block_e4 {scalar_t__* pi_array; } ;
struct qedf_fastpath {size_t sb_id; struct qed_sb_info* sb_info; struct qedf_ctx* qedf; } ;
struct qedf_ctx {struct global_queue** global_queues; } ;
struct qed_sb_info {struct status_block_e4* sb_virt; } ;
struct global_queue {scalar_t__ cq_prod_idx; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct qedf_fastpath *VAR_1)
{
 struct qedf_ctx *VAR_2 = VAR_1->qedf;
 struct global_queue *VAR_3;
 struct qed_sb_info *VAR_4 = VAR_1->sb_info;
 struct status_block_e4 *VAR_5 = VAR_4->sb_virt;
 u16 VAR_6;


 VAR_3 = VAR_2->global_queues[VAR_1->sb_id];


 FUNC_0();


 VAR_6 = VAR_5->pi_array[VAR_0];

 return (VAR_3->cq_prod_idx != VAR_6);
}
