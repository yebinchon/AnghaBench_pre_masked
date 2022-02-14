
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct status_block_e4 {int* pi_array; } ;
struct seq_file {struct qedi_ctx* private; } ;
struct qedi_fastpath {size_t sb_id; struct qed_sb_info* sb_info; } ;
struct qedi_ctx {int hba_lock; struct global_queue** global_queues; struct qedi_fastpath* fp_array; } ;
struct qed_sb_info {struct status_block_e4* sb_virt; } ;
struct global_queue {int cq_cons_idx; } ;


 int FUNC_0 (struct qedi_ctx*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct seq_file*,char*,int) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct seq_file *VAR_2, void *VAR_3)
{
 struct qedi_fastpath *VAR_4 = ((void*)0);
 struct qed_sb_info *VAR_5 = ((void*)0);
 struct status_block_e4 *VAR_6 = ((void*)0);
 struct global_queue *VAR_7 = ((void*)0);
 int VAR_8;
 u16 VAR_9;
 struct qedi_ctx *VAR_10 = VAR_2->private;
 unsigned long VAR_11;

 FUNC_2(VAR_2, " DUMP CQ CONTEXT:\n");

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_10); VAR_8++) {
  FUNC_3(&VAR_10->hba_lock, VAR_11);
  FUNC_1(VAR_2, "=========FAST CQ PATH [%d] ==========\n", VAR_8);
  VAR_4 = &VAR_10->fp_array[VAR_8];
  VAR_5 = VAR_4->sb_info;
  VAR_6 = VAR_5->sb_virt;
  VAR_9 = (VAR_6->pi_array[VAR_0] &
       VAR_1);
  FUNC_1(VAR_2, "SB PROD IDX: %d\n", VAR_9);
  VAR_7 = VAR_10->global_queues[VAR_4->sb_id];
  FUNC_1(VAR_2, "DRV CONS IDX: %d\n", VAR_7->cq_cons_idx);
  FUNC_1(VAR_2, "CQ complete host memory: %d\n", VAR_4->sb_id);
  FUNC_2(VAR_2, "=========== END ==================\n\n\n");
  FUNC_4(&VAR_10->hba_lock, VAR_11);
 }
 return 0;
}
