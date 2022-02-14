
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct status_block_e4 {int* pi_array; } ;
struct qedi_fastpath {size_t sb_id; struct qed_sb_info* sb_info; struct qedi_ctx* qedi; } ;
struct qedi_ctx {struct global_queue** global_queues; } ;
struct qed_sb_info {struct status_block_e4* sb_virt; } ;
struct global_queue {int cq_cons_idx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct qedi_fastpath *VAR_2)
{
 struct qedi_ctx *VAR_3 = VAR_2->qedi;
 struct global_queue *VAR_4;
 struct qed_sb_info *VAR_5 = VAR_2->sb_info;
 struct status_block_e4 *VAR_6 = VAR_5->sb_virt;
 u16 VAR_7;

 FUNC_0();


 VAR_7 = VAR_6->pi_array[VAR_1];


 VAR_4 = VAR_3->global_queues[VAR_2->sb_id];


 if (VAR_7 >= VAR_0)
  VAR_7 = VAR_7 % VAR_0;

 return (VAR_4->cq_cons_idx != VAR_7);
}
